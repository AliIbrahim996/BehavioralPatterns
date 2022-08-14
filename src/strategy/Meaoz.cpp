#include "strategy/Meaoz.h"

#include <memory>

#include "strategy/CannotFight.h"
namespace DesignPatterns
{
namespace Strategy
{
Meaoz::Meaoz(const std::string& name)
    : Pockemon(name)
{
    setFightType(std::make_unique<CannotFight>());
}

} // namespace Strategy
} // namespace DesignPatterns