#ifndef RIFLE_H
#define RIFLE_H

#include "AbstractGun.h"

class CRifle: public CAbstractGun {
    public:
        CRifle();

        ~CRifle();

        void shoot();
};

#endif /* RIFLE_H */