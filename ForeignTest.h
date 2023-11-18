//
// Created by Fernanda Girelli on 10/4/23.
//

#ifndef M2OEP_FDEOLIVE_FOREIGNTEST_H
#define M2OEP_FDEOLIVE_FOREIGNTEST_H
#include "CharacterTasks.h"

class ForeignTest: public CharacterTasks {
public:
    ForeignTest();
    void getLeadUp() override;

   int taskMechanics()override;

};


#endif //M2OEP_FDEOLIVE_FOREIGNTEST_H
