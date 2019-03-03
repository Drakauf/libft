/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putstr_tab.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shthevak <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/03/03 15:00:52 by shthevak     #+#   ##    ##    #+#       */
/*   Updated: 2019/03/03 15:02:18 by shthevak    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "str.h"

void	ft_puttab2d(const char **tab)
{
	int i;

	i = 0;
	if (tab == NULL)
		return ;
	while (*tab)
	{
		ft_putendl(*tab);
		*tab++;
	}
}