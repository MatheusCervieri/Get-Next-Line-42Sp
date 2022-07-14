/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 20:32:27 by mvieira-          #+#    #+#             */
/*   Updated: 2022/06/30 20:35:17 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	is_there_nl(char *str)
{
	int	i;

	if (!str)
		return (-1);
	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			return (i);
		i++;
	}
	return (-1);
}

unsigned int	ft_strlen(const char *s)
{
	unsigned int	i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}

char	*ft_strjoin_free(char const *s1, char const *s2)
{
	char	*newstr;
	char	*newstrfirstposition;
	char	*s1p;

	s1p = (char *)s1;
	newstr = malloc((ft_strlen(s1) + ft_strlen(s2)) * sizeof(char) + 1);
	if (!newstr)
		return (NULL);
	newstrfirstposition = newstr;
	while (*s1 != '\0')
	{
		*newstr = *s1;
		newstr++;
		s1++;
	}
	while (*s2 != '\0')
	{
		*newstr = *s2;
		newstr++;
		s2++;
	}
	*newstr = '\0';
	free(s1p);
	return (newstrfirstposition);
}

char	*ft_strdup(const char *s)
{
	char	*newstr;
	char	*newstrp;

	newstr = malloc(ft_strlen(s) * sizeof(char) + 1);
	if (newstr == NULL)
		return (NULL);
	newstrp = newstr;
	while (*s != '\0')
	{
		*newstr = *s;
		newstr++;
		s++;
	}
	*newstr = '\0';
	return (newstrp);
}
