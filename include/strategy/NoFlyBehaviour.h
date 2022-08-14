#ifndef STRATEGEY_NO_FLY_BEHAVIOUR_H
#define STRATEGEY_NO_FLY_BEHAVIOUR_H

#include "interfaces/IFlyBeahaviour.h"

namespace DesignPatterns
{
namespace Strategy
{
class NoFlyBehaviour : public IFlyBeahaviour
{
public:
    void fly() override;
};
} // namespace Strategy
} // namespace DesignPatterns
#endif