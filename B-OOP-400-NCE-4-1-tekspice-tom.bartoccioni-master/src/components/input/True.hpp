/*
** EPITECH PROJECT, 2021
** Input
** File description:
** Input
*/

#ifndef TRUE_HPP_
#define TRUE_HPP_

#include "include_input.h"

namespace nts
{
    class True : public IComponent {
        public:
            True(const std::string &value);
            ~True();

            nts::Tristate compute(std::size_t pin = 1) override;
            void setLink(std::size_t pin, IComponent *other, std::size_t otherPin) override;
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
#endif /* !TRUE_HPP_ */
