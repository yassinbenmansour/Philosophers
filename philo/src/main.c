/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabenman <yabenman@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 20:26:24 by yabenman          #+#    #+#             */
/*   Updated: 2025/02/23 20:45:07 by yabenman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/philosophers.h"

int main(int ac , char **av)
{
    if (ac < 5 || ft_atoi(av[1]) == 0 || ac > 6)
		return (ph_error("Wrong number of arguments."));
}