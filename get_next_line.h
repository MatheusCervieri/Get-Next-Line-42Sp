/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 14:44:10 by mvieira-          #+#    #+#             */
/*   Updated: 2022/07/01 14:44:12 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

unsigned int	ft_strlen(const char *s);
char			*ft_strjoin_free(char const *s1, char const *s2);
char			*ft_strdup(const char *s);
char			*get_next_line(int fd);
int				is_there_nl(char *str);

#endif