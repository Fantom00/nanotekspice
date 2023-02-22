/*
** EPITECH PROJECT, 2021
** B-OOP-400-NCE-4-1-tekspice-tom.bartoccioni
** File description:
** Pin_and
*/

#include "include_pins.h"

#ifndef PIN_NOR_HPP_
#define PIN_NOR_HPP_

namespace nts
{
    class Pin_nor : public IPin {
        public:
            Pin_nor(IPin *in1, IPin *in2);
            ~Pin_nor();

            nts::Tristate compute() override;
            void setLink(IPin *pin) override;

        protected:
        private:
            IPin *_in1;
            IPin *_in2;
    };
}

#endif /* !PIN_NOR_HPP_ */
