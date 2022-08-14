#include "strategy/NoFlyBehaviour.h"

#include <iostream>

namespace DesignPatterns
{
namespace Strategy
{
void NoFlyBehaviour::fly()
{
    std::cout << "Duck can not fly!\n";
}

}
}
