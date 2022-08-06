#include "state/HasCardState.h"

#include <iostream>

namespace DesignPatters
{
namespace State
{
HasCardState::HasCardState(ATMMachine* atm): atm_{atm}{}

void HasCardState::insertCard(){std::cout << "There is a card already!\n";}
void HasCardState::ejectCard()
{
    std::cout << "Card ejected!!\n";
    atm_->setCurrentState(atm_->noCardState());
}

void HasCardState::insertPassword(const std::string& password)
{
    if (password != "1234567")
    {
        std::cout << "Password wrong!\n";
        return;
    }
    std::cout << "Password correct!\n";
    atm_->setCurrentState(this->atm_->readyState());
}

void HasCardState::requestCash(double){std::cout << "Enter your password first!\n";}

} // namespace State
} // namespace DesignPatters