/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_unix.h                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shthevak <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/03/13 21:42:15 by shthevak     #+#   ##    ##    #+#       */
/*   Updated: 2019/03/14 01:38:11 by shthevak    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FT_UNIX_H
# define FT_UNIX_H

# include <sys/ioctl.h>

int ft_terminal_h(int ft);
int	ft_terminal_w(int fd);

#endif
