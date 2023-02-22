/*
** EPITECH PROJECT, 2021
** B-OOP-400-NCE-4-1-tekspice-tom.bartoccioni
** File description:
** Hardware
*/

#include "Hardware.hpp"

namespace nts
{
    Hardware::Hardware() :
        _ticks(0)
    {
    }

    Hardware::~Hardware()
    {
        for (int i = 0; i < (int)_components.size(); i++)
            delete _components[i];
    }

    void Hardware::addComponents(const std::string &type, const std::string &value)
    {
        _components.emplace_back(_factory.createComponent(type, value).release());
    }

    void Hardware::printInfo(int num)
    {
        _components[num]->printInfo(num);
    }

    int Hardware::countElements()
    {
        return _components.size();
    }

    Tristate Hardware::compute(std::size_t pin)
    {
        return TRUE;
    }

    void Hardware::setInputValue(const std::string &name, Tristate value)
    {
        std::string type;
        for (int i = 0; i < (int)_components.size(); i++) {
            type = _components[i]->getType();
            if (_components[i]->getName() == name && (type == "input" || type == "clock")) _components[i]->setValue(value);
        }
    }

    void Hardware::hardSetLink(const std::string &name1, int pin1, const std::string &name2, int pin2)
    {
        int comp1;
        int comp2;
        for (int i = 0; i < (int)_components.size(); i++) {
            if (_components[i]->getName() == name1) comp1 = i;
            if (_components[i]->getName() == name2) comp2 = i;
        }
        _components[comp2]->setLink(pin2, _components[comp1], pin1);
    }

    void Hardware::display()
    {
        int num = 0;
        std::string type;
        Tristate value;
        std::cout << "tick: " << _ticks << std::endl;
        std::cout << "input(s):" << std::endl;
        for (int i = 0; i < (int)_components.size(); i++) {
            type = _components[i]->getType();
            if (type == "input" || type == "clock") {
                value = _valuesInput.at(num);
                std::cout << "  " << _components[i]->getName() << ": ";
                if (value == UNDEFINED) std::cout << "U" << std::endl;
                else std::cout << value << std::endl;
                num++;
            }
        }
        num = 0;
        std::cout << "output(s):" << std::endl;
        for (int i = 0; i < (int)_components.size(); i++) {
            if (_components[i]->getType() == "output") {
                value = _valuesOutput.at(num);
                std::cout << "  " << _components[i]->getName() << ": ";
                if (value == UNDEFINED) std::cout << "U" << std::endl;
                else std::cout << value << std::endl;
                num++;
            }
        }
    }

    void Hardware::setLink(std::size_t pin, nts::IComponent *other, std::size_t otherPin)
    {
    }
    void Hardware::dump() const
    {}
    void Hardware::simulate(std::size_t tick)
    {
        _valuesInput.clear();
        _valuesOutput.clear();
        std::string type;
        _ticks += tick;
        for (int i = 0; i < (int)_components.size(); i++) {
            type = _components[i]->getType();
            if (type == "input" || type == "clock" || type == "true" || type == "false")
                _valuesInput.emplace_back(_components[i]->compute(1));
        }
        for (int i = 0; i < (int)_components.size(); i++) {
            type = _components[i]->getType();
            if (type == "output")
                _valuesOutput.emplace_back(_components[i]->compute(1));
        }
        for (int i = 0; i < (int)_components.size(); i++) {
            _components[i]->simulate(tick);
        }
    }
    std::string Hardware::getName()
    {
        return "Hardware";
    }
    std::string Hardware::getType()
    {
        return "Hardware";
    }
    void Hardware::setValue(Tristate value)
    {}

    IPin *Hardware::getPin(size_t pin)
    {
        return NULL;
    }
}