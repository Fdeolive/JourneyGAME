//
// Created by Fernanda Girelli on 10/3/23.
//

#include "SallySue.h"

SallySue::SallySue(): GameCharacter(){}



    void SallySue::getAttributes(ostream &outs)
    {
        outs<<"SallySue:"<<endl;
        outs<<"Strength:"<<endl;
        outs<<"Professional snake charmer"<<endl;
        outs<<"Immune to snake venom"<<endl;
        outs<<"Speaks parseltongue"<<endl;
        outs<<endl;
        outs<<"Weakness:"<<endl;
        outs<<"Is 4'11"<<endl;
        outs<<"Can't dance"<<endl;
        outs<<"Cries when she's scarred or nervous"<<endl;
    }
    int SallySue::purpose(int num,ostream &outs)
    {
        int returnNum;
        if(num==1)
        {
            outs<<"\nSallySue:"<<endl;
            outs<<"MM this will be quite challenging"<<endl;
            returnNum= 1;

        }
        else if(num==2)
        {
            outs<<"\nSallySue:"<<endl;
            outs<<"I love snakes!"<<endl;
            outs<<"Narrator: "<<endl;
            outs<<"The snakes appear to like SallySue they seem to be telling her the answers! "<<endl;
            outs<<"SNAKES: "<<endl;
            outs<<"HINT: 9,49,32 "<<endl;

            returnNum=  1;
        }
        else if(num==3)
        {
            outs<<"\nSallySue:"<<endl;
            outs<<"OOO this may be a challenge"<<endl;
            returnNum= 1;
        }
        else if(num==4)
        {
            outs<<"\nSallySue:"<<endl;
            outs<<"OH NO, I DON'T KNOW HOW TO DANCE "<<endl;
            outs<<"Narrator: "<<endl;
            outs<<"Sally died from dehydration from crying because she was so upset -1 HEARTS  "<<endl;
            setNumOfLives(1);
            returnNum= -1;
        }
        else if(num==5)
        {
            outs<<"\nSallySue:"<<endl;
            outs<<"I'm up for the challenge"<<endl;
            returnNum= 1;

        }
        return returnNum;
    }

