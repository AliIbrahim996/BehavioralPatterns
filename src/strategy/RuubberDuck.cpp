#include "strategy/RuubberDuck.h"

#include <iostream>
#include <memory>

#include "strategy/NoFlyBehaviour.h"

namespace DesignPatterns
{
namespace Strategy
{
RuubberDuck::RuubberDuck()
{
    setFlyBehaviour(std::make_unique<NoFlyBehaviour>());
}


void RuubberDuck::quack()
{
    std::cout << "No sound!";
}


}
}
