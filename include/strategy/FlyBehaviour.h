#ifndef STRATEGEY_FLY_BEHAVIOUR_H
#    define STRATEGEY_FLY_BEHAVIOUR_H

#include "interfaces/IFlyBeahaviour.h"

namespace DesignPatterns
{
namespace Strategy
{
class FlyBehaviour: public IFlyBeahaviour
{
public:
    void fly() override;
};
}
} // namespace DesignPatterns
#endif