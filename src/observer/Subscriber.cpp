#include "observer/Subscriber.h"

#include <iostream>

namespace DesignPatterns
{
namespace Observer
{
Subscriber::Subscriber(IPublisher* publisher, int number)
{
    publisher_ = publisher;
    number_ = number;
    publisher_->addSubscriber(this);
    std::cout << "Hello I'm subscriber " << number << "\n" << std::endl;
};

Subscriber::~Subscriber()
{
    std::cout << "Subscriber " << number_ << ": Goodbye publishers!\n" << std::endl;
}

void Subscriber::update(const std::string& message)
{
    message_ = message;
    std::cout << "Subscriber " << number_ << ": " << message_ << "\n" << std::endl;
}
void Subscriber::leave()
{
    std::cout << "Subscriber " << number_ << ": leaving!\n" << std::endl;
    publisher_->removeSubscriber(this);
}
} // namespace Observer
} // namespace DesignPatterns


