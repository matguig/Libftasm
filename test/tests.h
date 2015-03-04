/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matguig <matguig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/24 17:18:23 by matguig           #+#    #+#             */
/*   Updated: 2015/02/27 18:26:16 by matguig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTS_H
# define TESTS_H

# include <stdio.h>
# include <fcntl.h>
# include <ctype.h>
# include <string.h>
# include "../src/libft.h"

void	partie1(void);
void	partie2(void);
void	partie_bonus(void);
void	partie3(void);

int		test_isalpha(void);
int		test_isalnum(void);
int		test_isdigit(void);
int		test_isprint(void);
int		test_isascii(void);
int		test_memcpy(int lenght);
int		test_puts(char *str);
int		test_strdup(char *src);
int		test_strcat(void);
int		test_memset(int lenght);
int		test_bzero(int lenght);
int		test_strlen(char *str);
int		test_strcpy(char *str);
int		test_toupper(void);
int		test_tolower(void);
void	test_cat(int fd);
int		test_isupper(void);
int		test_islower(void);
int		test_pow(void);
int		test_putstr_fd(char *str, int fd);
int		test_strnew(void);

#endif
