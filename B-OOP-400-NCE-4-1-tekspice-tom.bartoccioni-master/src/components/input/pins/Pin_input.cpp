/*
** EPITECH PROJECT, 2021
** B-OOP-400-NCE-4-1-tekspice-tom.bartoccioni
** File description:
** Pin_input
*/

#include "Pin_input.hpp"

namespace nts
{
    Pin_input::Pin_input() :
        _value(Tristate::UNDEFINED)
    {
    }

    Pin_input::~Pin_input()
    {
    }

    void Pin_input::setValue(Tristate value)
    {
        _value = value;
    }

    Tristate Pin_input::compute()
    {
        return _value;
    }

    void Pin_input::setLink(IPin *pin)
    {
    }
}