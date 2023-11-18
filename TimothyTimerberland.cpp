//
// Created by Fernanda Girelli on 10/4/23.
//

#include "TimothyTimerberland.h"
TimothyTimberland:: TimothyTimberland(): GameCharacter() {}


    void TimothyTimberland::getAttributes(ostream &outs)  {
        outs << "TimonthyTimberland:" << endl;
        outs << "Strength:" << endl;
        outs << "Is deadly with a sword" << endl;
        outs << "Is insanely fast" << endl;
        outs << "Is very strong" << endl;
        outs << endl;
        outs << "Weakness:" << endl;
        outs << "Is from the 1500's" << endl;
        outs << "Hates the color pink " << endl;
        outs << "Is allergic to snakes" << endl;
    }

    int TimothyTimberland::purpose(int num, ostream &outs)  {
        int returnNum;
        if (num == 1) {
            outs << "\nTimonthyTimberland:" << endl;
            outs << "Great Heavens" << endl;
            returnNum= 1;

        } else if (num == 2) {
            outs << "\nTimonthyTimberland:" << endl;
            outs << "Snakes, I'm deathly allergic" << endl;
            outs << "Narrator: " << endl;
            outs << "TimothyTimberland had an allergic reaction as soon as he got close to the snakes -2HEARTS" << endl;
            setNumOfLives(2);
            returnNum= -1;

        } else if (num == 3) {
            outs << "\nTimonthyTimberland:" << endl;
            outs << "I've impressed a few ladies with my ballroom dancing" << endl;
            returnNum= 1;
        } else if (num == 4) {
            outs << "\nTimothyTimberland:" << endl;
            outs << "No one is able to best me in sword fighting " << endl;
            outs << "Narrator: " << endl;
            outs << "While TimothyTimberland is quite impressive with a sword, he will still need to perform the task" << endl;
            outs << "You earned 1 HEART for your sword skills" << endl;
            addNumOfLives(1);
            returnNum=1;

        } else if (num == 5) {
            outs << "\nTimothyTimberland:" << endl;
            outs << "I've always been quite good at picking up languages" << endl;
            returnNum=1;

        }
        return returnNum;
    }


