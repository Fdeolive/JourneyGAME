//
// Created by Fernanda Girelli on 10/3/23.
//

#include "JimmyJay.h"

JimmyJay::JimmyJay(): GameCharacter() {}


    void JimmyJay::getAttributes(ostream &outs)  {
        outs << "JimmyJay:" << endl;
        outs << "Strength:" << endl;
        outs << "Is a very good dancer" << endl;
        outs << "Is very agile" << endl;
        outs << "Knows how to play the violin" << endl;
        outs << endl;
        outs << "Weakness:" << endl;
        outs << "Doesn't know how to sing" << endl;
        outs << "Has a mustache " << endl;
        outs << "Only understands english" << endl;
    }

    int JimmyJay::purpose(int num, ostream &outs)  {
        if (num == 1) {
            outs << "\nJimmyJay:" << endl;
            outs << "This is gonna be tough man" << endl;
            return 1;

        } else if (num == 2) {
            outs << "\nJimmyJay:" << endl;
            outs << "I'm charm the pants of these snakes" << endl;
            return 1;

        } else if (num == 3) {
            outs << "\nJimmyJay:" << endl;
            outs << "I got moves man  " << endl;
            outs << "Narrator: " << endl;
            outs << "JimmyJay was born for this task" << endl;
            outs << "You earned 1 HEART" << endl;
            addNumOfLives(1);
            return 1;
        } else if (num == 4) {
            outs << "\nJimmyJay:" << endl;
            outs << "OOO swords, vintage! Love it " << endl;
            return 1;

        } else if (num == 5) {
            outs << "\nJimmyJay:" << endl;
            outs << "Oh man" << endl;
            outs << "Narrator: " << endl;
            outs << "JimmyJay WEAKNESS!! He couldn't figure out the message no matter how hard he tried -2 HEARTS " << endl;
            setNumOfLives(2);
            return -1;

        }
        return 1;
    }

