#ifndef ITERATOR_CHANNEL_COLLECTION_H
#define ITERATOR_CHANNEL_COLLECTION_H

#include <memory>
#include "iterator.h"
#include "iterator/types/channelType.h"

namespace DesignPatters
{
namespace Iterator
{
class ChannelCollection
{
public:
    //!
    virtual void addChannel(const Channel& channel);

    //!
    virtual void removeChannel(const Channel& channel);

    //!
    virtual std::unique_ptr<ChannelIterator> iterator(ChannelType type);
};
} // namespace Iterator
} // namespace DesignPatters

#endif