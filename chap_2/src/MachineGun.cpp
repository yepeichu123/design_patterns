#include "MachineGun.h"
#include <iostream>

CMachineGun::CMachineGun() {
    std::cout << "Machine gun constructor..." << std::endl;
}

CMachineGun::~CMachineGun() {
    std::cout << "Machine gun destructor..." << std::endl;
}

void CMachineGun::shoot() {
    std::cout << "Machine gun shooting..." << std::endl;
}