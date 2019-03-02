|Function Name			|Prototype					|Description													|Return Value|
|:--------:				|:--------:					|:--------:														|:--------:					|
|putchar				|void	ft_putchar(char c)			|Writes chararacter c on stdout as an unsigned char.			|							|
|putstr					|void	ft_putstr(char *str)		|Writes string until '\0' on stdout								|							|
|strlen					|int	ft_strlen(const char *str) |Calculates the length of the string s, excluding '\0'			|Length of string			|
|strdup					|char	*ft_strdup(char *str)		|Duplicates string and return a pointer to it, the new string is memory allocated with malloc(3) and can be freed with free(3)	|Pointer to the new string or NULL if an error occured|
|strdel					|void	ft_strdel(char **str)		|Take a pointer on a string, free the pointer with free(3) and put it to NULL||
|strjoin|	char *ft_strjoin(const char *s1, const char *s2) |Allocates memory for a new string which is the concatenation of s1 ans s2 with malloc(3)| New string or NULL if fails|
strjoinfree|	void	ft_strjoinfree(char **s1, const char *s2)|Concatenates *s1 and s2 at *s1 address after freeing it with free(3). s1 has to be allocated with malloc(3). If the new allocation fails, *s1 is set to NULL||
|strcat	|char	*ft_strcat(char *dest, char *src);|Add the src string at the end oft dest string deleting it's '\0' and adding one at the end| Address of dest|
|strnew|||||
|bzero|||||
|strjoininsert|||||
