#include "strategy/interfaces/IDuck.h"

#include <memory>

#include "strategy/interfaces/IFlyBeahaviour.h"

namespace DesignPatterns
{
namespace Strategy
{
void IDuck::setFlyBehaviour(std::unique_ptr<IFlyBeahaviour>&& flyBehaviour)
{
    flyBehaviour_ = std::move(flyBehaviour);
}

void IDuck::fly() const
{
    flyBehaviour_->fly();
}
}
}
