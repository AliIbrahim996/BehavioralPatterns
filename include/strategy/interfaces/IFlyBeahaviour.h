#ifndef STRATEGY_IFLY_BEAHAVIOUR
#    define STRATEGY_IFLY_BEAHAVIOUR

namespace DesignPatterns
{
namespace Strategy
{
class IFlyBeahaviour
{
public:
    virtual ~IFlyBeahaviour() = default;
    virtual void fly() = 0;
};
}
} // namespace DesignPatterns

#endif