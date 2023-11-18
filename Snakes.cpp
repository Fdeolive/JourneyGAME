//
// Created by Fernanda Girelli on 10/4/23.
//

#include "Snakes.h"
Snakes::Snakes():CharacterTasks() {}

    void Snakes::getLeadUp()
    {
        cout<<"\nNarrator:"<<endl;
        cout<<"You're surrounded by snake bandits!"<<endl;
    }

    int Snakes::taskMechanics()
    {
        cout<<"\nNarrator:"<<endl;
        cout<<"Snake bandit go around stealing hearts the only way they'll let you leave with your heart is if you are able to pass their math test"<<endl;
        cout<<"Snake Bandit:"<<endl;
        cout<<"We'll let you go if you are able to answer my math questions"<<endl;
        cout<<"Whats 45/5?"<<endl;
        string answer;

        amountOfLives=1;
        getline(cin,answer);
        if(answer!="9")
        {
            cout<<"Snake Bandit:"<<endl;
            cout<<"WRONG, I'll be taking 1 HEART with me"<<endl;
            return amountOfLives;

        }

        cout<<"Whats 7*7?"<<endl;


        getline(cin,answer);
        if(answer!="49")
        {
            cout<<"Snake Bandit:"<<endl;
            cout<<"WRONG, I'll be taking 1 HEART with me"<<endl;
            return amountOfLives;

        }
        cout<<"Whats 8*4?"<<endl;


        getline(cin,answer);
        if(answer!="32")
        {
            cout<<"Snake Bandit:"<<endl;
            cout<<"WRONG, I'll be taking 1 HEART with me"<<endl;
            return amountOfLives;

        }
        cout<<"Snake Bandit:"<<endl;
        cout<<"Impressive, you got them all right, we'll let you go for free this time"<<endl;
        amountOfLives=0;
        return amountOfLives;
    }


