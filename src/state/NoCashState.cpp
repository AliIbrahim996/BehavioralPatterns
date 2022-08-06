#include "state/NoCashState.h"

#include <iostream>

namespace DesignPatters
{
namespace State
{

NoCashState::NoCashState(ATMMachine* atm): atm_(atm){}

void NoCashState::insertCard(){std::cout << "No cash try again!\n";}

void NoCashState::ejectCard(){std::cout << "No card detected!\n";}

void NoCashState::insertPassword(const std::string&){std::cout << "No card detected!!\n";}

void NoCashState::requestCash(double){std::cout << "No card detected!\n";}
}
}
