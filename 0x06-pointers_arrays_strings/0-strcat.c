#include <stdio.h>
/**
	* _strcat - append src to dst
	* @dest: append destination
	* @src: append source
	*
	* Return: pointer to dst
	*/
char *_strcat(char *dest, char *src)
{
	int len = 0;
	int i = 0;

	while (dest[len])
		len++;
	while (src[i])
	{
		dest[len + i] = src[i];
		i++;
	}

	dest[len + i] = '\0';
	return (dest);
}
