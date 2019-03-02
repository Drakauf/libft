/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main_str.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shthevak <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/02/28 16:48:18 by shthevak     #+#   ##    ##    #+#       */
/*   Updated: 2019/03/02 12:08:53 by shthevak    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "str.h"

int main(int i, char **j)
{
	/******************/
	ft_putchar('\n');
	ft_putchar('0');
	ft_putchar(0);
	ft_putchar(-159);
	/*****************/
	ft_putstr("\n");
	ft_putstr("");
	ft_putstr("HELLO WORLD !");
	/*****************/
	printf("%d\n", ft_strlen("test"));
	printf("%d\n", ft_strlen(""));
	printf("%d\n", ft_strlen("5test"));
	printf("%d\n", ft_strlen("test44"));
	printf("%d\n", ft_strlen("t"));
	/*****************/
	char	*s;
	s = ft_strdup("test");
	printf("%s\n", s);
	free(s);
	printf("%s\n", s);

	s = ft_strdup("");
	printf("%s\n", s);
	free(s);
	printf("%s\n", s);

	s = ft_strdup("test");
	printf("%s\n", s);
	ft_strdel(&s);
	printf("%s\n", s);

	/*****************/
	s = ft_strjoin("It", " Works !");
	printf("%s\n", s);
	ft_strdel(&s);
	printf("%s\n", s);

	s = ft_strdup("test");
	ft_strjoinfree(&s, "Working");
	printf("%s\n", s);
	ft_strdel(&s);
	printf("%s\n", s);


	return (0);
}
