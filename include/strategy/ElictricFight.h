#ifndef STRATEGY_ELICTRIC_FIGHT_H
#define STRATEGY_ELICTRIC_FIGHT_H

#include "strategy/interfaces/IFight.h"

namespace DesignPatterns
{
namespace Strategy
{
class ElictricFight : public IFight
{
public:
    void fight() override;
};
} // namespace Strategy
} // namespace DesignPatterns
#endif
