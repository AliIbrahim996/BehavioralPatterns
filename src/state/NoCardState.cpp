#include "state/NoCardState.h"

#include <iostream>

namespace DesignPatters
{
namespace State
{
NoCardState::NoCardState(ATMMachine* atm): atm_(atm){}

void NoCardState::insertCard()
{
    atm_->setCurrentState(atm_->hasCardState());
    std::cout << "Enter your password!\n";
}

void NoCardState::ejectCard()
{
    std::cout << "no card detected!\n";
}

void NoCardState::insertPassword(const std::string&)
{
    std::cout << "Insert card first!\n";
}

void NoCardState::requestCash(double)
{
    std::cout << "Insert card first!\n";
}
}
}
