#ifndef MACHINE_GUN_H
#define MACHINE_GUN_H

#include "AbstractGun.h"

class CMachineGun: public CAbstractGun {
    public:
        CMachineGun();

        ~CMachineGun();

        void shoot();
};


#endif /* MACHINE_GUN_H */