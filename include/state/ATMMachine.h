#ifndef STATE_ATM_MACHINE_H
#    define STATE_ATM_MACHINE_H

#include <memory>

#include "IState.h"

namespace DesignPatters
{
namespace State
{

class ATMMachine
{
public:
    //!
    ATMMachine(double balance);

    //!
    void insertCard();

    //!
    void ejectCard();

    //!
    void insertPassword(const std::string& password);

    //!
    void requestCash(double amount);

    //!
    void setBalance(double balance);

    //!
    double totalBalance();

    //!
    void setCurrentState(IState* state);

    //!
    IState* currentState();

    //!
    IState* noCardState();

    //!
    IState* hasCardState();

    //!
    IState* noCashState();

    //!
    IState* readyState();

private:

    //!
    std::unique_ptr<IState> hasCard_;

    //!
    std::unique_ptr<IState> noCard_;

    //!
    std::unique_ptr<IState> noCash_;

    //!
    std::unique_ptr<IState> ready_;

    //!
    double totalBalance_{0};

    //!
    IState* currentState_;
};
}
}


#endif
