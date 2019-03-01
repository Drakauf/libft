|Function Name			|Prototype					|Description													|Return Value|
|:--------:				|:--------:					|:--------:														|:--------:					|
|putchar				|void	ft_putchar(char c)			|Writes chararacter c on stdout as an unsigned char.			|							|
|putstr					|void	ft_putstr(char *str)		|Writes string until '\0' on stdout								|							|
|strlen					|int	ft_strlen(const char *str) |Calculates the length of the string s, excluding '\0'			|Length of string			|
|strdup					|char	*ft_strdup(char *str)		|Duplicates string and return a pointer to it, the new string is memory allocated with malloc(3) and can be freed with free(3)	|Pointer to the new string or NULL if an error occured|
|strdel					|void	ft_strdel(char **str)		|Take a pointer on a string, free the pointer with free(3) and put it to NULL||
