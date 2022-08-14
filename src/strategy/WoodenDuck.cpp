#include "strategy/WoodenDuck.h"

#include <iostream>
#include <memory>

#include "strategy/NoFlyBehaviour.h"

namespace DesignPatterns
{
namespace Strategy
{
WoodenDuck::WoodenDuck()
{
    setFlyBehaviour(std::make_unique<NoFlyBehaviour>());
}

void WoodenDuck::quack()
{
    std::cout << "No sound!\n";
}


}
}
