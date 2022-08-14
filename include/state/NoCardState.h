#ifndef STATE_NO_CARD_STATE_H
#define STATE_NO_CARD_STATE_H

#include "ATMMachine.h"

namespace DesignPatters
{
namespace State
{

class NoCardState : public IState
{

public:
    //!
    NoCardState(ATMMachine* atm);

    //!
    void insertCard() override;

    //!
    void ejectCard() override;

    //!
    void insertPassword(const std::string& password) override;

    //!
    void requestCash(double amount) override;

private:
    //!
    ATMMachine* atm_;
};
} // namespace State
} // namespace DesignPatters

#endif