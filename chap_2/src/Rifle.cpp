#include "Rifle.h"
#include <iostream>

CRifle::CRifle() {
    std::cout << "Refle constructor..." << std::endl;
}

CRifle::~CRifle() {
    std::cout << "Refle destructor..." << std::endl;
}

void CRifle::shoot() {
    std::cout << "Refle shooting..." << std::endl;
}