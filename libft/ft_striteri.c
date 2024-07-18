
#include "libft.h"
#include <stdio.h>
#include <string.h>


void ft_striteri(char *s, void (*f)(unsigned int,char*))
{
  unsigned int i; 
  i = 0;

while (s[i] != '\0')
  {
  f(1, s + i);
  i++;
  }
}

// Example function: Print index and character
void print_char_index(unsigned int index, char *c) 
{
    printf("Character '%c' at index %u\n", *c, index);
}

int main(void) 
{
    char str[] = "Hello";

    // Example: Using ft_striteri to print each character with its index
    printf("Printing characters with their indices:\n");
    ft_striteri(str, &print_char_index);

    return 0;
}

  
