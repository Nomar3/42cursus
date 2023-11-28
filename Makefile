CC = gcc
LIB = ar rcs
CFLAGS = -Wall -Wextra -Werror
TARGET = libft.a
RM = rm -f
SRC = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
	ft_isprint.c ft_strlen.c 

OBJ = $(SRC:.c=.o)

.c.o:
	@$(CC) $(CFLAGS) -c $< -I ./ -o $@

$(TARGET): $(OBJ)
	$(LIB) $(TARGET) $(OBJ)

all: $(TARGET)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(TARGET)

re: fclean all

.PHONY: clean all fclean re .c.o