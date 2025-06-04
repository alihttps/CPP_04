NAME = animal

CPP = c++

CPP_FLAGS = -g3 -Wall -Wextra -Werror -std=c++98

FILES =	*.cpp

all : $(NAME)

$(NAME) : $(FILES)
		$(CPP) $(CPP_FLAGS) $(FILES) -o $(NAME)


clean :
		rm -rf $(NAME)

re : clean all