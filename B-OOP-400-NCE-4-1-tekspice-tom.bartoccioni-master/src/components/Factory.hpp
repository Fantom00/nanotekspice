/*
** EPITECH PROJECT, 2021
** NanoTeckSpice
** File description:
** Factory
*/

#ifndef FACTORY_HPP_
#define FACTORY_HPP_

#include <iostream>
#include <vector>
#include <memory>
#include <cstdio>
#include <fstream>
#include <cassert>
#include <functional>
#include "IComponent.hpp"
#include "output/Output.hpp"
#include "input/Input.hpp"
#include "input/Clock.hpp"
#include "input/False.hpp"
#include "input/True.hpp"
#include "chipsets/Chipset_4081.hpp"
#include "chipsets/Chipset_4011.hpp"
#include "chipsets/Chipset_4001.hpp"
#include "chipsets/Chipset_4030.hpp"
#include "chipsets/Chipset_4071.hpp"
#include "chipsets/Chipset_4069.hpp"

namespace nts
{
    class Factory {
        public:
            Factory();
            ~Factory();

            std::unique_ptr<IComponent> createComponent(const std::string &type, const std::string &value);

        protected:
        private:
            std::unique_ptr<IComponent> createOutput(const std::string &value) const noexcept;
            std::unique_ptr<IComponent> createClock(const std::string &value) const noexcept;
            std::unique_ptr<IComponent> createFalse(const std::string &value) const noexcept;
            std::unique_ptr<IComponent> createTrue(const std::string &value) const noexcept;
            std::unique_ptr<IComponent> createInput(const std::string &value) const noexcept;
            std::unique_ptr<IComponent> create4001(const std::string &value) const noexcept;
            std::unique_ptr<IComponent> create4008(const std::string &value) const noexcept;
            std::unique_ptr<IComponent> create4011(const std::string &value) const noexcept;
            std::unique_ptr<IComponent> create4013(const std::string &value) const noexcept;
            std::unique_ptr<IComponent> create4017(const std::string &value) const noexcept;
            std::unique_ptr<IComponent> create4030(const std::string &value) const noexcept;
            std::unique_ptr<IComponent> create4040(const std::string &value) const noexcept;
            std::unique_ptr<IComponent> create4069(const std::string &value) const noexcept;
            std::unique_ptr<IComponent> create4071(const std::string &value) const noexcept;
            std::unique_ptr<IComponent> create4081(const std::string &value) const noexcept;
            std::unique_ptr<IComponent> create4094(const std::string &value) const noexcept;
            std::unique_ptr<IComponent> create4514(const std::string &value) const noexcept;
            std::unique_ptr<IComponent> create4801(const std::string &value) const noexcept;
            std::unique_ptr<IComponent> create2716(const std::string &value) const noexcept;
    };
}

#endif /* !FACTORY_HPP_ */