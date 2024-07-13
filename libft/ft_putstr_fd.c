#include "libft.h"
#include <unistd.h>  // For write function and STDOUT_FILENO

void ft_putstr_fd(char *s, int fd) 
{
    // Calculate the length of the string using strlen
    // Write the entire string (including the null terminator)
    write(fd, s, strlen(s));
}

int main(void) 
{
    char c[] = "omaima";  // Initialize char array with string
    int file_descriptor = STDOUT_FILENO;  // Correct type for file descriptor

    ft_putstr_fd(c, file_descriptor);

    return 0;
}
