#include <stdio.h>
#include <stdlib.h>
char *_strcat(char *dest, char *src)
{
	int i, j;
	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; src[j] != '\0'; j++)
		dest[i + j] = src[j];
	dest[i + j] = '\0';
	return dest;
}
int main()
{
	char dest[100] = "Hello";
	char src[100] = "World";
	printf("dest: %s\n", dest);
	printf("src: %s\n", src);
	_strcat(dest, src);
	printf("dest: %s\n", dest);
	return 0;
}
