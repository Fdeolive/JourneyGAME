//
// Created by Fernanda Girelli on 10/4/23.
//

#include "JourneyGame.h"
#include <unistd.h>



    JourneyGame:: JourneyGame()
    {
        //All player vector
        playerOptions.push_back(make_unique<DrGoodMan>());
        playerOptions.push_back(make_unique<SallySue>());
        playerOptions.push_back(make_unique<JimmyJay>());
        playerOptions.push_back(make_unique<TimothyTimberland>());

        //All tasks vector
        taskOptions.push_back(make_unique<Bridge>());
        taskOptions.push_back(make_unique<Snakes>());
        taskOptions.push_back(make_unique<DanceBattle>());
        taskOptions.push_back(make_unique<Sword>());
        taskOptions.push_back(make_unique<ForeignTest>());



    }


    //User Input for keeping the game running
    string JourneyGame::userInput()
    {
        string inputU;
        cout<<"Enter p to play and q to quit"<<endl;
        getline(cin,inputU);
        while(inputU!="p"&&inputU!="q")
        {
            cout<<"Please enter a valid response to proceed"<<endl;
            getline(cin,inputU);
        }
        return inputU;
    }
    //Gets user selections for player they want
    int JourneyGame::playerSelection()
    {
        cout<<"These are your character choices:\n"<<endl;
        for(int i=0;i<playerOptions.size();i++)
        {
            cout<<"\n"<<i+1<<": "<<endl;
            playerOptions[i]->getAttributes(cout);
            sleep(2);
        }
        cout<<"Please pick the number for character you would like to pick "<<endl;
        string playerString;
        int playerNum;
        getline(cin,playerString);
        while(playerString!="1"&&playerString!="2"&&playerString!="3"&&playerString!="4"&&playerString!="5")
        {
            cout<<"Please enter a valid character option"<<endl;
            getline(cin,playerString);
        }
        playerNum=stoi(playerString);
        return playerNum;

    }
    //Randomizes the task the user gets during the game
    int JourneyGame::task(int characterIndex) {

        random_device rd;
        mt19937 n(rd());
        shuffle(tasks.begin(), tasks.end(), n);
        int taskNum = tasks[tasks.size()-1];
        //The narrator gives a lead up to the task
        taskOptions[taskNum]->getLeadUp();

        //Checks how the characters will react to the certain task
        if(playerOptions[characterIndex-1]->purpose(taskNum+1,cout)<=-1)
        {
            cout<<"\nNarrator:"<<endl;
            cout<<"Better luck next time.";
        } else
        {

            if(taskOptions[taskNum]->taskMechanics()>=1)
            {
                playerOptions[characterIndex-1]->setNumOfLives(1);
                cout<<"\nNarrator:"<<endl;
                cout<<"Better luck next time.";
            }
            else
            {
                cout<<"\nNarrator:"<<endl;
                cout<<"Good job, you're one step closer to the ruby!";
            }
        }

        //Removes that task, so it may only appear once during the game
        tasks.pop_back();
        cout<<"You currently have "<<playerOptions[characterIndex-1]->getNumOfLive()<<" HEARTS"<<endl;
        return (playerOptions[characterIndex-1]->getNumOfLive());

    }


