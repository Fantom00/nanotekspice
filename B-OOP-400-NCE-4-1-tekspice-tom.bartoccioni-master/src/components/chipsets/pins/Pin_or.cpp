/*
** EPITECH PROJECT, 2021
** B-OOP-400-NCE-4-1-tekspice-tom.bartoccioni
** File description:
** Pin_and
*/

#include "Pin_or.hpp"

namespace nts
{
    Pin_or::Pin_or(IPin *in1, IPin *in2) :
        _in1(in1),
        _in2(in2)
    {
    }

    Pin_or::~Pin_or()
    {
    }

    nts::Tristate Pin_or::compute()
    {
        Tristate value1 = _in1->compute();
        Tristate value2 = _in2->compute(); 
        if (value1 == TRUE || value2 == TRUE) return TRUE;
        else if (value1 == FALSE && value2 == FALSE) return FALSE;
        else return UNDEFINED;
    }

    void Pin_or::setLink(IPin *pin)
    {}
}