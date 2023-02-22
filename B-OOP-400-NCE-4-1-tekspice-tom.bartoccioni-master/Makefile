##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## makefile
##

REDDARK	=	\033[31;1m
RED		=	\033[31;1m
GREEN	=	\033[32;1m
YEL		=	\033[33;1m
BLUE	=	\033[34;1m
PINK	=	\033[35;1m
CYAN	=	\033[36;1m
WHITE	=	\033[0m

NAME =	nanotekspice

SRC	 =	src/main/main.cpp	\
		src/shell/Shell.cpp	\
		src/parsing/Parsing.cpp	\
		src/components/Hardware.cpp	\
		src/components/Factory.cpp	\
		src/components/input/Input.cpp	\
		src/components/input/True.cpp	\
		src/components/input/False.cpp	\
		src/components/input/Clock.cpp	\
		src/components/input/pins/Pin_input.cpp	\
		src/components/output/Output.cpp	\
		src/components/output/pins/Pin_output.cpp	\
		src/components/chipsets/Chipset_4081.cpp	\
		src/components/chipsets/Chipset_4001.cpp	\
		src/components/chipsets/Chipset_4011.cpp	\
		src/components/chipsets/Chipset_4030.cpp	\
		src/components/chipsets/Chipset_4069.cpp	\
		src/components/chipsets/Chipset_4071.cpp	\
		src/components/chipsets/pins/Pin_and.cpp	\
		src/components/chipsets/pins/Pin_nand.cpp	\
		src/components/chipsets/pins/Pin_nor.cpp	\
		src/components/chipsets/pins/Pin_not.cpp	\
		src/components/chipsets/pins/Pin_or.cpp	\
		src/components/chipsets/pins/Pin_xor.cpp	\
		src/components/chipsets/pins/Pin_classique.cpp

OBJS		=	$(SRC:.cpp=.o)

CFLAGS		=	-g3 -Wall -Wextra -Werror

all:	$(OBJS)
	g++ -o $(NAME) $(OBJS)
	@printf "\n\n$(YEL)  [MAKE] → $(GREEN)Compile completed.\n\n$(WHITE)"
	@printf "$(YEL)  [MAKE] → $(WHITE)Binaire : $(CYAN)./%s\n\n$(WHITE)" $(NAME)

clean:
	rm -f $(OBJS)
	@printf "\n\n$(YEL)  [MAKE] → $(GREEN)Clean completed.\n\n\n$(WHITE)"

fclean:	clean
	rm -f $(NAME)
	@printf "\n\n$(YEL)  [MAKE] → $(GREEN)FClean completed.\n\n\n$(WHITE)"

re:	fclean all