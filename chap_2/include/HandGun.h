#ifndef HANDGUN_H
#define HANDGUN_H

#include "AbstractGun.h"

class CHandGun: public CAbstractGun {
    public:
        CHandGun();

        ~CHandGun();

        void shoot();
};

#endif /* HANDGUN_H */