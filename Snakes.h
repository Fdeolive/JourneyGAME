//
// Created by Fernanda Girelli on 10/4/23.
//

#ifndef M2OEP_FDEOLIVE_SNAKES_H
#define M2OEP_FDEOLIVE_SNAKES_H

#include "CharacterTasks.h"
class Snakes:public CharacterTasks {
public:
    Snakes();
    void getLeadUp() override;


    int taskMechanics() override;

};


#endif //M2OEP_FDEOLIVE_SNAKES_H
