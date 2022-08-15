#ifndef ITERATOR_RADIO_H
#define ITERATOR_RADIO_H

#include <vector>
#include "interfaces/channelCollection.h"

namespace DesignPatters
{
namespace Iterator
{
class Radio
    : public ChannelCollection
    , public ChannelIterator
{
public:
    //!
    explicit Radio(const ChannelType type);

    //!
    void addChannel(const Channel& channel) override;

    //!
    void removeChannel(const Channel& channel) override;

    //!
    std::unique_ptr<ChannelIterator> iterator(ChannelType type) override;

    //!
    bool hasNext() override;

    Channel next() override;

private:
    //!
    std::vector<Channel> channels_;

    //!
    int currentChannelIndex_;

    //!
    ChannelType type_;
};
} // namespace Iterator
} // namespace DesignPatters

#endif