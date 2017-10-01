/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   echo_builtin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttshivhu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/30 12:59:43 by ttshivhu          #+#    #+#             */
/*   Updated: 2017/07/30 12:59:46 by ttshivhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/shell.h"

int			exec_command_echo(char **line)
{
	int		i;
	int		j;

	i = 1;
	j = 0;
	while (line[i])
	{
		j = 0;
		while (line[i][j])
		{
			if (line[i][j] != '"' && line[i][j] != '\'')
				ft_putchar(line[i][j]);
			j++;
		}
		ft_putchar(' ');
		i++;
	}
	ft_putchar('\n');
	return (1);
}

void		cm_nstr(char *s)
{
	int		i;

	i = ft_strlen(s);
	ft_putstr(s);
	while (i < 20)
	{
		ft_putchar(' ');
		i++;
	}
}

int			cm_echo(char **s)
{
	int		i;
	int		j;

	i = 1;
	j = 0;
	while (s[i])
	{
		cm_nstr(s[i]);
		if (j == 4)
		{
			ft_putchar('\n');
			j = -1;
		}
		i++;
		j++;
	}
	ft_putchar('\n');
	return (1);
}
