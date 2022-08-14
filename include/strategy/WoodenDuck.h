#ifndef STRATEGEY_WOODEN_DUCK_H
#define STRATEGEY_WOODEN_DUCK_H

#include "interfaces/IDuck.h"

namespace DesignPatterns
{
namespace Strategy
{
class WoodenDuck : public IDuck
{
public:
    WoodenDuck();
    void quack() override;
};
} // namespace Strategy
} // namespace DesignPatterns
#endif