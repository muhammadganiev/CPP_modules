CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -Wno-shadow -Wshadow

NAME = scavtrap

SRC = main.cpp ClapTrap.cpp ScavTrap.cpp

OBJ := $(SRC:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all re fclean clean