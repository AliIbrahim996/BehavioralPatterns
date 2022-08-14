#include "strategy/Charmander.h"

#include  <memory>

#include  "strategy/FireFight.h"
namespace DesignPatterns
{
namespace Strategy
{
Charmander::Charmander(const std::string& name):Pockemon(name)
{
    setFightType(std::make_unique<FireFight>());
}

}
}
