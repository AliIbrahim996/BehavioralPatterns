#include "iterator/radio.h"

#include <algorithm>

namespace DesignPatters
{
namespace Iterator
{

Radio::Radio(const ChannelType type): currentChannelIndex_{0}, type_{type}
{
}

void Radio::addChannel(const Channel& channel)
{
    channels_.emplace_back(channel);
}

void Radio::removeChannel(const Channel& channel)
{
    channels_.erase(std::remove(channels_.begin(), channels_.end(), channel), channels_.end());

}

std::unique_ptr<ChannelIterator> Radio::iterator(ChannelType type)
{
    return std::make_unique<Radio>(type);
}

bool Radio::hasNext()
{
    while (currentChannelIndex_ < channels_.size())
    {
        const Channel& channel{channels_.at(currentChannelIndex_)};
        if (channel.channelType() == type_ || type_ == ChannelType::All)
        {
            return true;
        }
        currentChannelIndex_++;
    }
    return false;
}

Channel Radio::next()
{
    const Channel& channel{channels_.at(currentChannelIndex_)};
    currentChannelIndex_++;
    return channel;
}

} // namespace Iterator
} // namespace DesignPatters