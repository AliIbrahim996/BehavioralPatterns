#ifndef ITERATOR_CHANNEL_H
#define ITERATOR_CHANNEL_H

#include <string>
#include "types/channelType.h"

namespace DesignPatters
{
namespace Iterator
{
class Channel
{
public:
    //!
    explicit Channel(const double frequency, const ChannelType type);

    //!
    double& frequency();

    //!
    double frequency() const;

    //!
    friend std::ostream& operator<<(std::ostream& out, const Channel& channel);

    bool operator==(const Channel& rhs) const;

    //!
    const std::string& getChannelType() const;

    //!
    auto channelType() const -> ChannelType;

private:
    
    //!
    operator std::string() const;
    

    //!
    double frequency_;

    //!
    ChannelType channelType_;
};
} // namespace Iterator
} // namespace DesignPatters
#endif
