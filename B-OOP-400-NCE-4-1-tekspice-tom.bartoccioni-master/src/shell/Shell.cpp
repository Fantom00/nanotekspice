/*
** EPITECH PROJECT, 2021
** NanoTeckSpice
** File description:
** Shell
*/

#include "Shell.hpp"

namespace nts
{
    Shell::Shell() :
        _strartLine("> "),
        _lastLine("")
    {
    }

    Shell::~Shell()
    {
    }

    // void Shell::getNewLine()
    // {
    //     std::cout << _strartLine;
    //     std::getline(std::cin, _lastLine);
    // }

    // int Shell::executeLastLine(Hardware *hardware)
    // {
    //     if (_lastLine == "exit") return -1;
    //     if (_lastLine == "simulate") {
    //         simulate(hardware);
    //         return 0;
    //     }
    //     if (_lastLine == "display") {
    //         display(hardware);
    //         return 0;
    //     }
    //     if (_lastLine == "help") {
    //         help();
    //         return 0;
    //     }
    //     if (_lastLine.find("=") != -1) {
    //         std::string str1 = _lastLine.substr(0, _lastLine.find("="));
    //         std::string str2 = _lastLine.substr(_lastLine.find("=") + 1, _lastLine.length() - _lastLine.find("=") -1);
    //         if (str2 == "0") hardware->setInputValue(str1.c_str(), Tristate::FALSE);
    //         else if (str2 == "1") hardware->setInputValue(str1.c_str(), Tristate::TRUE);
    //         return 0;
    //     }
    //     std::cout << "Commande not found try tu use \"help\"" << std::endl;
    //     return 1;
    // }

    void Shell::executeLine(std::string commande, Hardware *hardware)
    {
        std::cout << commande << std::endl;
    }

    int Shell::simulate(Hardware *hardware)
    {
        hardware->simulate(1);
        return 0;
    }

    int Shell::display(Hardware *hardware)
    {
        hardware->display();
        return 0;
    }

    void Shell::help()
    {
        std::cout << "You can use :" << std::endl
        << "  - simulate : for simulate your cabling" << std::endl
        << "  - display : for display the result of your outputs" << std::endl
        << "  - X:Y : for set the value of your inputs, where \"X\" is the name of your input and \"Y\" is the value (1 or 0)" << std::endl
        << "  - exit : for exit" <<std::endl;
    }

    int Shell::shellStart(Hardware *hardware)
    {
        hardware->simulate(0);
        while (std::cin) {
            std::cout << _strartLine;
            if (std::getline(std::cin, _lastLine)) {
                if (_lastLine == "exit") return 0;
                else if (_lastLine == "simulate") {
                    simulate(hardware);
                }
                else if (_lastLine == "display") {
                    display(hardware);
                }
                else if (_lastLine == "help") {
                    help();
                }
                else if (_lastLine.find("=") != -1) {
                    std::string str1 = _lastLine.substr(0, _lastLine.find("="));
                    std::string str2 = _lastLine.substr(_lastLine.find("=") + 1, _lastLine.length() - _lastLine.find("=") -1);
                    if (str2 == "0") hardware->setInputValue(str1.c_str(), Tristate::FALSE);
                    else if (str2 == "1") hardware->setInputValue(str1.c_str(), Tristate::TRUE);
                    else if (str2 == "U") hardware->setInputValue(str1.c_str(), Tristate::UNDEFINED);
                }
                else std::cout << "Commande not found try tu use \"help\"" << std::endl;
            }
        }
        return 0;
    }
}