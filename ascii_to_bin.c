#include "libft.h"

char	*ascii_to_bin(int ascii)
{
	char	*bin;
	int		b;
	int		bit;
	int		i;

	i = 0;
	b = 128;
	bin = malloc(8);
	while (ascii > 0 && i < 8)
	{
		if (ascii < b)
			bit = ascii % 2;
		else
		{
			ascii /= 2;
			bit = ascii % 2;
		}
		b /= 2;
		bin[i] = bit + 48;
		printf("%c\n", bin[i]);
		i++;
	}
	bin[i] = '\0';
	return (ft_strrev(bin));
}
