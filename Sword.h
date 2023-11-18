//
// Created by Fernanda Girelli on 10/4/23.
//

#ifndef M2OEP_FDEOLIVE_SWORD_H
#define M2OEP_FDEOLIVE_SWORD_H
#include "CharacterTasks.h"

class Sword: public CharacterTasks{
public:
    Sword();
     void getLeadUp() override ;

     int taskMechanics() override;

};


#endif //M2OEP_FDEOLIVE_SWORD_H
