/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_atoi.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shthevak <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/03/03 10:49:37 by shthevak     #+#   ##    ##    #+#       */
/*   Updated: 2019/03/03 15:28:53 by shthevak    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	unsigned long	r;
	int				s;

	s = 1;
	r = 0;
	while ((*str == '\t' || *str == '\f' || *str == '\v' ||
				*str == '\n' || *str == '\r' || *str == ' ')
			&& *str != '\0')
		str++;
	if (*str == '-' || *str == '+')
		if (*str++ == '-')
			s = -1;
	while (*str >= '0' && *str <= '9')
	{
		r = r * 10 + *str - 48;
		str++;
	}
	if (r >= 9223372036854775807)
		return (s == 1 ? -1 : 0);
	return (s * (int)r);
}
