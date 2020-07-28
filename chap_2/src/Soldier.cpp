#include "Soldier.h"
#include <iostream>

CSoldier::CSoldier() {
    std::cout << "Soldier constructor..." << std::endl;
}

CSoldier::~CSoldier() {
    std::cout << "Soldier destructor..." << std::endl;
}

void CSoldier::setGun(std::shared_ptr<CAbstractGun> gun) {
    std::cout << "Soldier sets up gun..." << std::endl;
    this->gun_ = gun;
}

void CSoldier::killEnermy() {
    std::cout << "Soldier starts to kill enermy..." << std::endl;
    this->gun_->shoot();
}