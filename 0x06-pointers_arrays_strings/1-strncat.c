#include "main.h"

char *_strcat(char *dest, char *src)
{
	int x;
	int y;
	i = 0;
	while (dest[x] != '\0')
        {
		x++
	}
  	y = 0;
	while (src[y] != '\0')
	{
		dest[x] = src[y];
		x++
		y++;
	}
	dest[x] = '\0';
	return (dest);
}
