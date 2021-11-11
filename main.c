#include "libft.h"
#include <stdio.h>

// char *t_f(unsigned int i, char cara)
// {
	// i = 0;
// /	char g;
	// g = ft_toupper(cara);
// }÷÷÷÷
	// return (&cara);

int main()
{
	printf("-----------------\n");
	char const s[] = "ahmed elmountassir";
	char const t[] = "kjk";
	// char *arr = ft_strmapi(s, t_f);
	printf("%d\n", ft_strncmp(s, t, 3));
	printf("%d\n", strncmp(s, t, 3));
	printf("EO test");
	printf("-----------------\n");

}
