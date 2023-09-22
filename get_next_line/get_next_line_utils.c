/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malee <malee@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 18:58:39 by malee             #+#    #+#             */
/*   Updated: 2023/09/22 19:45:53 by malee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *input)
{
	size_t	idx;

	if (input)
	{
		idx = 0;
		while (*input)
		{
			idx++;
			input++;
		}
		return (idx);
	}
	return (NULL);
}

char	*ft_strdup(const char *s1)
{
	char	*s2;
	size_t	size;
	size_t	idx;

	size = ft_strlen(s1) + 1;
	s2 = (char *)malloc(size);
	if (!s2)
		return (0);
	idx = -1;
	while (++idx < size)
		((unsigned char *)s2)[idx] = ((unsigned char *)s1)[idx];
	return (s2);
}
