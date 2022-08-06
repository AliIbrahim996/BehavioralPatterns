#include "observer/Publisher.h"
#include <algorithm>
#include <iostream>

namespace DesignPatterns
{
namespace Observer
{
void Publisher::addSubscriber(ISubscriber* subscriber)
{
    subscribers_.push_back(subscriber);
}

void Publisher::removeSubscriber(ISubscriber* subscriber)
{
    subscribers_.erase(std::remove(subscribers_.begin(), subscribers_.end(), subscriber), subscribers_.end());
}

void Publisher::notify()
{
    std::for_each(subscribers_.begin(), subscribers_.end(), [&](ISubscriber* subscriber) -> void {
        subscriber->update(message_);
    });
}

void Publisher::sendMessage(const std::string& message)
{
    message_ = message;
    notify();
}

std::vector<ISubscriber*>& Publisher::getSubscribers()
{
    return subscribers_;
}

Publisher::~Publisher()
{
    std::cout<<"Goodbye subscribers!\n" <<std::endl;
}
} // namespace Observer
} // namespace DesignPatterns