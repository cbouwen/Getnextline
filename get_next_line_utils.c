/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbouwen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 14:00:13 by cbouwen           #+#    #+#             */
/*   Updated: 2023/05/12 13:26:47 by cbouwen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)(s + i));
	return (0);
}

char	*ft_strjoin(char *buffer, char *static_line)
{
	char	*new_string;
	int		i;
	int		j;

	if (!static_line)
	{
		static_line = (char *)malloc(sizeof(char) * 1);
		if (!static_line)
			return (NULL);
		static_line[0] = '\0';
	}
	new_string = (char *)malloc(sizeof(char) * (ft_strlen(buffer)
				+ ft_strlen(static_line) + 1));
	if (!new_string)
		return (NULL);
	i = -1;
	while (static_line[++i])
		new_string[i] = static_line[i];
	j = -1;
	while (buffer[++j])
		new_string[i + j] = buffer[j];
	new_string[i + j] = '\0';
	free(static_line);
	return (new_string);
}

size_t	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
		i++;
	return (i);
}
