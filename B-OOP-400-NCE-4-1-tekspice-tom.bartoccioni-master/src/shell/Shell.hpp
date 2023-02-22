/*
** EPITECH PROJECT, 2021
** NanoTeckSpice
** File description:
** Shell
*/

#ifndef SHELL_HPP_
#define SHELL_HPP_

#include "../components/Hardware.hpp"
#include <iostream>

namespace nts
{
    class Shell {
        public:
            Shell();
            ~Shell();
            void printStartLine();
            void getNewLine();
            int executeLastLine(Hardware *hardware);
            void executeLine(std::string commande, Hardware *hardware);
            int shellStart(Hardware *hardware);
            int simulate(Hardware *hardware);
            int display(Hardware *hardware);
            void help();

        protected:
        private:
            std::string _lastLine;
            std::string _strartLine;
    };
}

#endif /* !SHELL_HPP_ */
