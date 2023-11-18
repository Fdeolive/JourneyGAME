//
// Created by Fernanda Girelli on 10/4/23.
//

#include "Bridge.h"
Bridge::Bridge():  CharacterTasks(){}



    void Bridge::getLeadUp()
    {
        cout<<"Narrator:"<<endl;
        cout<<"We are coming up towards the PuttyPass. Be careful the only way the trolls will let you pass is if you figure out their riddle."<<endl;
    }

    int Bridge::taskMechanics()
    {
        string riddle;
        string answer;
        string reply;
        //Read in file
        ifstream inFile;
        inFile.open("../riddleFile.txt");

        getline(inFile,riddle);
        getline(inFile,answer);

        inFile.close();
        cout<<"Trolls:"<<endl;
        cout<<"No one crosses our bridge without answering our riddle"<<endl;
        cout<<"You get one chance to answer our riddle."<<endl;
        cout<<"\n"<<riddle<<"\n"<<endl;
        cout<<"What will your answer be?"<<endl;
        getline(cin,reply);

        if(reply!=answer)
        {
            cout<<"\nNarrator:"<<endl;
            cout<<"You got the answer wrong and got thrown off the bridge -1HEART"<<endl;
            return 1;
        }
        cout<<"\nNarrator:"<<endl;
        cout<<"You figured out the riddle!"<<endl;
        return 0;

    }



