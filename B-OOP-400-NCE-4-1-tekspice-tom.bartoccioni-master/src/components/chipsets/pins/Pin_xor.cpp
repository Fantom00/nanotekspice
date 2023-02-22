/*
** EPITECH PROJECT, 2021
** B-OOP-400-NCE-4-1-tekspice-tom.bartoccioni
** File description:
** Pin_and
*/

#include "Pin_xor.hpp"

namespace nts
{
    Pin_xor::Pin_xor(IPin *in1, IPin *in2) :
        _in1(in1),
        _in2(in2)
    {
    }

    Pin_xor::~Pin_xor()
    {
    }

    nts::Tristate Pin_xor::compute()
    {
        Tristate value1 = _in1->compute();
        Tristate value2 = _in2->compute(); 
        if ((value1 == TRUE && value2 == FALSE) || (value2 == TRUE && value1 == FALSE)) return TRUE;
        else if ((value1 == TRUE && value2 == TRUE) || (value2 == FALSE && value1 == FALSE)) return FALSE;
        else return UNDEFINED;
    }

    void Pin_xor::setLink(IPin *pin)
    {}
}