/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabenman <yabenman@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 20:25:41 by yabenman          #+#    #+#             */
/*   Updated: 2025/02/26 00:55:43 by yabenman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILOSOPHERS_H
# define PHILOSOPHERS_H
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <pthread.h>


typedef struct s_philo
{
	int				ph_id;
	int				ph_t_mourir;
	int				ph_t_manger;
	int				ph_t_dort;
    int				ph_status;

	
}	t_philo;


int		ph_error(char *s);

int		ft_atoi(const char *str);
int		ft_isspace(int c);
void	ft_putstr_fd(char *s, int fd);

#endif