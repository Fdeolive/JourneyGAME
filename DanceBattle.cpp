//
// Created by Fernanda Girelli on 10/4/23.
//

#include "DanceBattle.h"
DanceBattle::DanceBattle():CharacterTasks () {}

void DanceBattle::getLeadUp()
{
    cout<<"\nNarrator:"<<endl;
    cout<<"We've reached dancing rose grounds"<<endl;


}

int DanceBattle::taskMechanics()
{
    cout<<"\nNarrator:"<<endl;
    cout<<"The only way safe passage is granted is if you can say the secret word. You will be given a letters and if you say the secret word you will be given passage. However if you get the word wrong you will be lose 2 HEARTS from the poison the rose's will release"<<endl;
    cout<<"Rose Guard:"<<endl;
    cout<<"Whats the secret word: wolfer"<<endl;
    string userWord;
    getline(cin,userWord);
    if(userWord!="flower")
    {
        cout<<"Rose Guard:"<<endl;
        cout<<"Thats incorrect"<<endl;
        return 2;
    }
    cout<<"Narrator:"<<endl;
    cout<<"WOOH you got!"<<endl;
    cout<<"Lets keep going!"<<endl;

    return 0;
}

