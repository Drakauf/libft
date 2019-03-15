/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_unix.h                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shthevak <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/03/13 21:42:15 by shthevak     #+#   ##    ##    #+#       */
/*   Updated: 2019/03/15 15:43:19 by shthevak    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FT_UNIX_H
# define FT_UNIX_H

# include <sys/ioctl.h>
# include <unistd.h>
# include <sys/types.h> 
# include <sys/wait.h>

int ft_terminal_h(int ft);
int	ft_terminal_w(int fd);
int	ft_file_exists(char *path);
int	ft_create_file(char *path);
int	ft_execute(char *exec, char **opt, char **env);
#endif
