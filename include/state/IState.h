#ifndef STATE_ATM_STATE_H
#define STATE_ATM_STATE_H

#include <string>

namespace DesignPatters
{
namespace State
{

class IState
{
public:
    //!
    virtual void insertCard() = 0;

    //!
    virtual void ejectCard() = 0;

    //!
    virtual void insertPassword(const std::string& password) = 0;

    //!
    virtual void requestCash(double amount) = 0;

    //!
    virtual ~IState() = default;
};
} // namespace State
} // namespace DesignPatters


#endif
