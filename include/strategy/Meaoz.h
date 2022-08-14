#ifndef STRATEGY_MEAOZ_SCOERO_H
#define STRATEGY_MEAOZ_SCOERO_H

#include "strategy/Pockemon.h"

namespace DesignPatterns
{
namespace Strategy
{
class Meaoz : public Pockemon
{
public:
    Meaoz(const std::string& name);
};
} // namespace Strategy
} // namespace DesignPatterns

#endif