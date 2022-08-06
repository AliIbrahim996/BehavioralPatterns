#ifndef OBSERVER_SUBSCRIBER_H
#define OBSERVER_SUBSCRIBER_H

#include "ISubscriber.h"
#include "IPublisher.h"

namespace DesignPatterns
{
namespace Observer
{

class Subscriber : public ISubscriber
{

public:

    //!
    Subscriber(IPublisher* publisher, int number);

    //!
    void update(const std::string& message) override;

    //!
    void leave() override;

    //!
    ~Subscriber() override;

private:

    //!
    IPublisher* publisher_;

    //!
    std::string message_;

    //!
    int number_;
};
} // namespace Observer
} // namespace DesignPatterns

#endif // !OBSERVER_SUBSCRIBER_H

