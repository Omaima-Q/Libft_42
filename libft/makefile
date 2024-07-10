# Compiler and compiler flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Static library name and dependencies
NAME = libft.a
INCLUDE = libft.h

# Archiving command
AR = ar rc

# Source files and object files
src = $(wildcard * .c )
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
