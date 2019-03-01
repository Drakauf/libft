/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strdel.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shthevak <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/03/01 19:11:40 by shthevak     #+#   ##    ##    #+#       */
/*   Updated: 2019/03/01 19:12:26 by shthevak    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "str.h"

void	ft_strdel(char	**str)
{
	if (*str)
	{
		free(*str);
	}
	*str = NULL;
}