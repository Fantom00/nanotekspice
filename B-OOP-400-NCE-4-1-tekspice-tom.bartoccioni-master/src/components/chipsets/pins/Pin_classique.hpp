/*
** EPITECH PROJECT, 2021
** B-OOP-400-NCE-4-1-tekspice-tom.bartoccioni
** File description:
** Pin_classique
*/

#include "include_pins.h"

#ifndef PIN_CLASSIQUE_HPP_
#define PIN_CLASSIQUE_HPP_

namespace nts
{
    class Pin_classique : public IPin {
        public:
            Pin_classique();
            ~Pin_classique();

            Tristate compute() override;
            void setLink(IPin *pin) override;

        protected:
        private:
            IPin *_pin;
    };
}

#endif /* !PIN_CLASSIQUE_HPP_ */
