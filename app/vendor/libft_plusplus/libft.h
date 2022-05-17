/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acapela- < acapela-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 20:34:46 by acapela-          #+#    #+#             */
/*   Updated: 2022/01/31 03:13:24 by acapela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

/*
 * Functions ++ -> Created to make ft_printf works easier
*/

// FD that ft_putstr_fd will use to show the ft_printf response
# define FD 1

/* It's a way to apply tokenization technic, any time %% is passed in the
formatted string, or when 0(NULL) is passed as argument value, both assume
these tokens values, and at the final ft_putstr_fd will replace the tokens per
just % and ''. These avoid a lot of bugs. With the practice you will be aware
of it. */
# define TOKENIZATION_NULL    "___BANANA0_"
# define TOKENIZATION_PERCENT "___BANANA1_"

/* Useful to generate spaces and zeros of ' ' and 0 flag, and to transform c
to string before the final print.*/
char	*ft_chr_to_str(int c, size_t qtd);

// It's an strjoin a little more smart and simple
char	*ft_str_merge(char *s1, char *s2);

/* Super useful everywhere, we use it to replace the %something for values
passed as argument.*/
char	*ft_str_replace(char *str, char *search, char *replace);

// To avoid double free problems, etc. We free a pointer and set =NULL;
void	ft_free_ptr(void **ptr);

/* Transform a number to string but in a different base, for example, if you
 wana convert from base 10 to base 16, just put "0123456789abcdef" on the
 'base' argument, the logic is a variation of ft_itoa */
char	*ft_uitoa_base(size_t n, char *base);

/* Is the same ft_putstr_fd of libft, but with some increments, replacing the
defined and founded tokens and returns the number os bytes read */
int		ft_putstr_fd(char *s, int fd);

/*
 * Normal Libft functions
*/

char	*ft_itoa(int n);
int		ft_atoi(const char *str);
void	ft_bzero(void *str, size_t n);
void	*ft_calloc(size_t num, size_t size);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
void	*ft_memchr(const void *str, int c, size_t n);
int		ft_memcmp(const void *str1, const void *str2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *str, int c, size_t n);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
char	*ft_strchr(const char *str, int c);
char	*ft_strdup(const char *s);
char	*ft_strjoin(char *s1, char *s2);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlen(char const *str);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *s1, const char *s2, size_t n);
char	*ft_strrchr(const char *str, int c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int		ft_tolower(int c);
char	ft_toupper(int c);
#endif
