#ifndef ITERATOR_H
#define ITERATOR_H

#include "iterator/channel.h"

namespace DesignPatters
{
namespace Iterator
{
class ChannelIterator
{
public:
    //!
    virtual bool hasNext();

    //!
    virtual Channel next();
};
} // namespace Iterator
} // namespace DesignPatters



#endif
