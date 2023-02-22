/*
** EPITECH PROJECT, 2021
** B-OOP-400-NCE-4-1-tekspice-tom.bartoccioni
** File description:
** Chipset_4081
*/

#ifndef CHIPSET_4071_HPP_
#define CHIPSET_4071_HPP_

#include "include_chipsets.hpp"
#include "pins/Pin_or.hpp"
#include "pins/Pin_classique.hpp"
#include "pins/include_pins.h"

namespace nts
{
    class Chipset_4071 : public IComponent{
        public:
            Chipset_4071(const std::string &name);
            ~Chipset_4071();

            nts::Tristate compute(std::size_t pin = 1);
            void setLink(std::size_t pin, nts::IComponent *other, std::size_t otherPin);
            void dump() const;
            void simulate(std::size_t tick);
            void setValue(Tristate value) override;
            std::string getName() override;
            std::string getType() override;
            IPin *getPin(size_t pin);

            void printInfo(int num);
            
        protected:
        private:
            const std::string _name;
            const std::string _type;
            std::vector<IPin *> _pins;

    };
}
#endif /* !CHIPSET_4071_HPP_ */
