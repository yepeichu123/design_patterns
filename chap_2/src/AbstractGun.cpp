#include "AbstractGun.h"
#include <iostream>

CAbstractGun::CAbstractGun() {
    std::cout << "Abstract gun constructor..." << std::endl;
}

CAbstractGun::~CAbstractGun() {
    std::cout << "Abstract gun destructor..." << std::endl;
}

void CAbstractGun::shoot() {
    std::cout << "Abstract gun shooting..." << std::endl;
}