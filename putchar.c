#include "../header/en-tete.h"

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_alphabet()
{
	int i = 97;

	while(i < 123){
		ft_putchar(i);
		i++;
	}
	write(1, "\n", 1);
}

void ft_print_reverse_alphabet()
{
	int i = 122;

	while(i > 96){
		ft_putchar(i);
		i--;
	}
	write(1, "\n", 1);
}

void ft_print_numbers()
{
	int i = 48;
	
	while(i < 58){
		ft_putchar(i);
		i++;
	}
	write(1, "\n", 1);
}
