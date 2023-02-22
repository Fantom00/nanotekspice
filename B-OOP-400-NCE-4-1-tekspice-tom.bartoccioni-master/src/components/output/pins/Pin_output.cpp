/*
** EPITECH PROJECT, 2021
** B-OOP-400-NCE-4-1-tekspice-tom.bartoccioni
** File description:
** Pin_output
*/

#include "Pin_output.hpp"

namespace nts
{
    Pin_output::Pin_output() :
        _pin(NULL)
    {
    }

    Pin_output::~Pin_output()
    {
    }

    void Pin_output::setLink(IPin *pin)
    {
        _pin = pin;
    }

    Tristate Pin_output::compute()
    {
        if (_pin != NULL) return _pin->compute();
        else return UNDEFINED;
    }
}