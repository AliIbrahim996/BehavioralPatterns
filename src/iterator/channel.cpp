#include "iterator/channel.h"

namespace DesignPatters
{
namespace Iterator
{

Channel::Channel(const double frequency, const ChannelType type):frequency_{frequency}, channelType_{type}
{
}

double& Channel::frequency()
{
    return frequency_;
}
double Channel::frequency() const
{
    return frequency_;
}

std::ostream& operator<<(std::ostream& out, const Channel& channel)
{
    return out << static_cast<std::string>(channel);
}

bool Channel::operator==(const Channel& channel) const
{

    return channel.frequency() == frequency_ && channel.channelType() == channelType_;
}

const std::string& Channel::getChannelType() const
{
    std::string returnValue{};
    switch (channelType_)
    {
        case ChannelType::Arabic:
            returnValue = "Arabic";
            break;
        case ChannelType::English:
            returnValue  = "English";
            break;
        case ChannelType::All:
            returnValue =  "All";
            break;
    }
    return std::move(returnValue);
}

ChannelType Channel::channelType() const
{
    return channelType_;
}

Channel::operator std::string() const
{
    std::string output{"Frequency: "};
    output.append(std::to_string(frequency_));
    output.append(getChannelType());
    return output;
}

} // namespace Iterator
}
