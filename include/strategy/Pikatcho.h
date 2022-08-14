#ifndef STRATEGY_PIKATCHO_H
#define STRATEGY_PIKATCHO_H

#include "strategy/Pockemon.h"

namespace DesignPatterns
{
namespace Strategy
{
class Pikatcho : public Pockemon
{
public:
    Pikatcho(const std::string& name);
};
} // namespace Strategy
} // namespace DesignPatterns

#endif