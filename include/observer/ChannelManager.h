#include "ISubscriber.h"
#include "IPublisher.h"

namespace DesignPatterns
{
namespace Observer
{
class ChannelManager
{

public:
    //!
    void add(ISubscriber* subscriber);

    //!
    void add(IPublisher* publisher);

    //!
    void remove(ISubscriber* subscriber);

    //!
    void remove(IPublisher* publisher);

    //!
    ~ChannelManager();

private:

    //!
    std::vector<ISubscriber*> subscribers_;

    //!
    std::vector<IPublisher*> publishers_;
};
} // namespace Observer
} // namespace DesignPatterns