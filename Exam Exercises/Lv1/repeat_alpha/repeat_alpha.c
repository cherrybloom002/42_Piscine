#include <unistd.h>

int	count(char c)
{
	int r;

	if (c >= 'A' && c <= 'Z')
		r = c - 'A' + 1;
	else if (c >= 'a' && c <= 'z')
		r = c - 'a' + 1;
	else
		r = 1;
	return (r);
}

int	main(int argc, char **argv)
{
	int	repeat;

	if (argc == 2)
	{
		while (*argv[1])
		{
			repeat = count(*argv[1]);
			while (repeat--)
				write(1, argv[1], 1);
			argv[1];
		}
	}
	write(1, "\n", 1);
	return (0);
}
