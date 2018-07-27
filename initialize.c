/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtsai <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 14:10:09 by jtsai             #+#    #+#             */
/*   Updated: 2018/07/23 16:57:56 by jtsai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	initialize(char *s, int len)
{
	int	i;
	int	size;

	size = len * (len + 1);
	i = -1;
	while (++i < size)
	{
		if (i >= len * (len + 1))
			s[i] = '\0';
		else if (i % (len + 1) == len)
			s[i] = '\n';
		else
			s[i] = '.';
	}
}