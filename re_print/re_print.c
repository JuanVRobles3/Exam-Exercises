#include <unistd.h>

void ft_putchar(char c)
{
	write (1, &c, 1);
}

int ft_strlen(char *str)
{
	int i;

	i = 0;	
	while(str[i])
		i++;
	return (i);
}

void rev_print(char *str)
{
	int j;

	j = ft_strlen(str);
	while (str[j])
	{
		ft_putchar(str[j]);
		j--;
	}
}

int main (int argc, char **argv)
{
	if(argc == 2)
		rev_print(argv[1]);
	ft_putchar('\n');
	return (0);
}
