/*
** EPITECH PROJECT, 2021
** B-OOP-400-NCE-4-1-tekspice-tom.bartoccioni
** File description:
** Pin_and
*/

#include "include_pins.h"

#ifndef PIN_XOR_HPP_
#define PIN_XOR_HPP_

namespace nts
{
    class Pin_xor : public IPin {
        public:
            Pin_xor(IPin *in1, IPin *in2);
            ~Pin_xor();

            nts::Tristate compute() override;
            void setLink(IPin *pin) override;

        protected:
        private:
            IPin *_in1;
            IPin *_in2;
    };
}

#endif /* !PIN_XOR_HPP_ */
