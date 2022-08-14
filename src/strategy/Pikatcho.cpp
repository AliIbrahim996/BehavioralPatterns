#include "strategy/Pikatcho.h"

#include <memory>

#include "strategy/CannotFight.h"

namespace DesignPatterns
{
namespace Strategy
{
Pikatcho::Pikatcho(const std::string& name)
    : Pockemon(name)
{
    setFightType(std::make_unique<CannotFight>());
}

} // namespace Strategy
} // namespace DesignPatterns