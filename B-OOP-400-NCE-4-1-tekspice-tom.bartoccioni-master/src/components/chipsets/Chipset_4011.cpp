/*
** EPITECH PROJECT, 2021
** B-OOP-400-NCE-4-1-tekspice-tom.bartoccioni
** File description:
** Chipset_4011
*/

#include "Chipset_4011.hpp"

namespace nts {

    Chipset_4011::Chipset_4011(const std::string &name) :
        _name(name),
        _type("4011")
    {
        IPin *pin1 = std::make_unique<Pin_classique>().release();
        IPin *pin2 = std::make_unique<Pin_classique>().release();
        IPin *pin5 = std::make_unique<Pin_classique>().release();
        IPin *pin6 = std::make_unique<Pin_classique>().release();
        IPin *pin3 = std::make_unique<Pin_nand>(pin1, pin2).release();
        IPin *pin4 = std::make_unique<Pin_nand>(pin5, pin6).release();
        IPin *pin7 = NULL;
        IPin *pin8 = std::make_unique<Pin_classique>().release();
        IPin *pin9 = std::make_unique<Pin_classique>().release();
        IPin *pin12 = std::make_unique<Pin_classique>().release();
        IPin *pin13 = std::make_unique<Pin_classique>().release();
        IPin *pin10 = std::make_unique<Pin_nand>(pin8, pin9).release();
        IPin *pin11 = std::make_unique<Pin_nand>(pin12, pin13).release();
        IPin *pin14 = NULL;
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

    Chipset_4011::~Chipset_4011()
    {
        for (int i = 0; i < (int)_pins.size(); i++)
            delete _pins[i];
    }

    Tristate Chipset_4011::compute(std::size_t pin)
    {
        return _pins[pin-1]->compute();
    }
    void Chipset_4011::setLink(std::size_t pin, nts::IComponent *other, std::size_t otherPin)
    {
        _pins[pin-1]->setLink(other->getPin(otherPin));
    }
    void Chipset_4011::dump() const
    {}
    void Chipset_4011::simulate(std::size_t tick)
    {}

    std::string Chipset_4011::getName()
    {
        return _name;
    }

    std::string Chipset_4011::getType()
    {
        return _type;
    }

    void Chipset_4011::setValue(Tristate value)
    {}

    void Chipset_4011::printInfo(int num)
    {
        std::cout << "My name is : " << _name << std::endl << "My type is : " << _type << std::endl << "----------" << std::endl;
    }

    IPin *Chipset_4011::getPin(size_t pin)
    {
        return (IPin *)_pins[pin-1];
    }
}