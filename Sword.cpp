//
// Created by Fernanda Girelli on 10/4/23.
//

#include "Sword.h"
Sword::Sword():  CharacterTasks(){}
    void Sword::getLeadUp()
    {
        cout<<"\nNarrator:"<<endl;
        cout<<"The Knights of Vernon have gone rouge since the ruby went missing. Watch out for them, they are the best sword fighters of the land."<<endl;
    }

    int Sword::taskMechanics() {
        cout << "\nNarrator:" << endl;
        cout << "It seems that we were fated to encounter the knight of vernon. But do not fear while a great sword fight"
                "might have be able to beat them they do have a weakness. Their weakness is that they are self-absorbed and love the image of themselves" << endl;
        cout<<"\nNarrator"<<endl;
        cout<<"a. lipstick"<<endl;
        cout<<"b. Mirror"<<endl;
        cout<<"c. rope"<<endl;

        string answer;
        getline(cin,answer);
        if(answer!="a"&& answer!="b" &&answer!="c")
        {
            cout<<"Not a valid response, try again: "<<endl;
            getline(cin,answer);
        }
        if(answer!="b")
        {
            cout<<"Wrong! -1 HEART "<<endl;
            return 1;
        }
        cout<<"\nNarrator"<<endl;
        cout<<"Good job, they are so focued on looking at themselves that we can escape"<<endl;

        return 0;
    }
