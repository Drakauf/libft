|Nom de fonction			|Prototype					|Description																		|Valeur de retour		|
|:--------:					|:--------:					|:--------:																			|:--------:				|
|putchar					|void	ft_putchar(char c)			|Ecrit le caractere c sur la sortie standard converti en un unsigned char			|						|
|putstr						|void	ft_putstr(const char *str)	|Ecrit la chaine de caractere jusqu'au '\0'											|						|
|strlen						|int	ft_strlen(const char *str)	|Calcule la longueur de la chaine excluant le '\0'									|Longueur de la chaine	|
|strdup						|char	*ft_strdup(char *str)		|Retourne un pointeur sur une nouvelle chaine dupliquee en utilisant malloc(3) et pouvant etre liberee en utilisant free(3)|Un pointeur vers la chaine dupliquee ou NULL en cas d'erreur|
|strdel						|void	ft_strdel(char **str)		|Prend en paramètre l’adresse d’une chaîne de caractères qui doit être libérée avec free(3) et son pointeur mis à NULL.||
