//
// Created by Fernanda Girelli on 10/3/23.
//

#ifndef M2OEP_FDEOLIVE_SALLYSUE_H
#define M2OEP_FDEOLIVE_SALLYSUE_H
#include "GameCharacter.h"


class SallySue: public GameCharacter
{
public:
    SallySue();

    void getAttributes(ostream &outs) override;


    int purpose(int num,ostream &outs) override;


};
#endif //M2OEP_FDEOLIVE_SALLYSUE_H
