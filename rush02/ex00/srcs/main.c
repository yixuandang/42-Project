/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzeng <kzeng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/17 00:37:57 by kzeng             #+#    #+#             */
/*   Updated: 2016/07/17 13:48:05 by kzeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int		main(int argc, char **argv)
{
	if (argc == 1 || argc != 3)
	{
		write(1, "\n", 1);
	}
	else
	{
		rush(ft_atoi_1(argv), ft_atoi_2(argv));
	}
	return (0);
}
