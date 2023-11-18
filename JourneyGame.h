//
// Created by Fernanda Girelli on 10/4/23.
//

#ifndef M2OEP_FDEOLIVE_JOURNEYGAME_H
#define M2OEP_FDEOLIVE_JOURNEYGAME_H
#include <ostream>
#include <istream>
#include <ctime>
#include <iostream>
#include <memory>
#include <vector>
#include <string>
#include <random>

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
using namespace std;

class JourneyGame
        {
        protected:
        vector<unique_ptr<GameCharacter>> playerOptions;
        vector<unique_ptr<CharacterTasks>> taskOptions;
        //For tasks
        vector<int> tasks = {0, 1, 2, 3, 4};
        public:
            JourneyGame();


            string userInput();

            int playerSelection();

            int task(int characterIndex);

        };
#endif //M2OEP_FDEOLIVE_JOURNEYGAME_H
