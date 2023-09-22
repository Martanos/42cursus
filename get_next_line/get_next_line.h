/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malee <malee@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 19:30:49 by malee             #+#    #+#             */
/*   Updated: 2023/09/22 19:45:59 by malee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

# define READL_OK 1
# define EOF_RCHD 0
# define ERR_HPND -1
# define NULL 0

# define NO_ENDLINE 0
# define FOUND_ENDLINE 1

int		get_next_line(int fd, char **line);

/*
** Utils
*/

size_t	ft_strlen(const char *input);
char	*ft_strdup(const char *s1);

#endif
