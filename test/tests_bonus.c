/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matguig <matguig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/24 20:32:09 by matguig           #+#    #+#             */
/*   Updated: 2015/02/27 17:52:34 by matguig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int		test_isupper(void)
{
	int		i;
	int		error;
	int		official;
	int		personal;

	write(1, "@ Test of ft_isupper() -> ", 26);
	i = 0;
	error = 0;
	while (i < 128)
	{
		official = isupper(i);
		personal = ft_isupper(i);
		if (personal != official)
			error++;
		i++;
	}
	if (error == 0)
	{
		write(1, " \033[32mOK\033[0m\n", 13);
		return (0);
	}
	write(1, " \033[31mFAIL\033[0m\n", 15);
	return (1);
}

int		test_islower(void)
{
	int		i;
	int		error;
	int		official;
	int		personal;

	write(1, "@ Test of ft_islower() -> ", 26);
	i = 0;
	error = 0;
	while (i < 128)
	{
		official = islower(i);
		personal = ft_islower(i);
		if (personal != official)
			error++;
		i++;
	}
	if (error == 0)
	{
		write(1, " \033[32mOK\033[0m\n", 13);
		return (0);
	}
	write(1, " \033[31mFAIL\033[0m\n", 15);
	return (1);
}

int		test_pow(void)
{
	int		i;
	int		x;

	write(1, "@ Test of ft_pow()     -> ", 26);
	i = 0;
	x = 0;
	while (i < 10)
	{
		while (x < 10)
		{
			if (pow(i, x) != ft_pow(i, x))
			{
				write(1, " \033[31mFAIL\033[0m\n", 15);
				return (0);
			}
			x++;
		}
		i++;
		x = 0;
	}
	write(1, " \033[32mOK\033[0m\n", 13);
	return (1);
}

int		test_putstr_fd(char *str, int fd)
{
	write(1, "\033[4mft_puts() Results :\033[0m \n", 29);
	write(1, "\033[35m personal :> \033[0m", 22);
	ft_putstr_fd(str, fd);
	write(1, "\033[35m$\n\033[0m", 11);
	write(1, "@ Test of ft_putstr_fd()->", 26);
	write(1, " \033[33mCHECK\033[0m\n", 16);
	return (1);
}

int		test_strnew(void)
{
	char	*str;
	char	*test;

	write(1, "@ Test of ft_strnew()  -> ", 26);
	str = ft_strnew(100);
	test = (char*)malloc(101);
	bzero(test, 101);
	if (memcmp(str, test, 101))
	{
		write(1, " \033[31mFAIL\033[0m\n", 15);
		return (1);
	}
	write(1, " \033[32mOK\033[0m\n", 13);
	return (0);
}
