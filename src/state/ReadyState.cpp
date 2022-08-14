#include "state/ReadyState.h"

#include <iostream>

namespace DesignPatters
{
namespace State
{
ReadyState::ReadyState(ATMMachine* atm): atm_(atm){}

void ReadyState::insertCard(){std::cout << "Card is already inserted!!\n";}

void ReadyState::ejectCard()
{
    std::cout << "Card ejected!\n";
    atm_->setCurrentState(atm_->noCardState());
}

void ReadyState::insertPassword(const std::string&)
{
    std::cout << "Password is already inserted!\n";
}

void ReadyState::requestCash(double amount)
{
    const double balance{atm_->totalBalance()};

    if (balance >= amount)
    {
        std::cout << "Take your money!!\n";
        atm_->setBalance(balance - amount);
        ejectCard();
        if (atm_->totalBalance() == 0.0)
        {
            atm_->setCurrentState(atm_->noCashState());
        }

        std::cout << "Your total balance is: " << atm_->totalBalance() << std::endl;
    }
    else
    {
        std::cout << "No enough money!\n please input a balance equal or less than " << balance << "!\n";
    }
}

}
}
