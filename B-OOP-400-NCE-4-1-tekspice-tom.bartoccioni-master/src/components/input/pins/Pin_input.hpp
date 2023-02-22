/*
** EPITECH PROJECT, 2021
** B-OOP-400-NCE-4-1-tekspice-tom.bartoccioni
** File description:
** Pin_input
*/

#ifndef PIN_INPUT_HPP_
#define PIN_INPUT_HPP_

#include "include_pins.h"

namespace nts
{
    class Pin_input : public IPin {
        public:
            Pin_input();
            ~Pin_input();

            Tristate compute();
            void setLink(IPin *pin);

            void setValue(Tristate value);

        protected:
        private:
            Tristate _value;
    };
}

#endif /* !PIN_INPUT_HPP_ */
