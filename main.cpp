//
// Created by Fernanda Girelli on 10/2/23.
//
#include "JourneyGame.h"
#include <unistd.h>


int main()
{
    bool again=true;
    while(again) {
        JourneyGame jg;



        cout << "Welcome to Mountains Peak" << endl;
        string userI = jg.userInput();
        while (userI != "q") {
            cout << "Narrator:" << endl;
            cout<< "Mountains Peak is need of your help! A once prosperous land has become barren since the island's ruby went missing.The ruby has been spotted on the top of Mount Vernon, we need you to go and retrieve it"<< endl;
            cout<< "You will pick a character to make the journey up Mount Vernon. Along the way you will face 3 tasks.Each character has strengths and weakness and those strength might be."
                       "helpful for completely the task. But be mindful that their weakness might be deadly. Each character has 3 hearts. "
                       "If you fail a task you lose hearts, try to make it up the mountain without losing all your hearts! "<< endl;
            sleep(3);
            int playerNum = jg.playerSelection();
            cout << "Are you read to save the island?" << endl;
            userI = jg.userInput();
            //Starting the journey
            cout << "Narrator:" << endl;
            cout << "Lets head towards the mountains" << endl;
            //3 tasks
            for (int i = 0; i < 3; i++) {
                cout << "--WALKING---" << endl;
                sleep(2);
                int numOfPlayer = jg.task(playerNum);
                if (numOfPlayer == 0) {
                    cout << "\nNarrator:" << endl;
                    cout << "You lost all your hearts" << endl;
                    cout << "\nGAME OVER" << endl;
                    userI = "q";
                    break;
                } else {
                    cout << "Narrator:" << endl;
                    cout << "Lets keep going!" << endl;
                }
                sleep(2);
                userI = jg.userInput();
                if (userI == "q") {
                    break;

                }

            }
            if (userI == "q") {
                cout << "You quit the game" << endl;

            } else {
                cout << "You reached the ruby and saved our island!" << endl;
                userI = "q";
            }


        }
        string userAnswer;
        cout<<"Would you like to play again? y/n"<<endl;
        getline(cin,userAnswer);
        while(userAnswer!="y" && userAnswer!="Y" && userAnswer!="n" && userAnswer!="N" )
        {
            cout<<"Not a valid response, please pick y or n"<<endl;
            getline(cin,userAnswer);
        }
        if(userAnswer=="n" || userAnswer=="N")
        {
            again=false;
        }
    }
    return 0;
}