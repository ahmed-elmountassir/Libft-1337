#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ft_strcat.c"
#include "ft_atoi.c"
#include "ft_strcpy.c"
#include "ft_strcmp.c"
#include "ft_toupper.c"
#include "ft_tolower.c"
#include "ft_strlen.c"
int main()
{
	/*
	char te1[4];
	char te2[] = "ahme15";
	printf("%s\n", strcpy(te1, te2));
	char t1[4];
	char t2[] = "ahme15";
	printf("%s\n", ft_strcpy(t1, t2));
	*/
	printf("%d", ft_strlen("ahmed el mountassir"));
	return (0);
}