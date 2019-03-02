/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   str.h                                            .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shthevak <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/02/25 13:11:49 by shthevak     #+#   ##    ##    #+#       */
/*   Updated: 2019/03/02 17:32:14 by shthevak    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "unistd.h"
#include "stdlib.h"

void	ft_putchar(char c);
void	ft_putstr(const char *str);
int		ft_strlen(const char *str);
char	*ft_strdup(char *str);
void	ft_strdel(char **str);
char	*ft_strjoin(const char *s1, const char *s2);
char	*ft_strcat(char *dest, char *src);
void	ft_strjoinfree(char **s1, const char *s2);
char	*ft_strnew(int size);
void	ft_bzero(void *elem, int i);
void	ft_strjoininsert(char **s1, char *s2, int i);
