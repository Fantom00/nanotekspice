/*
** EPITECH PROJECT, 2021
** NanoTeckSpice
** File description:
** Input
*/

#include "False.hpp"

namespace nts
{
    False::False(const std::string &value) :
        _type("false"),
        _name(value)
    {
        std::unique_ptr<Pin_input> pin1 = std::make_unique<Pin_input>();
        _pin = pin1.release();
        _pin->setValue(FALSE);
    }

    False::~False()
    {
        delete _pin;
    }

    void False::printInfo(int num)
    {
        std::cout << "My name is : " << _name << std::endl << "My type is : " << _type << std::endl << "----------" << std::endl;
    }

    Tristate False::compute(std::size_t pin)
    {
        return _pin->compute();
    }

    void False::setLink(std::size_t pin, IComponent *other, std::size_t otherPin)
    {}
    void False::dump() const
    {}
    void False::simulate(std :: size_t tick)
    {}

    std::string False::getName()
    {
        return _name;
    }

    std::string False::getType()
    {
        return _type;
    }

    void False::setValue(Tristate value)
    {
    }

    IPin *False::getPin(size_t pin)
    {
        return (IPin *)_pin;
    }
}