#ifndef ABSTRACT_GUN_H
#define ABSTRACT_GUN_H

class CAbstractGun {
    public:
        CAbstractGun();

        ~CAbstractGun();

        virtual void shoot();
};

#endif /* ABSTRACT_GUN_H */