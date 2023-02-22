/*
** EPITECH PROJECT, 2021
** NanoTeckSpice
** File description:
** Input
*/

#include "Input.hpp"

namespace nts
{
    Input::Input(const std::string &value) :
        _type("input"),
        _name(value)
    {
        std::unique_ptr<Pin_input> pin1 = std::make_unique<Pin_input>();
        _pin = pin1.release();
    }

    Input::~Input()
    {
        delete _pin;
    }

    void Input::printInfo(int num)
    {
        std::cout << "My name is : " << _name << std::endl << "My type is : " << _type << std::endl << "----------" << std::endl;
    }

    Tristate Input::compute(std::size_t pin)
    {
        return _pin->compute();
    }

    void Input::setLink(std::size_t pin, IComponent *other, std::size_t otherPin)
    {}
    void Input::dump() const
    {}
    void Input::simulate(std :: size_t tick)
    {}

    std::string Input::getName()
    {
        return _name;
    }

    std::string Input::getType()
    {
        return _type;
    }

    void Input::setValue(Tristate value)
    {
        _pin->setValue(value);
    }

    IPin *Input::getPin(size_t pin)
    {
        return (IPin *)_pin;
    }
}