/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_blank.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttshivhu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/28 08:55:13 by ttshivhu          #+#    #+#             */
/*   Updated: 2017/07/28 08:55:34 by ttshivhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_is_blank(char c)
{
	if (c == ' ' || c == '\t' || c == '\r')
		return (1);
	return (0);
}
