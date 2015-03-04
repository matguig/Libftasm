/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matguig <matguig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/26 11:18:06 by matguig           #+#    #+#             */
/*   Updated: 2015/02/27 18:25:22 by matguig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <math.h>

extern size_t	ft_strlen(const char *s);
extern int		ft_isalpha(int t);
extern int		ft_isdigit(int c);
extern int		ft_isalnum(int c);
extern int		ft_isprint(int c);
extern int		ft_isascii(int c);
extern char		*ft_strdup(const char *str);
extern void		ft_bzero(void *s, size_t n);
extern void		*ft_memset(void *s, int c, size_t n);
extern char		*ft_memcpy(void *st1, const void *st2, size_t n);
extern char		*ft_strcpy(char *s1, const char *s2);
extern int		ft_puts(const char *s);
extern void		ft_cat(unsigned int fd);
extern int		ft_toupper(int lt);
extern int		ft_tolower(int lt);
extern char		*ft_strcat(char *s1, const char *s2);
extern int		ft_isupper(int c);
extern int		ft_islower(int c);
extern int		ft_pow(int nb, int pow);
extern int		ft_putstr_fd(char *str, int fd);
extern char		*ft_strnew(size_t size);

#endif
