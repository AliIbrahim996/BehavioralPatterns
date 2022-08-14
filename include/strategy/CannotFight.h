#ifndef STRATEGY_CANNOT_FIGHT_H
#define STRATEGY_CANNOT_FIGHT_H

#include "strategy/interfaces/IFight.h"

namespace DesignPatterns
{
namespace Strategy
{
class CannotFight : public IFight
{
public:
    void fight() override;
};
} // namespace Strategy
} // namespace DesignPatterns
#endif