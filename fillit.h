/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkihn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 12:42:01 by kkihn             #+#    #+#             */
/*   Updated: 2018/12/13 15:34:43 by kkihn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include "libft/libft.h"
# include <fcntl.h>
# define BUFF_SIZE 21

void	ft_usage(void);
void	ft_error(void);
char	*ft_read_map(char *file_name);
int		ft_map_size(char *s);
int		ft_map_count(char *s);
void	ft_solve(char *s, int map_count);
t_list	*ft_create_list(char *buf, int map_size, int start);
int		ft_ind_start(char *buf);
int		ft_ind_end(char *buf);
int		ft_algorithm(t_list *matrix, t_list **res);
void	ft_create_answer(t_list *res, int map_size);
char	*ft_drop_n(char *s);
#endif
