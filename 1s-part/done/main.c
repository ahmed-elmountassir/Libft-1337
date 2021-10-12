#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "ft_strcat.c"
#include "ft_atoi.c"
#include "ft_strcpy.c"
#include "ft_strcmp.c"
#include "ft_toupper.c"
#include "ft_tolower.c"
#include "ft_strlen.c"
#include "ft_strncmp.c"
#include "ft_strchr.c"
#include "ft_strrchr.c"
#include "ft_strdup.c"
#include "ft_strncat.c"
int main()
{
	
	char te1[5] = "";
	char te2[] = " el mounta\0ssir";
	printf("%s\n", ft_strncat(te1, te2, 18));


//	printf("%d", ft_strlen("ahmed el mountassir"));

	//char h[] = "ahmed el mountassir 36";
	//printf("%s", ft_strrchr(h, 32));
	return (0);
}