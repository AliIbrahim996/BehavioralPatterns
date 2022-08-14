#ifndef STRATEGEY_DUCK_H
#define STRATEGEY_DUCK_H

#include "interfaces/IDuck.h"

namespace DesignPatterns
{
namespace Strategy
{
class Duck : public IDuck
{
public:
    Duck();
    void quack() override;
};
} // namespace Strategy
} // namespace DesignPatterns
#endif