/*
** EPITECH PROJECT, 2021
** NanoTekSpice
** File description:
** Parsing
*/

#ifndef PARSING_HPP_
#define PARSING_HPP_

#include "../components/Hardware.hpp"

namespace nts
{
    std::string find_character(std::string str);
    int catch_link(std::string str);
    int start_parsing(int argc, char** argv, Hardware *hardware);
    void create_link(std::string str, Hardware *hardware);

    class Parsing {
        public:
            Parsing();
            ~Parsing();

        protected:
        private:
    };
}
#endif /* !PARSING_HPP_ */
