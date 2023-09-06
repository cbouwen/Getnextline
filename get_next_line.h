/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbouwen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 14:41:26 by cbouwen           #+#    #+#             */
/*   Updated: 2023/05/12 15:04:13 by cbouwen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

char	*get_next_line(int fd);
char	*ft_readline(int fd, char *static_line);
size_t	ft_strlen(char *s);
char	*ft_strjoin(char *buffer, char *static_line);
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *s);
char	*ft_new_static(char *sl);
char	*ft_find_line(char *static_line);
void	*ft_memcpy(void *dest, const void *src, size_t n);

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 32
# endif

#endif
