/*
** EPITECH PROJECT, 2021
** B-OOP-400-NCE-4-1-tekspice-tom.bartoccioni
** File description:
** Pin_nand
*/

#include "include_pins.h"

#ifndef PIN_NAND_HPP_
#define PIN_NAND_HPP_

namespace nts
{
    class Pin_nand : public IPin {
        public:
            Pin_nand(IPin *in1, IPin *in2);
            ~Pin_nand();

            nts::Tristate compute() override;
            void setLink(IPin *pin) override;

        protected:
        private:
            IPin *_in1;
            IPin *_in2;
    };
}

#endif /* !PIN_NAND_HPP_ */
