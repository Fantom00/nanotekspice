/*
** EPITECH PROJECT, 2021
** B-OOP-400-NCE-4-1-tekspice-tom.bartoccioni
** File description:
** Pin_output
*/

#ifndef PIN_OUTPUT_HPP_
#define PIN_OUTPUT_HPP_

#include "include_pins.h"

namespace nts
{
    class Pin_output : IPin{
        public:
            Pin_output();
            ~Pin_output();

            Tristate compute();
            void setLink(IPin *pin);

        protected:
        private:
            IPin *_pin;
    };
}

#endif /* !PIN_OUTPUT_HPP_ */
