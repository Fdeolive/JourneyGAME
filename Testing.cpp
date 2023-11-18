//
// Created by Fernanda Girelli on 10/5/23.
//
#include <iostream>
#include "GameCharacter.h"
#include "DrGoodMan.h"
#include "SallySue.h"
#include "JimmyJay.h"
#include "TimothyTimerberland.h"
#include "CharacterTasks.h"
#include "Bridge.h"
#include "Snakes.h"
#include "DanceBattle.h"
#include "Sword.h"
#include "ForeignTest.h"

//bool characterTesting();
bool taskTesting();
bool gameTesting();
using namespace std;

int main()
{
//    if(characterTesting())
//    {
//        cout<<"\nPassed all character Testing"<<endl;
//    }
    if(taskTesting())
    {
        cout<<"Passed all task Testing"<<endl;
    }
    if(gameTesting())
    {
        cout<<"Passed all task Testing"<<endl;
    }
}

bool characterTesting()
{
    bool passed=true;
    vector<unique_ptr<GameCharacter>> playerOptions;
    playerOptions.push_back(make_unique<DrGoodMan>());
    playerOptions.push_back(make_unique<SallySue>());
    playerOptions.push_back(make_unique<JimmyJay>());
    playerOptions.push_back(make_unique<TimothyTimberland>());

    for(int i=0;i<playerOptions.size();i++)
    {
        playerOptions[i]->setNumOfLives(1);
        if(playerOptions[i]->getNumOfLive()!=2)
        {
            cout<<"Failed setNum of Lives test case"<<endl;
            passed=false;
        }
        playerOptions[i]->setNumOfLives(20);
        if(playerOptions[i]->getNumOfLive()!=0)
        {
            cout<<"Failed min num of lives"<<endl;
            passed=false;
        }
        DrGoodMan gm;
        for(int i=1;i<6;i++)
        {
            if(i==2) {
               if( gm.purpose(2, cout)!=-1)
               {
                   cout<<"Failed purpose attribute "<<endl;
                   passed=false;
               }
            }
            else
            {
                if( gm.purpose(i, cout)!=1)
                {
                    cout<<"Failed purpose attribute "<<endl;
                    passed=false;
                }
            }

        }
        //Sally Sue
        SallySue sue;
        for(int i=1;i<6;i++)
        {
            if(i==4) {
                if( sue.purpose(4, cout)!=-1)
                {
                    cout<<"Failed purpose attribute "<<endl;
                    passed=false;
                }
            }
            else
            {
                if( sue.purpose(i, cout)!=1)
                {
                    cout<<"Failed purpose attribute "<<endl;
                    passed=false;
                }
            }

        }
        JimmyJay jimmy;
        for(int i=1;i<6;i++)
        {
            if(i==5) {
                if( jimmy.purpose(5, cout)!=-1)
                {
                    cout<<"Failed purpose attribute "<<endl;
                    passed=false;
                }
            }
            else
            {
                if( jimmy.purpose(i, cout)!=1)
                {
                    cout<<"Failed purpose attribute "<<endl;
                    passed=false;
                }
            }

        }
        TimothyTimberland timmy;
        for(int i=1;i<6;i++)
        {
            if(i==2) {
                if( timmy.purpose(2, cout)!=-1)
                {
                    cout<<"Failed purpose attribute "<<endl;
                    passed=false;
                }
            }
            else
            {
                if( timmy.purpose(i, cout)!=1)
                {
                    cout<<"Failed purpose attribute "<<endl;
                    passed=false;
                }
            }

        }

    }
   return true;
}
bool taskTesting()
{
    //No specific way to test- I just used this to make sure they were printing correctly and such
    bool passed=true;
     Sword sw;
     sw.taskMechanics();
     sw.setAmountOfLives(1);
     if(sw.getAmountOfLives()!=1)
     {
         cout<<"Failed set test case"<<endl;
         passed=false;
     }

     DanceBattle db;
     db.taskMechanics();
    db.setAmountOfLives(1);
    if(db.getAmountOfLives()!=1)
    {
        cout<<"Failed set test case"<<endl;
        passed=false;
    }

      Bridge bd;
     bd.taskMechanics();
    bd.setAmountOfLives(3);
    if(bd.getAmountOfLives()!=3)
    {
        cout<<"Failed set test case"<<endl;
        passed=false;
    }

      ForeignTest ft;
     ft.taskMechanics();
    ft.setAmountOfLives(2);
    if(ft.getAmountOfLives()!=2)
    {
        cout<<"Failed set test case"<<endl;
        passed=false;
    }

     Snakes sk;
     sk.taskMechanics();
    sk.setAmountOfLives(10);
    if(sk.getAmountOfLives()!=10)
    {
        cout<<"Failed set test case"<<endl;
        passed=false;
    }


    return passed;
}
bool gameTesting()
{
    return false;
}