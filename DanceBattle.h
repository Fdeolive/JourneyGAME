//
// Created by Fernanda Girelli on 10/4/23.
//

#ifndef M2OEP_FDEOLIVE_DANCEBATTLE_H
#define M2OEP_FDEOLIVE_DANCEBATTLE_H
#include "CharacterTasks.h"

class DanceBattle:public CharacterTasks  {
public:
    DanceBattle();
     void getLeadUp() override;
     int taskMechanics() override;


};


#endif //M2OEP_FDEOLIVE_DANCEBATTLE_H
