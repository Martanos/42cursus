/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 20:35:21 by root              #+#    #+#             */
/*   Updated: 2023/10/11 20:37:31 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "./libft/libft.h"
# include "ft_printf_type.h"

/*
** update
** List of edge cases
** https://android.googlesource.com/
** platform/external/clang/+/d147f8f/test/Sema/format-strings.c
** Search for "warning"
*/

int		ft_printf(const char *format, ...);
