#ifndef OBSERVER_I_PUBLISHER_H
#    define OBSERVER_I_PUBLISHER_H

#include "ISubscriber.h"
#include <vector>

namespace DesignPatterns
{
namespace Observer
{
class IPublisher
{
public:
    //! 
    virtual void addSubscriber(ISubscriber* subscriber) = 0;

    //!
    virtual void removeSubscriber(ISubscriber* subscriber) = 0;

    //!
    virtual void notify() = 0;

    //!
    virtual void sendMessage(const std::string& message) = 0;

    //!
    virtual std::vector<ISubscriber*>& getSubscribers() = 0;

    //!
    virtual ~IPublisher() = default;
};
} // namespace Observer
} // namespace DesignPatterns

#endif // !OBSERVER_I_PUBLISHER_H