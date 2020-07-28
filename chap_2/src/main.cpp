#include "Soldier.h"
#include "HandGun.h"
#include "MachineGun.h"
#include "Rifle.h"
#include "AbstractGun.h"
#include <iostream>
#include <memory>
using namespace std;


int main(int argc, char** argv) {

    shared_ptr<CSoldier> soldier = make_shared<CSoldier>();
    shared_ptr<CAbstractGun> handgun = make_shared<CHandGun>();
    shared_ptr<CAbstractGun> rifle = make_shared<CRifle>();
    shared_ptr<CAbstractGun> matchinegun = make_shared<CMachineGun>();

    // hand gun
    soldier->setGun(handgun);
    soldier->killEnermy();
    cout << endl;

    // rifle
    soldier->setGun(rifle);
    soldier->killEnermy();
    cout << endl;

    // machine gun
    soldier->setGun(matchinegun);
    soldier->killEnermy();
    cout << endl;

    return 0;
}

