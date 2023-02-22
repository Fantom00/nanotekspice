/*
** EPITECH PROJECT, 2021
** NanoTeckSpice
** File description:
** Input
*/

#include "True.hpp"

namespace nts
{
    True::True(const std::string &value) :
        _type("true"),
        _name(value)
    {
        std::unique_ptr<Pin_input> pin1 = std::make_unique<Pin_input>();
        _pin = pin1.release();
        _pin->setValue(TRUE);
    }

    True::~True()
    {
        delete _pin;
    }

    void True::printInfo(int num)
    {
        std::cout << "My name is : " << _name << std::endl << "My type is : " << _type << std::endl << "----------" << std::endl;
    }

    Tristate True::compute(std::size_t pin)
    {
        return _pin->compute();
    }

    void True::setLink(std::size_t pin, IComponent *other, std::size_t otherPin)
    {}
    void True::dump() const
    {}
    void True::simulate(std :: size_t tick)
    {}

    std::string True::getName()
    {
        return _name;
    }

    std::string True::getType()
    {
        return _type;
    }

    void True::setValue(Tristate value)
    {
    }

    IPin *True::getPin(size_t pin)
    {
        return (IPin *)_pin;
    }
}