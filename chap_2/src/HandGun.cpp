#include "HandGun.h"
#include <iostream>

CHandGun::CHandGun() {
    std::cout << "Hand gun constructor..." << std::endl;
}

CHandGun::~CHandGun() {
    std::cout << "Hand gun destructor..." << std::endl;
}

void CHandGun::shoot() {
    std::cout << "Hand gun shooting..." << std::endl;
}