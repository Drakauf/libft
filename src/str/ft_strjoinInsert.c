/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strjoinInsert.c                               .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shthevak <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/03/02 17:13:45 by shthevak     #+#   ##    ##    #+#       */
/*   Updated: 2019/03/02 18:22:47 by shthevak    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "str.h"

void	ft_strjoininsert(char **s1, char *s2, int i)
{
	char	*ret;
	int		j;
	
	ret = ft_strnew(ft_strlen(*s1) + ft_strlen(s2));
	j = 0;
	if (ret != NULL)
	{
		while ((*s1)[j] && j < i)
		{
			ret[j] = (*s1)[j];
			j++;
		}
		ret = ft_strcat(ret, s2);
		if ((*s1)[j])
		{
			ret = ft_strcat(ret, (*s1) + j);
		}
		ft_strdel(s1);
		*s1 = ret;
	}
	else
		ft_strdel(s1);
}
