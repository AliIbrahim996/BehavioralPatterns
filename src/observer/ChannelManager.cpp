#include "observer/ChannelManager.h"

#include <iostream>
#include <algorithm>

namespace DesignPatterns
{
namespace Observer
{
void ChannelManager::add(ISubscriber* subscriber)
{
    subscribers_.push_back(subscriber);
}
void ChannelManager::add(IPublisher* publisher)
{
    publishers_.push_back(publisher);
}

void ChannelManager::remove(ISubscriber* subscriber)
{
    subscribers_.erase(std::remove(subscribers_.begin(), subscribers_.end(), subscriber), subscribers_.end());

    std::for_each(publishers_.begin(), publishers_.end(), [&subscriber](IPublisher* publisher) -> void {
        auto& subscribers = publisher->getSubscribers();
        subscribers.erase(std::remove(subscribers.begin(), subscribers.end(), subscriber), subscribers.end());
    });

    delete subscriber;
}

void ChannelManager::remove(IPublisher* publisher)
{
    publishers_.erase(std::remove(publishers_.begin(), publishers_.end(), publisher), publishers_.end());
    delete publisher;
}

ChannelManager::~ChannelManager()
{
    std::for_each(
        subscribers_.begin(), subscribers_.end(), [](const ISubscriber* subscriber) ->  void { delete subscriber; });

    subscribers_.clear();

    std::for_each(
        publishers_.begin(), publishers_.end(), [](const IPublisher* publisher) -> void { delete publisher; });

    publishers_.clear();
    std::cout << "memory cleaned!\n";
}

} // namespace Observer
} // namespace DesignPatterns