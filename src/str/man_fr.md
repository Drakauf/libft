|Nom de fonction			|Prototype					|Description																		|Valeur de retour		|
|:--------:					|:--------:					|:--------:																			|:--------:				|
|putchar					|void	ft_putchar(char c)			|Ecrit le caractere c sur la sortie standard converti en un unsigned char			|						|
|putstr						|void	ft_putstr(const char *str)	|Ecrit la chaine de caractere jusqu'au '\0'											|						|
|strlen						|int	ft_strlen(const char *str)	|Calcule la longueur de la chaine excluant le '\0'									|Longueur de la chaine	|
|strdup						|char	*ft_strdup(char *str)		|Retourne un pointeur sur une nouvelle chaine dupliquee en utilisant malloc(3) et pouvant etre liberee en utilisant free(3)|Un pointeur vers la chaine dupliquee ou NULL en cas d'erreur|
|strdel						|void	ft_strdel(char **str)		|Prend en paramètre l’adresse d’une chaîne de caractères qui doit être libérée avec free(3) et son pointeur mis à NULL.||
|strjoin|	char *ft_strjoin(const char *s1, const char *s2) |Alloue (avec malloc(3)) et retourne une chaîne de caractères “fraiche” terminée par un ’\0’ résultant de la concaténation de s1 et s2.| Nouvelle chaine de caractere ou NULL en cas d'erreur|
strjoinfree|	void	ft_strjoinfree(char **s1, const char *s2)|Concatene *s1 et s2 et remplace *s1 apres avoir free(). s1 doit etre un pointeur sur une chaine allouee avec malloc(3). Le pointeur s1 est mis a NULL si la nouvelle allocation (malloc(3)) echoue||
|strcat	|char	*ft_strcat(char *dest, char *src);|Ajoute la chaîne src à la fin de la chaîne dest en écrasant son caractère nul (« \0 »). Les chaînes ne doivent pas se chevaucher, et la chaîne dest doit être assez grande pour accueillir le résultat. La chaine dest est terminee par '\0'| Pointeur sur la chaine dest|
