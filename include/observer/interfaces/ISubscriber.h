#ifndef OBSERVER_I_SUBSCRIBER_H
#    define OBSERVER_I_SUBSCRIBER_H

#include <string>

namespace DesignPatterns
{
namespace Observer
{
class ISubscriber
{
public:
    //! 
    virtual void update(const std::string& message) = 0;

    //!
    virtual void leave() = 0;

    //!
    virtual ~ISubscriber() = default;
};
}
}
#endif // !OBSERVER_I_SUBSCRIBER_H
