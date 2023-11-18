//
// Created by Fernanda Girelli on 10/4/23.
//

#ifndef M2OEP_FDEOLIVE_TIMOTHYTIMERBERLAND_H
#define M2OEP_FDEOLIVE_TIMOTHYTIMERBERLAND_H
#include "GameCharacter.h"

class TimothyTimberland: public GameCharacter {
public:
    TimothyTimberland();

    void getAttributes(ostream &outs) override ;

    int purpose(int num, ostream &outs) override ;
};
#endif //M2OEP_FDEOLIVE_TIMOTHYTIMERBERLAND_H
