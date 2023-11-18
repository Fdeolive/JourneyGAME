//
// Created by Fernanda Girelli on 10/4/23.
//

#include "ForeignTest.h"
ForeignTest::ForeignTest():  CharacterTasks() {}
    void ForeignTest::getLeadUp()
    {
        cout<<"\nNarrator:"<<endl;
        cout<<"Look closer, there seems to be words written on the wall"<<endl;

    }

    int ForeignTest::taskMechanics()
    {
        cout<<"\nNarrator:"<<endl;
        cout<<"It appears that there is some language on the wall. Maybe it will tell us how to get through"<<endl;
        cout<<"La ragazza ha bisogno di acqua"<<endl;
        cout<<"What does it say?"<<endl;
        string userString;
        getline(cin,userString);
        if(userString!="the girl is in need of water")
        {
            cout<<"\nNarrator:"<<endl;
            cout<<"Oh no you didn't get it"<<endl;
            return 1;
        }
        cout<<"\nNarrator:"<<endl;
        cout<<"Maybe try throwing water on the drawing of a girl on the water"<<endl;
        cout<<"-----"<<endl;
        cout<<"Look a passage opened up!"<<endl;
        return 0;
    }
