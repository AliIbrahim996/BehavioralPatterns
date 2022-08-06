#include "state/ATMMachine.h"

#include "state/HasCardState.h"
#include "state/NoCardState.h"
#include "state/NoCashState.h"
#include "state/ReadyState.h"

namespace DesignPatters
{
namespace State
{

ATMMachine::ATMMachine(double balance)
    : totalBalance_{balance}
{
    hasCard_ = std::make_unique<HasCardState>(this);
    noCard_ = std::make_unique<NoCardState>(this);
    noCash_ = std::make_unique<NoCashState>(this);
    ready_ = std::make_unique<ReadyState>(this);

    currentState_ = noCard_.get();
}
void ATMMachine::insertCard()
{
    currentState_->insertCard();
}
void ATMMachine::ejectCard()
{
    currentState_->ejectCard();
}
void ATMMachine::insertPassword(const std::string& password)
{
    currentState_->insertPassword(password);
}
void ATMMachine::requestCash(double amount)
{
    currentState_->requestCash(amount);
}
void ATMMachine::setBalance(double balance)
{
    totalBalance_ = balance;
}
double ATMMachine::totalBalance()
{
    return totalBalance_;
}
void ATMMachine::setCurrentState(IState* state)
{
    currentState_ = state;
}
IState* ATMMachine::currentState()
{
    return currentState_;
}
IState* ATMMachine::noCardState()
{
    return noCard_.get();
}
IState* ATMMachine::hasCardState()
{
    return hasCard_.get();
}
IState* ATMMachine::noCashState()
{
    return noCash_.get();
}
IState* ATMMachine::readyState()
{
    return ready_.get();
}
} // namespace State
} // namespace DesignPatters