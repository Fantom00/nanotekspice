/*
** EPITECH PROJECT, 2021
** B-OOP-400-NCE-4-1-tekspice-tom.bartoccioni
** File description:
** Pin_and
*/

#include "include_pins.h"

#ifndef PIN_NOT_HPP_
#define PIN_NOT_HPP_

namespace nts
{
    class Pin_not : public IPin {
        public:
            Pin_not(IPin *in1);
            ~Pin_not();

            nts::Tristate compute() override;
            void setLink(IPin *pin) override;

        protected:
        private:
            IPin *_in1;
    };
}

#endif /* !PIN_NOT_HPP_ */
