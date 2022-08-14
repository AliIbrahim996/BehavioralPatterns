#include "strategy/Pockemon.h"

namespace DesignPatterns
{
namespace Strategy
{
Pockemon::Pockemon(const std::string& name)
    : name_{name}
{
}

void Pockemon::setPockemonName(const std::string& name)
{
    name_ = name;
}

std::string Pockemon::getPockemonName() const
{
    return name_;
}

void Pockemon::setFightType(std::unique_ptr<IFight>&& fight)
{
    fightType_ = std::move(fight);
}

std::unique_ptr<IFight> Pockemon::getFightType()
{
    return std::move(fightType_);
}

 void Pockemon::performFight()
{
     fightType_->fight();
}

} // namespace Strategy
} // namespace DesignPatterns