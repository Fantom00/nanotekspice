/*
** EPITECH PROJECT, 2021
** B-OOP-400-NCE-4-1-tekspice-tom.bartoccioni
** File description:
** Pin_and
*/

#include "Pin_and.hpp"

namespace nts
{
    Pin_and::Pin_and(IPin *in1, IPin *in2) :
        _in1(in1),
        _in2(in2)
    {
    }

    Pin_and::~Pin_and()
    {
    }

    nts::Tristate Pin_and::compute()
    {
        Tristate value1 = _in1->compute();
        Tristate value2 = _in2->compute(); 
        if (value1 == FALSE || value2 == FALSE) return FALSE;
        else if (value1 == TRUE && value2 == TRUE) return TRUE;
        else return UNDEFINED;
    }

    void Pin_and::setLink(IPin *pin)
    {}
}