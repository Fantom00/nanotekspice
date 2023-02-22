/*
** EPITECH PROJECT, 2021
** B-OOP-400-NCE-4-1-tekspice-tom.bartoccioni
** File description:
** Pin_nand
*/

#include "Pin_nand.hpp"

namespace nts
{
    Pin_nand::Pin_nand(IPin *in1, IPin *in2) :
        _in1(in1),
        _in2(in2)
    {
    }

    Pin_nand::~Pin_nand()
    {
    }

    nts::Tristate Pin_nand::compute()
    {
        Tristate value1 = _in1->compute();
        Tristate value2 = _in2->compute(); 
        if (value1 == FALSE || value2 == FALSE) return TRUE;
        else if (value1 == TRUE && value2 == TRUE) return FALSE;
        else return UNDEFINED;
    }

    void Pin_nand::setLink(IPin *pin)
    {}
}