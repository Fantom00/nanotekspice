/*
** EPITECH PROJECT, 2021
** Input
** File description:
** Input
*/

#ifndef INPUT_HPP_
#define INPUT_HPP_

#include "include_input.h"

namespace nts
{
    class Input : public nts::IComponent {
        public:
            Input(const std::string &value);
            ~Input();

            nts::Tristate compute(std::size_t pin = 1) override;
            void setLink(std::size_t pin, nts::IComponent *other, std::size_t otherPin) override;
            void dump() const override;
            void simulate(std::size_t tick) override;
            void printInfo(int num) override;
            void setValue(Tristate value) override;
            std::string getName() override;
            std::string getType() override;
            IPin *getPin(size_t pin);

        protected:
        private:
            std::string _name;
            std::string _type;
            Pin_input *_pin;
    };
}
#endif /* !INPUT_HPP_ */
