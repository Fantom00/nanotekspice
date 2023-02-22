/*
** EPITECH PROJECT, 2021
** NanoTekSpice
** File description:
** NanoTekSpice
*/

#include <iostream>
#include <string>
#include "../parsing/Parsing.hpp"
#include "../shell/Shell.hpp"

int main(int argc, char **argv)
{
    nts::Shell shell;
    nts::Hardware hardware;
    int error = start_parsing(argc, argv, &hardware);
    if (error == 84)return 84;
    if (error == 1) return 0;
    return shell.shellStart(&hardware);
}