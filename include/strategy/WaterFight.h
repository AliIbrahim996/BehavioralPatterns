#ifndef STRATEGY_WATER_FIGHT_H
#define STRATEGY_WATER_FIGHT_H

#include "strategy/interfaces/IFight.h"

namespace DesignPatterns
{
namespace Strategy
{
class WaterFight : public IFight
{
public:
    void fight() override;
};
} // namespace Strategy
} // namespace DesignPatterns
#endif
