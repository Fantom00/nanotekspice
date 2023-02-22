/*
** EPITECH PROJECT, 2021
** NanoTeckSpice
** File description:
** Input
*/

#include "Clock.hpp"

namespace nts
{
    Clock::Clock(const std::string &value) :
        _type("clock"),
        _name(value)
    {
        std::unique_ptr<Pin_input> pin1 = std::make_unique<Pin_input>();
        _pin = pin1.release();
    }

    Clock::~Clock()
    {
        delete _pin;
    }

    void Clock::printInfo(int num)
    {
        std::cout << "My name is : " << _name << std::endl << "My type is : " << _type << std::endl << "----------" << std::endl;
    }

    Tristate Clock::compute(std::size_t pin)
    {
        return _pin->compute();
    }

    void Clock::setLink(std::size_t pin, IComponent *other, std::size_t otherPin)
    {}
    void Clock::dump() const
    {}
    void Clock::simulate(std :: size_t tick)
    {
        if (_pin->compute() == TRUE) _pin->setValue(FALSE);
        else if (_pin->compute() == FALSE) _pin->setValue(TRUE);
        if (tick > 1) this->simulate(tick-1);
    }

    std::string Clock::getName()
    {
        return _name;
    }

    std::string Clock::getType()
    {
        return _type;
    }

    void Clock::setValue(Tristate value)
    {
        _pin->setValue(value);
    }

    IPin *Clock::getPin(size_t pin)
    {
        return (IPin *)_pin;
    }
}