/*
** EPITECH PROJECT, 2021
** B-OOP-400-NCE-4-1-tekspice-tom.bartoccioni
** File description:
** IPin
*/

#ifndef IPIN_HPP_
#define IPIN_HPP_

#include <iostream>
#include <memory>
#include "Tristate.h"

namespace nts
{
    class IPin {
        public:
            ~IPin() = default;

            virtual nts::Tristate compute() = 0;
            virtual void setLink(IPin *pin) = 0;

        protected:
        private:
    };
}

#endif /* !IPIN_HPP_ */
