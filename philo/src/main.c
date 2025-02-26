/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabenman <yabenman@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 20:26:24 by yabenman          #+#    #+#             */
/*   Updated: 2025/02/25 02:02:19 by yabenman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// ./philo number_of_philosophers time_to_die time_to_eat time_to_sleep [number_of_times_each_philosopher_must_eat]


#include "../inc/philosophers.h"

int main(int ac , char **av)
{
    if (ac < 5 || ft_atoi(av[1]) == 0 || ac > 6)
		return (ph_error("Wrong number of arguments."));
}