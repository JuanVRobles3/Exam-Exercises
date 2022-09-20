#include <unistd.h>

void ft_putchar(char c)
{
	write(1 ,&c, 1);
}

void alpha_mirror(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
			ft_putchar(90 - str[i] + 'A');
		else if (str[i] >= 'a' && str[i] <= 'z')
			ft_putchar(122 - str[i] + 'a');
		else
			ft_putchar(str[i]);
		i++;
	}

}

int main(int argc, char **argv)
{
	if(argc == 2)
		alpha_mirror(argv[1]);
	ft_putchar('\n');
	return (0);
}
