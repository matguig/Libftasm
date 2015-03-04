/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_is.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matguig <matguig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/24 17:17:19 by matguig           #+#    #+#             */
/*   Updated: 2015/02/27 17:58:59 by matguig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int		test_isalpha(void)
{
	int		i;
	int		error;
	int		official;
	int		personal;

	write(1, "@ Test of ft_isalpha() -> ", 26);
	i = 0;
	error = 0;
	while (i < 128)
	{
		official = isalpha(i);
		personal = ft_isalpha(i);
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

int		test_isalnum(void)
{
	int		i;
	int		error;
	int		official;
	int		personal;

	write(1, "@ Test of ft_isalnum() -> ", 26);
	i = 0;
	error = 0;
	while (i < 128)
	{
		official = isalnum(i);
		personal = ft_isalnum(i);
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

int		test_isdigit(void)
{
	int		i;
	int		error;
	int		official;
	int		personal;

	write(1, "@ Test of ft_isdigit() -> ", 26);
	i = 0;
	error = 0;
	while (i < 128)
	{
		official = isdigit(i);
		personal = ft_isdigit(i);
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

int		test_isprint(void)
{
	int		i;
	int		error;
	int		official;
	int		personal;

	write(1, "@ Test of ft_isprint() -> ", 26);
	i = 0;
	error = 0;
	while (i < 128)
	{
		official = isprint(i);
		personal = ft_isprint(i);
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

int		test_isascii(void)
{
	int		i;
	int		error;
	int		official;
	int		personal;

	write(1, "@ Test of ft_isascii() -> ", 26);
	i = 0;
	error = 0;
	while (i < 128)
	{
		official = isascii(i);
		personal = ft_isascii(i);
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
