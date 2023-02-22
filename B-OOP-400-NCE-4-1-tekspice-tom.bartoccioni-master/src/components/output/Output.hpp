/*
** EPITECH PROJECT, 2021
** Output
** File description:
** Output
*/

#ifndef OUTPUT_HPP_
#define OUTPUT_HPP_

#include "include_output.h"

namespace nts
{
    class Output : public IComponent {
        public:
            Output(const std::string &name);
            ~Output();

            Tristate compute(std::size_t pin = 1);
            void setLink(std::size_t pin, IComponent *other, std::size_t otherPin);
            void dump() const;
            void simulate(std::size_t tick);
            void setValue(Tristate value) override;
            std::string getName() override;
            std::string getType() override;
            IPin *getPin(size_t pin);

            void printInfo(int num);

        protected:
        private:
            std::string _name;
            std::string _type;
            Pin_output *_pin;
    };
}

#endif /* !OUTPUT_HPP_ */
