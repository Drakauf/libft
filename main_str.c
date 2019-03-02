/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main_str.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shthevak <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/02/28 16:48:18 by shthevak     #+#   ##    ##    #+#       */
/*   Updated: 2019/03/02 18:20:32 by shthevak    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "str.h"

int main(int i, char **j)
{
/*	ft_putchar('\n');
	ft_putchar('0');
	ft_putchar(0);
	ft_putchar(-159);
	ft_putstr("\n");
	ft_putstr("");
	ft_putstr("HELLO WORLD !");

*/	char	*s;
/*	s = ft_strdup("test");
	ft_putstr(s);
	ft_strdel(&s);
	ft_putstr(s);

	s = ft_strdup("");
	printf("%s\n", s);
	ft_strdel(&s);
	printf("%s\n", s);

	s = ft_strdup("test");
	printf("%s\n", s);
	ft_strdel(&s);
	printf("%s\n", s);

	s = ft_strjoin("It", " Works !");
	printf("%s\n", s);
	ft_strdel(&s);
	printf("%s\n", s);

	s = ft_strdup("test");
	ft_strjoinfree(&s, "Working");
	printf("%s\n", s);
	ft_strdel(&s);
	printf("%s\n", s);
*/

	s = ft_strdup("It's");
	ft_strjoinfree(&s, "Working");
	ft_strjoininsert(&s, " ", 4);
	printf("|%s|\n", s);
	ft_strdel(&s);

	s = ft_strdup("It's");
	ft_strjoinfree(&s, "Working");
	ft_strjoininsert(&s, " ", 130);
	printf("|%s|\n", s);
	ft_strdel(&s);

	s = ft_strdup("It's");
	ft_strjoinfree(&s, "Working");
	ft_strjoininsert(&s, " ", 0);
	printf("|%s|\n", s);
	ft_strdel(&s);

	s = ft_strdup("It's");
	ft_strjoinfree(&s, "Working");
	ft_strjoininsert(&s, " ", -100);
	printf("|%s|\n", s);
	ft_strdel(&s);

	return (0);
}
