#ifndef STATE_READY_STATE_H
#define STATE_READY_STATE_H

#include "ATMMachine.h"

namespace DesignPatters
{
namespace State
{

class ReadyState : public IState
{

public:
    //!
    ReadyState(ATMMachine* atm);

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
