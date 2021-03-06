/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   erase_trimino.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtsai <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 16:23:41 by jtsai             #+#    #+#             */
/*   Updated: 2018/07/26 12:48:47 by jtsai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	erase_trimino(t_sqr *q, t_trim t, int p)
{
	int	i;
	int	k;
	int	start;

	start = t.po[0];
	i = -1;
	while (++i < 4)
	{
		k = p + (t.po[i] / 5 - start / 5) * (q->len + 1);
		k += (t.po[i] % 5 - start % 5);
		q->square[k] = '.';
	}
}
