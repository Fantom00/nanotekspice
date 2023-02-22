/*
** EPITECH PROJECT, 2021
** NanoTeckSpice
** File description:
** Factory
*/

#include "Factory.hpp"

namespace nts
{
    Factory::Factory()
    {
    }

    Factory::~Factory()
    {
    }

    std::unique_ptr<nts::IComponent> Factory::createComponent(const std::string &type, const std::string &value)
    {
        if (type == "input") return createInput(value);
        else if (type == "clock") return createClock(value);
        else if (type == "false") return createFalse(value);
        else if (type == "true") return createTrue(value);
        else if (type == "output") return createOutput(value);
        else if (type == "4081") return create4081(value);
        else if (type == "4071") return create4071(value);
        else if (type == "4001") return create4001(value);
        else if (type == "4030") return create4030(value);
        else if (type == "4011") return create4011(value);
        else if (type == "4069") return create4069(value);
        return NULL;
    }

    std::unique_ptr<nts::IComponent> Factory::create4001(const std::string &value) const noexcept
    {
        std::unique_ptr<nts::IComponent> New = std::make_unique<Chipset_4001>(value);
        return New;
    }
    //std::unique_ptr<IComponent> create4008(const std::string &value)
    //{
    //    
    //}
    std::unique_ptr<nts::IComponent> Factory::create4011(const std::string &value) const noexcept
    {
        std::unique_ptr<nts::IComponent> New = std::make_unique<Chipset_4011>(value);
        return New;
    }
    //std::unique_ptr<IComponent> create4013(const std::string &value)
    //{
    //    
    //}
    //std::unique_ptr<IComponent> create4017(const std::string &value)
    //{
    //    
    //}
    std::unique_ptr<nts::IComponent> Factory::create4030(const std::string &value) const noexcept
    {
        std::unique_ptr<nts::IComponent> New = std::make_unique<Chipset_4030>(value);
        return New;
    }
    //std::unique_ptr<IComponent> create4040(const std::string &value)
    //{
    //    
    //}
    std::unique_ptr<nts::IComponent> Factory::create4069(const std::string &value) const noexcept
    {
        std::unique_ptr<nts::IComponent> New = std::make_unique<Chipset_4069>(value);
        return New;
    }
    std::unique_ptr<nts::IComponent> Factory::create4071(const std::string &value) const noexcept
    {
        std::unique_ptr<nts::IComponent> New = std::make_unique<Chipset_4071>(value);
        return New;
    }
    //std::unique_ptr<IComponent> create4094(const std::string &value)
    //{
    //    
    //}
    //std::unique_ptr<IComponent> create4514(const std::string &value)
    //{
    //    
    //}
    //std::unique_ptr<IComponent> create4801(const std::string &value)
    //{
    //    
    //}
    //std::unique_ptr<IComponent> create2716(const std::string &value)
    //{
    //    
    //}
    std::unique_ptr<nts::IComponent> Factory::createOutput(const std::string &value) const noexcept
    {
        std::unique_ptr<nts::IComponent> New = std::make_unique<Output>(value);
        return New;
    }

    std::unique_ptr<nts::IComponent> Factory::createClock(const std::string &value) const noexcept
    {
        std::unique_ptr<nts::IComponent> New = std::make_unique<Clock>(value);
        return New;
    }
    std::unique_ptr<nts::IComponent> Factory::createFalse(const std::string &value) const noexcept
    {
        std::unique_ptr<nts::IComponent> New = std::make_unique<False>(value);
        return New;
    }
    std::unique_ptr<nts::IComponent> Factory::createTrue(const std::string &value) const noexcept
    {
        std::unique_ptr<nts::IComponent> New = std::make_unique<True>(value);
        return New;
    }

    std::unique_ptr<nts::IComponent> Factory::createInput(const std::string &value) const noexcept
    {
        std::unique_ptr<nts::IComponent> New = std::make_unique<Input>(value);
        return New;
    }

    std::unique_ptr<nts::IComponent> Factory::create4081(const std::string &value) const noexcept
    {
        std::unique_ptr<nts::IComponent> New = std::make_unique<Chipset_4081>(value);
        return New;
    }
}