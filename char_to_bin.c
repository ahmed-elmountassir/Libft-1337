#include "libft.h"

char	*char_to_bin(char cara)
{
	int		i;
	char	*byte;

	byte = malloc(10);
	if (!byte)
		exit(1);
	byte[9] = '\0';
	byte[0] = '0';
	if (cara < 0)
	{
		byte[0] = '1';
		cara *= -1;
	}
	i = 8;
	while (i >= 1)
	{
		byte[i] = cara % 2 + '0';
		cara /= 2;
		i--;
	}
	return (byte);
}
