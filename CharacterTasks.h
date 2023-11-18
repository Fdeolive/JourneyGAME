//
// Created by Fernanda Girelli on 10/4/23.
//

#ifndef M2OEP_FDEOLIVE_CHARACTERTASKS_H
#define M2OEP_FDEOLIVE_CHARACTERTASKS_H
#include <ostream>
#include <iostream>
#include <fstream>
#include <string>
#include <memory>


using namespace std;
class CharacterTasks
        {
        protected:
            int amountOfLives;

        public:
            CharacterTasks();

           virtual ~CharacterTasks() =default;

            //Takes in a num and sets the amountOfLives variable
            void setAmountOfLives(int num);
            //Takes in nothing, modified nothing, returns the amountOfLives variable
            int getAmountOfLives();

            //Functions to be overriden
            virtual void getLeadUp() = 0;
            virtual int taskMechanics() = 0;


        };
#endif //M2OEP_FDEOLIVE_CHARACTERTASKS_H
