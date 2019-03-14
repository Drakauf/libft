/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_list.h                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shthevak <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/03/14 02:55:53 by shthevak     #+#   ##    ##    #+#       */
/*   Updated: 2019/03/14 09:12:09 by shthevak    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

# include <stdlib.h>
# include <unistd.h>

/*
********************************************************************************
**                                                                  Structures *
********************************************************************************
*/

/*
** list
*/


typedef	struct		s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

/*
** var
*/

typedef struct		s_var
{
	void				*var;
	void				*val;
	int					type;
	struct s_var		*next;
}						t_var;

/*
********************************************************************************
**                                                                   Fonctions *
********************************************************************************
*/

t_var	*create_var_str_elem(char *var, char *val);
void	ft_add_var_elem(t_var **l, t_var *ne);
void	ft_print_var_list(t_var **list);
void	ft_change_var_str(char *var, char *val, t_var **env);
void	ft_free_var_list(t_var **list);
#endif
