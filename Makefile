CC = gcc
LIB = ar rcs
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
RM = rm -f
SRC = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
	ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c \
	ft_strncmp.c ft_memmove.c ft_strchr.c ft_strrchr.c ft_strlcpy.c \
	ft_strlcat.c ft_calloc.c ft_strdup.c ft_memchr.c ft_memcmp.c \
	ft_strnstr.c ft_atoi.c ft_substr.c ft_tolower.c ft_toupper.c \
	ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c \
	ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

BONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
	ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
	ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

OBJ = $(SRC:.c=.o)
OBJ2 = $(BONUS:.c=.o)

.c.o:
	@$(CC) $(CFLAGS) -c $< -I ./ -o $@

$(NAME): $(OBJ)
	$(LIB) $(NAME) $(OBJ)

all: $(NAME)

bonus: $(NAME) $(OBJ2)
	$(LIB) $(NAME) $(OBJ) $(OBJ2)

clean:
	$(RM) $(OBJ) $(OBJ2)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean all fclean re .c.o bonus