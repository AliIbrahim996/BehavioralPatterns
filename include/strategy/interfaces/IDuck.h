#ifndef STRAYEGY_I_DUCK_H
#    define STRAYEGY_I_DUCK_H

#include <memory>

namespace DesignPatterns
{
namespace Strategy
{
class IFlyBeahaviour;
}
}

namespace DesignPatterns
{
namespace Strategy
{
class IDuck
{
protected:
    std::unique_ptr<IFlyBeahaviour> flyBehaviour_;

public:

    //!
    void setFlyBehaviour(std::unique_ptr<IFlyBeahaviour>&& flyBehaviour);

    //!
    void fly() const;

    //!
    virtual void quack() = 0;

    //!
    virtual ~IDuck() = default;
};
}
}
#endif
