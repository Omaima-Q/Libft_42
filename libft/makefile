# Compiler and compiler flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Static library name and dependencies
NAME = libft.a
INCLUDE = libft.h

# Archiving command
AR = ar rc

# Source files and object files
src = \
	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c \
	ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
	ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c \
	ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c \
	ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
	ft_putendl_fd.c ft_putnbr_fd.c \
	
#src = $(wildcard * .c)
ofile = $(src:.c=.o)

# Default target: build the library
all: $(NAME)

# Build the library target
$(NAME): $(ofile)
	$(AR) $(NAME) $(ofile)
	ranlib $(NAME)

# Compilation rule for .c to .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean object files
clean:
	rm -f $(ofile)

# Clean object files and library
fclean: clean
	rm -f $(NAME)

# Rebuild everything
re: fclean all

# Phony targets to avoid conflicts with files of the same name
.PHONY: all clean fclean re
