/*
** EPITECH PROJECT, 2021
** NanoTekSpice
** File description:
** Parsing
*/

#include "Parsing.hpp"

namespace nts
{
    Parsing::Parsing()
    {
    }

    std::string find_character(std::string str)
    {
        str = str.erase(0, str.find(" "));
        while (str.find(" ") == 0)
            str = str.erase(0, 1);
        if (str.find(" ", str.find(" " + 1)) != -1)
            return str.substr(0, str.find(" "));
        else
            return str;
    }

    int catch_link(std::string str)
    {
        if (str.find(" ") != -1) {
            std::string str1 = str.substr(0, str.find(" "));
            std::string str2 = str.erase(0, str.find(" ") + 1);
            while (str1.find(" ") == 0) str1.erase(0, 1);
            while (str2.find(" ") == 0) str2.erase(0, 1);
            if (str1.find(":") == -1 || str2.find(":") == -1)
            return 84;
            if (str1.substr(0, str1.find(":")) != "" && str1.substr(str1.find(":") + 1, str1.length() - str1.find(":") - 1) != "" &&
            str2.substr(0, str2.find(":")) != "" && str2.substr(str2.find(":") + 1, str2.length() - str2.find(":") - 1) != "") {
                return 0;
            }
        }
        return 84;
    }

    int start_parsing(int argc, char** argv, Hardware *hardware)
    {
        int chipset_links = -1;
        std::string my_line;
        std::ifstream file(argv[1]);

        if (file.is_open())
            while (getline(file, my_line)) {
                if (my_line.length() == 0 || my_line.find("#") == 0);
                else if (my_line.find(".chipsets:") == 0)
                    chipset_links = 0;
                else if (my_line.find(".links:") == 0)
                    chipset_links = 1;
                else if (my_line.find("input ") == 0 && chipset_links == 0)
                    hardware->addComponents("input", find_character(my_line));
                else if (my_line.find("output ") == 0 && chipset_links == 0)
                    hardware->addComponents("output", find_character(my_line));
                else if (my_line.find("clock ") == 0 && chipset_links == 0)
                    hardware->addComponents("clock", find_character(my_line));
                else if (my_line.find("true ") == 0 && chipset_links == 0)
                    hardware->addComponents("true", find_character(my_line));
                else if (my_line.find("false ") == 0 && chipset_links == 0)
                    hardware->addComponents("false", find_character(my_line));
                else if (my_line.find("4001 ") == 0 && chipset_links == 0)
                    hardware->addComponents("4001", find_character(my_line));
                else if (my_line.find("4011 ") == 0 && chipset_links == 0)
                    hardware->addComponents("4011", find_character(my_line));
                else if (my_line.find("4030 ") == 0 && chipset_links == 0)
                    hardware->addComponents("4030", find_character(my_line));
                else if (my_line.find("4071 ") == 0 && chipset_links == 0)
                    hardware->addComponents("4071", find_character(my_line));
                else if (my_line.find("4081 ") == 0 && chipset_links == 0)
                    hardware->addComponents("4081", find_character(my_line));
                else if (my_line.find("4069 ") == 0 && chipset_links == 0)
                    hardware->addComponents("4069", find_character(my_line));
                else if (my_line.find("4008 ") == 0 && chipset_links == 0)
                    return 1;
                    //hardware->addComponents("4008", find_character(my_line));
                else if (my_line.find("4013 ") == 0 && chipset_links == 0)
                    return 1;
                    //hardware->addComponents("4013", find_character(my_line));
                else if (my_line.find("4017 ") == 0 && chipset_links == 0)
                    return 1;
                    //hardware->addComponents("4017", find_character(my_line));
                else if (my_line.find("4040 ") == 0 && chipset_links == 0)
                    return 1;
                    //hardware->addComponents("4040", find_character(my_line));
                else if (my_line.find("4094 ") == 0 && chipset_links == 0)
                    return 1;
                    //hardware->addComponents("4094", find_character(my_line));
                else if (my_line.find("4512 ") == 0 && chipset_links == 0)
                    return 1;
                    //hardware->addComponents("4512", find_character(my_line));
                else if (my_line.find("4514 ") == 0 && chipset_links == 0)
                    return 1;
                    //hardware->addComponents("4514", find_character(my_line));
                else if (my_line.find("4801 ") == 0 && chipset_links == 0)
                    return 1;
                    //hardware->addComponents("4801", find_character(my_line));
                else if (my_line.find("2716 ") == 0 && chipset_links == 0)
                    return 1;
                    //hardware->addComponents("2716", find_character(my_line));
                else if (catch_link(my_line) == 0 && chipset_links == 1)
                    create_link(my_line, hardware);
                else
                    return 84;
            }
        else
            return 84;
        if (argc > 2) {
            for (int i = 2; i < argc; i++)
            {
                my_line = argv[i];
                if (my_line.find("=") == -1);
                else {
                    std::string str1 = my_line.substr(0, my_line.find("="));
                    std::string str2 = my_line.substr(my_line.find("=") + 1, my_line.length() - my_line.find("=") -1);
                    if (str2 == "1") hardware->setInputValue(str1, TRUE);
                    else if (str2 == "0") hardware->setInputValue(str1, FALSE);
                    else if (str2 == "U") hardware->setInputValue(str1, UNDEFINED);
                }
            }
        }
        return 0;
    }

    void create_link(std::string str, Hardware *hardware)
    {
        std::string str1 = str.substr(0, str.find(" "));
        std::string str2 = str.substr(str.find(" ") + 1, str.length() - str.find(" ") - 1);
        str2 = str2.substr(str2.find_first_not_of(" ") , str2.length());
        hardware->hardSetLink(str1.substr(0, str1.find(":")).c_str(), std::stoi(str1.substr(str1.find(":") + 1, str1.length() - str1.find(":") - 1)), str2.substr(0, str2.find(":")), std::stoi(str2.substr(str2.find(":") + 1, str2.length() - str2.find(":") - 1)));
    }


    Parsing::~Parsing()
    {
    }
}