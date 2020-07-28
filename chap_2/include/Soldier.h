#ifndef SOLDIER_H_
#define SOLDIER_H_

#include "AbstractGun.h"
#include <memory>

class CSoldier {
    public:
        CSoldier();

        ~CSoldier();

        void setGun(std::shared_ptr<CAbstractGun> gun);

        void killEnermy();
    private:
        std::shared_ptr<CAbstractGun> gun_;
};

#endif // SOLDIER_H