#include "strategy/Duck.h"

#include <iostream>
#include <memory>
#include "strategy/FlyBehaviour.h"

namespace DesignPatterns
{
namespace Strategy
{
Duck::Duck()
{
    setFlyBehaviour(std::make_unique<FlyBehaviour>());
}

void Duck::quack()
{
    std::cout << "Quack quack!\n";
}


}
}
