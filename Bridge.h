//
// Created by Fernanda Girelli on 10/4/23.
//

#ifndef M2OEP_FDEOLIVE_BRIDGE_H
#define M2OEP_FDEOLIVE_BRIDGE_H
#include "CharacterTasks.h"


class Bridge: public CharacterTasks
        {
        public:
    Bridge();
    void getLeadUp() override;

     int taskMechanics() override;


        };
#endif //M2OEP_FDEOLIVE_BRIDGE_H
