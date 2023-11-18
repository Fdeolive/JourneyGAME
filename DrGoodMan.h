//
// Created by Fernanda Girelli on 10/3/23.
//

#ifndef M2OEP_FDEOLIVE_DRGOODMAN_H
#define M2OEP_FDEOLIVE_DRGOODMAN_H
#include "GameCharacter.h"
#include <ostream>

class DrGoodMan: public GameCharacter
        {
        public:
            DrGoodMan();

    void getAttributes(ostream &outs) override;

    int purpose(int num,ostream &outs) override;



        };
#endif //M2OEP_FDEOLIVE_DRGOODMAN_H
