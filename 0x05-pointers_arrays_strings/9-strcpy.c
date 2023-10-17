/**
 * _strcpy - func copies string pointed to by src,to pointed to by dest.
 * @dest: destntion pointer
 * @src: source pointer
 *
 * Return: char pointer;
*/
char *_strcpy(char *dest, char *src)
{
	int size, i;

	for (size = 0 ; src[size] != '\0' ; size++)
		;
	size++;
	for (i = 0; i < size; i++)
		dest[i] = src[i];

	return (dest);
}
