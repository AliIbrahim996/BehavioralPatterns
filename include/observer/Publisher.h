#ifndef OBSERVER_PUBLISHER_H
#define OBSERVER_PUBLISHER_H

#include "ISubscriber.h"
#include "IPublisher.h"

namespace DesignPatterns
{
namespace Observer
{
class Publisher : public IPublisher
{

public:
    //!
    void addSubscriber(ISubscriber* subscriber) override;

    //!
    void removeSubscriber(ISubscriber* subscriber) override;

    //!
    void notify() override;

    //!
    void sendMessage(const std::string& message) override;

    //!
    std::vector<ISubscriber*>& getSubscribers() override;

    //!
    ~Publisher() override;

private:
    //!
    std::vector<ISubscriber*> subscribers_;

    //!
    std::string message_;
};
} // namespace Observer
} // namespace DesignPatterns
#endif // OBSERVER_PUBLISHER_H
