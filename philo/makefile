NAME = philo

SRC = $(addprefix src/,	main.c \
								)

UTILS = $(addprefix utils/,	utils.c \
								utils1.c \
								)

OBJ := $(SRC:%.c=%.o)
UTILS_OBJ := $(UTILS:%.c=%.o)

CC = cc
CCFLAGS = -Werror -Wall -Wextra -pthread

all: $(NAME)

%.o: %.c
	$(CC) $(CCFLAGS) -I. -c $< -o $@

$(NAME): $(OBJ) $(UTILS_OBJ)
	$(CC) $^ -o $@

# debug: $(OBJ) $(UTILS_OBJ)
# 	$(CC) -fsanitize=address $^ -o $(NAME)

clean:
	rm -f $(OBJ) $(UTILS_OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re