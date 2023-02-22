/*
** EPITECH PROJECT, 2021
** NanoTeckSpice
** File description:
** Output
*/

#include "Output.hpp"

namespace nts
{
    Output::Output(const std::string &name) :
        _name(name),
        _type("output")
    {
        std::unique_ptr<Pin_output> pin1 = std::make_unique<Pin_output>();;
        _pin = pin1.release();
    }

    Output::~Output()
    {
        delete _pin;
    }

    void Output::printInfo(int num)
    {
        std::cout << "My name is : " << _name << std::endl << "My type is : " << _type << std::endl << "----------" << std::endl;
    }

    nts::Tristate Output::compute(std::size_t pin)
    {
        if (pin == 1) return _pin->compute();
        else return Tristate::UNDEFINED;
    }

    void Output::setLink(std::size_t pin, nts::IComponent *other, std::size_t otherPin)
    {
        if (pin == 1) _pin->setLink(other->getPin(otherPin));
    }

    void Output::dump() const
    {}
    void Output::simulate(std :: size_t tick)
    {}

    std::string Output::getName()
    {
        return _name;
    }
    std::string Output::getType()
    {
        return _type;
    }
    void Output::setValue(Tristate value)
    {}

    IPin *Output::getPin(size_t pin)
    {
        return (IPin *)_pin;
    }
}