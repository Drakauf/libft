/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_file_rrights.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shthevak <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/03/15 16:58:29 by shthevak     #+#   ##    ##    #+#       */
/*   Updated: 2019/03/15 16:58:51 by shthevak    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_unix.h"

int	ft_file_rrights(char *path)
{
	if (access(path, R_OK) != -1)
		return (1);
	return (0);
}
