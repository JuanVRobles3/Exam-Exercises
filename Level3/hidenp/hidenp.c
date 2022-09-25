#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void hidenp(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s1[i] && s2[j])
	{
		if(s1[i] == s2[j])
			i++;
		j++;
	}
	if(s1[i] == '\0')
		write (1, "1", 1);
	else 
		write(1, "0", 1);
}

int main (int argc, char **argv)
{
	if(argc == 3)
		hidenp(argv[1], argv[2]);
	ft_putchar('\n');
	return (0);
}
