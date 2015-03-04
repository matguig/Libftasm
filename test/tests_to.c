/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_to.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matguig <matguig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/24 20:11:07 by matguig           #+#    #+#             */
/*   Updated: 2015/02/27 18:05:49 by matguig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int		test_toupper(void)
{
	int		i;
	int		error;
	int		official;
	int		personal;

	write(1, "@ Test of ft_toupper() -> ", 26);
	i = 0;
	error = 0;
	while (i < 128)
	{
		official = toupper(i);
		personal = ft_toupper(i);
		if (personal != official)
			error++;
		i++;
	}
	if (error != 0)
	{
		write(1, " \033[31mFAIL\033[0m\n", 15);
		return (0);
	}
	write(1, " \033[32mOK\033[0m\n", 13);
	return (1);
}

int		test_tolower(void)
{
	int		i;
	int		error;
	int		official;
	int		personal;

	write(1, "@ Test of ft_tolower() -> ", 26);
	i = 0;
	error = 0;
	while (i < 128)
	{
		official = tolower(i);
		personal = ft_tolower(i);
		if (personal != official)
			error++;
		i++;
	}
	if (error != 0)
	{
		write(1, " \033[31mFAIL\033[0m\n", 15);
		return (0);
	}
	write(1, " \033[32mOK\033[0m\n", 13);
	return (1);
}
