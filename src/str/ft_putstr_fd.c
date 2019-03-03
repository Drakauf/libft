/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putstr_fd.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shthevak <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/03/03 14:59:41 by shthevak     #+#   ##    ##    #+#       */
/*   Updated: 2019/03/03 15:08:24 by shthevak    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "str.h"

void	ft_putstr_fd(const char *s, int fd)
{
	if (s == NULL)
		return ;
	write(fd, str, ft_strlen(str));
}
