//
// Created by Fernanda Girelli on 10/2/23.
//

#include "GameCharacter.h"



GameCharacter::GameCharacter()
    {
        numOfLives=3;
        isDead=false;
    }


    //getter
    int GameCharacter::getNumOfLive()
    {
        return numOfLives;
    }
    //
    void GameCharacter::setNumOfLives(int num)
    {
        numOfLives-=num;
        if(numOfLives<=MINLIVES)
        {
            numOfLives=0;
            isDead=true;
        }
    }
    void GameCharacter::addNumOfLives(int hearts)
    {
        numOfLives+=hearts;
    }
    bool GameCharacter::getDead()
    {
        return isDead;
    }
    void GameCharacter::setDead()
    {
        isDead=true;
    }


    static const int MINLIVES = 0;
