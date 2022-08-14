#ifndef STRATEGY_POCKEMON_H
#define STRATEGY_POCKEMON_H

#include <memory>
#include <string>
#include "strategy/interfaces/IFight.h"

namespace DesignPatterns
{
namespace Strategy
{
class Pockemon
{

public:
    //!
    Pockemon(const std::string& name);

    //!
    void setPockemonName(const std::string& name);

    //!
    std::string getPockemonName() const;

    //!
    void setFightType(std::unique_ptr<IFight>&& fight);

    //!
    std::unique_ptr<IFight> getFightType();

    //!
    void performFight();

private:
    //!
    std::string name_;

    //!
    std::unique_ptr<IFight> fightType_;
};
} // namespace Strategy
} // namespace DesignPatterns

#endif