//
// Created by Fernanda Girelli on 10/3/23.
//
#include "DrGoodMan.h"
#include <ostream>
DrGoodMan:: DrGoodMan() : GameCharacter (){}


    void DrGoodMan::getAttributes(ostream &outs)
    {
        outs<<"Dr.GoodMan"<<endl;
        outs<<"Strength:"<<endl;
        outs<<"Polyglot"<<endl;
        outs<<"Knows how to ride a bike"<<endl;
        outs<<"Master table tennis player"<<endl;
        outs<<endl;
        outs<<"Weakness:"<<endl;
        outs<<"Deathly afraid of snakes"<<endl;
        outs<<"Doesn't know how to swim"<<endl;
        outs<<"Is allergic to peanuts "<<endl;
    }
    int DrGoodMan::purpose(int num,ostream &outs)
    {
        if(num==1)
        {
            outs<<"\nDr.GoodMan"<<endl;
            outs<<"Why, I love riddles!"<<endl;
            return 1;

        }
        else if(num==2)
        {
            outs<<"\nDr.GoodMan"<<endl;
            outs<<"OH NO SNAKES"<<endl;
            outs<<"Dr.GoodMan was so scared he has a heart attack before getting to the task -2 HEART "<<endl;
            setNumOfLives(2);
            return -1;
        }
        else if(num==3)
        {
            outs<<"\nDr.GoodMan"<<endl;
            outs<<"OOO this may be a challenge"<<endl;
            return 1;
        }
        else if(num==4)
        {
            outs<<"\nDr.GoodMan"<<endl;
            outs<<"I have to be lasered focused"<<endl;
            return 1;
        }
        else if(num==5)
        {
            outs<<"\nDr.GoodMan"<<endl;
            outs<<"This is wonderful, languages are my strengths"<<endl;
            outs<<"HINT:La ragazza ha bisogno di acqua:The girl is in need of water\n"<<endl;
            return 1;

        }
        return 1;
    }


#include "DrGoodMan.h"
