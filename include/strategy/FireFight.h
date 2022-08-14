#ifndef STRATEGY_FIRE_FIGHT_H
#define STRATEGY_FIRE_FIGHT_H

#include "strategy/interfaces/IFight.h"

namespace DesignPatterns
{
namespace Strategy
{
class FireFight : public IFight
{
public:
    void fight() override;
};
} // namespace Strategy
} // namespace DesignPatterns
#endif