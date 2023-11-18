//
// Created by Fernanda Girelli on 10/2/23.
//

#ifndef M2OEP_FDEOLIVE_GAMECHARACTER_H
#define M2OEP_FDEOLIVE_GAMECHARACTER_H
#include <string>
#include <memory>
#include <ostream>
using namespace std;


class GameCharacter
        {
        protected:
            int numOfLives;
            bool isDead;

        public:
            GameCharacter();

            virtual ~GameCharacter()= default;

            //getter for numOfLives variable
            int getNumOfLive();

            //setter for numofLives variable
            void setNumOfLives(int num);

            //Takes in num and adds it to the numOfLives
            void addNumOfLives(int hearts);

            //Getter for isDead Variable
            bool getDead();

            //Setter for isDead variable
            void setDead();

            //Functions to be overriden
            virtual void getAttributes(ostream &outs) = 0;
            virtual int purpose(int num,ostream &outs) = 0;

            static const int MINLIVES = 0;
        };

#endif //M2OEP_FDEOLIVE_GAMECHARACTER_H
