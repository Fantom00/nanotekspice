/*
** EPITECH PROJECT, 2021
** NanoTeckSpice
** File description:
** IComponent
*/

#ifndef ICOMPONENT_HPP_
#define ICOMPONENT_HPP_

#include <iostream>
#include "Tristate.h"
#include "IPin.hpp"
#include <memory>

namespace nts
{
    class IComponent
    {
        public :
            virtual ~IComponent() = default;
            virtual void simulate(std::size_t tick) = 0;
            virtual nts::Tristate compute(std::size_t pin) = 0;
            virtual void setLink(std::size_t pin, nts::IComponent *other, std::size_t otherPin) = 0;
            virtual void dump() const = 0;
            virtual void printInfo(int num) = 0;
            virtual void setValue(Tristate value) = 0;
            virtual std::string getName() = 0;
            virtual std::string getType() = 0;
            virtual IPin *getPin(size_t pin) = 0;
    };
}

#endif /* !ICOMPONENT_HPP_ */
