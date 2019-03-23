/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_get_val.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shthevak <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/03/23 17:46:26 by shthevak     #+#   ##    ##    #+#       */
/*   Updated: 2019/03/23 17:50:59 by shthevak    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_list.h"

static int		ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 == *s2 && *s1)
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

char	*ft_get_val(char *str, t_var **envir)
{
	t_var	*list;

	list = *envir;
	while (list)
	{
		if (ft_strcmp(str, list->var) == 0)
			return (list->val);
		list = list->next;
	}
	return (NULL);
}
