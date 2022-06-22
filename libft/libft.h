/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 14:39:26 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/05/13 07:37:15 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 100
# endif

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
size_t	ft_strlen(const char *s);
void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void	*s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void	*s1, const void *s2, size_t n);
char	*ft_strnstr(const char *s1, const char *s2, size_t len);
long	ft_atoi(const char *str);
void	*ft_calloc(size_t count, size_t size);
char	*ft_strdup(const char *s);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f) (unsigned int, char));
void	ft_striteri(char *s, void (*f) (unsigned int, char *));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
size_t	f_l(char	*str);
char	*ft_s_join(char *temp, char *buff);
char	*get_next_line(int fd);
int		ft_hex_len(unsigned int nb);
void	ft_hex_put(unsigned int nb, const char format);
int		ft_print_hex(unsigned int nb, const char format);
int		ft_ptr_len(uintptr_t nb);
void	ft_ptr_put(uintptr_t nb);
int		ft_ptr_print(unsigned long long ptr);
int		ft_len_num(unsigned int nb);
char	*ft_uitoa(unsigned int nb);
int		ft_print_unsigned(unsigned int nb);
void	ft_pust_str(char *str);
int		ft_print_str(char *str);
int		ft_print_nbr(int nb);
int		ft_print_prc(void);
int		ft_print_char(int c);
int		ft_print_formats(va_list args, const char format);
int		ft_printf(const char *str, ...);

#endif
