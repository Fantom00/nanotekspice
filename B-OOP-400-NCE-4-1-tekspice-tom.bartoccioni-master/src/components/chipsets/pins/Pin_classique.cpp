/*
** EPITECH PROJECT, 2021
** B-OOP-400-NCE-4-1-tekspice-tom.bartoccioni
** File description:
** Pin_classique
*/

#include "Pin_classique.hpp"

namespace nts
{
    Pin_classique::Pin_classique() :
        _pin(NULL)
    {
    }

    Pin_classique::~Pin_classique()
    {
    }

    Tristate Pin_classique::compute()
    {
        if (_pin != NULL) return _pin->compute();
        else return UNDEFINED;
    }

    void Pin_classique::setLink(IPin *pin)
    {
        _pin = pin;
    }
}