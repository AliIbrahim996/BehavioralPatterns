#ifndef STRATEGY_CHARMANDER_SCOERO_H
#define STRATEGY_CHARMANDER_SCOERO_H

#include "strategy/Pockemon.h"

namespace DesignPatterns
{
namespace Strategy
{
class Charmander : public Pockemon
{
public:
    Charmander(const std::string& name);
};
} // namespace Strategy
} // namespace DesignPatterns

#endif