/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_str.h                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shthevak <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/03/03 15:18:39 by shthevak     #+#   ##    ##    #+#       */
/*   Updated: 2019/03/04 13:35:41 by shthevak    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FT_STR_H
# define FT_STR_H

void	ft_bzero(void *elem, int i);
void	ft_isalpha(int c);
void	ft_isascii(int c);
char	*ft_itoa(int i);
char	*ft_itoa_base(int nb, int base);
#endif
