#ifndef STRATEGEY_RUUBBER_DUCK_H
#define STRATEGEY_RUUBBER_DUCK_H

#include "interfaces/IDuck.h"

namespace DesignPatterns
{
namespace Strategy
{
class RuubberDuck : public IDuck
{
public:
    RuubberDuck();
    void quack() override;
};
} // namespace Strategy
} // namespace DesignPatterns
#endif