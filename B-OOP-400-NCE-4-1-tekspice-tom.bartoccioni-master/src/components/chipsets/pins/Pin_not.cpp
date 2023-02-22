/*
** EPITECH PROJECT, 2021
** B-OOP-400-NCE-4-1-tekspice-tom.bartoccioni
** File description:
** Pin_and
*/

#include "Pin_not.hpp"

namespace nts
{
    Pin_not::Pin_not(IPin *in1) :
        _in1(in1)
    {
    }

    Pin_not::~Pin_not()
    {
    }

    nts::Tristate Pin_not::compute()
    {
        Tristate value1 = _in1->compute();
        if (value1 == FALSE) return TRUE;
        else if (value1 == TRUE) return FALSE;
        else return UNDEFINED;
    }

    void Pin_not::setLink(IPin *pin)
    {}
}