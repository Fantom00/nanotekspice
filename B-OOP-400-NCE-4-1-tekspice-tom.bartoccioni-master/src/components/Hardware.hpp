/*
** EPITECH PROJECT, 2021
** B-OOP-400-NCE-4-1-tekspice-tom.bartoccioni
** File description:
** Hardware
*/

#ifndef HARDWARE_HPP_
#define HARDWARE_HPP_

#include <iostream>
#include <vector>
#include <memory>
#include <cstdio>
#include <fstream>
#include <cassert>
#include <functional>
#include "IComponent.hpp"
#include "IPin.hpp"
#include "output/Output.hpp"
#include "input/Input.hpp"
#include "Factory.hpp"

namespace nts
{
    class Hardware : public IComponent {
        public:
            Hardware();
            ~Hardware();

            Tristate compute(std::size_t pin = 1) override;
            void setLink(std::size_t pin, IComponent *other, std::size_t otherPin) override;
            void hardSetLink(const std::string &name1, int pin1, const std::string &name2, int pin2);
            void dump() const override;
            void simulate(std :: size_t tick) override;
            void display();
            void setValue(Tristate value) override;
            std::string getName() override;
            std::string getType() override;
            IPin *getPin(size_t pin);

            void addComponents(const std::string &type, const std::string &value);
            void setInputValue(const std::string &name, Tristate value);

            void printInfo(int num);
            int countElements();

        protected:
        private:
            std::vector<IComponent *> _components;
            Factory _factory;
            size_t _ticks;
            std::vector<Tristate> _valuesInput;
            std::vector<Tristate> _valuesOutput;
    };
}

#endif /* !HARDWARE_HPP_ */
