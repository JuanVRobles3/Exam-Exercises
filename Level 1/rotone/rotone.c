#include <unistd.h>

void rotone (char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if ((s[i] > 64 && s[i] < 90) || (s[i] > 96 && s[i] < 122))
		{
			s[i] = s[i] + 1;
		}
		else if (s[i] == 90)
		{
			s[i] = 65;
		}
		else if (s[i] == 122)
		{
			s[i] = 97;
		}
		//write(1, &s[i], 1);
		i++;
	}
	write(1, s, i);
}

int main(int argc, char **argv)
{
	int i;

	if (argc != 2)
	{
		write (1, "\n", 1);
		return 0;
	}
	rotone(argv[1]);
	write (1, "\n", 1);
	return (0);
}

