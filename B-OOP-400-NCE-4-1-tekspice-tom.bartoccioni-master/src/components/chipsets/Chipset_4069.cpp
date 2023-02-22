/*
** EPITECH PROJECT, 2021
** B-OOP-400-NCE-4-1-tekspice-tom.bartoccioni
** File description:
** Chipset_4081
*/

#include "Chipset_4069.hpp"

namespace nts {

    Chipset_4069::Chipset_4069(const std::string &name) :
        _name(name),
        _type("4069")
    {
        IPin *pin1 = std::make_unique<Pin_classique>().release();
        IPin *pin2 = std::make_unique<Pin_not>(pin1).release();
        IPin *pin3 = std::make_unique<Pin_classique>().release();
        IPin *pin4 = std::make_unique<Pin_not>(pin3).release();
        IPin *pin5 = std::make_unique<Pin_classique>().release();
        IPin *pin6 = std::make_unique<Pin_not>(pin5).release();
        IPin *pin7 = NULL;
        IPin *pin14 = NULL;
        IPin *pin13 = std::make_unique<Pin_classique>().release();
        IPin *pin12 = std::make_unique<Pin_not>(pin13).release();
        IPin *pin11 = std::make_unique<Pin_classique>().release();
        IPin *pin10 = std::make_unique<Pin_not>(pin11).release();
        IPin *pin9 = std::make_unique<Pin_classique>().release();
        IPin *pin8 = std::make_unique<Pin_not>(pin9).release();
        _pins.emplace_back(pin1);
        _pins.emplace_back(pin2);
        _pins.emplace_back(pin3);
        _pins.emplace_back(pin4);
        _pins.emplace_back(pin5);
        _pins.emplace_back(pin6);
        _pins.emplace_back(pin7);
        _pins.emplace_back(pin8);
        _pins.emplace_back(pin9);
        _pins.emplace_back(pin10);
        _pins.emplace_back(pin11);
        _pins.emplace_back(pin12);
        _pins.emplace_back(pin13);
        _pins.emplace_back(pin14);
    }

    Chipset_4069::~Chipset_4069()
    {
        for (int i = 0; i < (int)_pins.size(); i++)
            delete _pins[i];
    }

    Tristate Chipset_4069::compute(std::size_t pin)
    {
        if (pin < 1 || pin > 14) return UNDEFINED;
        return _pins[pin-1]->compute();
    }
    void Chipset_4069::setLink(std::size_t pin, nts::IComponent *other, std::size_t otherPin)
    {
        _pins[pin-1]->setLink(other->getPin(otherPin));
    }
    void Chipset_4069::dump() const
    {}
    void Chipset_4069::simulate(std::size_t tick)
    {}

    std::string Chipset_4069::getName()
    {
        return _name;
    }

    std::string Chipset_4069::getType()
    {
        return _type;
    }

    void Chipset_4069::setValue(Tristate value)
    {}

    void Chipset_4069::printInfo(int num)
    {
        std::cout << "My name is : " << _name << std::endl << "My type is : " << _type << std::endl << "----------" << std::endl;
    }

    IPin *Chipset_4069::getPin(size_t pin)
    {
        return (IPin *)_pins[pin-1];
    }
}