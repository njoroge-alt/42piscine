/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnjoroge <jnjoroge@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 19:11:09 by jnjoroge          #+#    #+#             */
/*   Updated: 2023/08/30 20:44:15 by jnjoroge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	i;
	int	*dest;

	size = max - min;
	if (min >= max)
	{
		return (0);
	}
	dest = malloc (sizeof(int *) * size + 1);
	if (dest == NULL)
		return (0);
	else
	{
		i = 0;
		while (i < size)
		{
			dest[i] = min + i;
			i++;
		}
	}
	return (dest);
}
/*
#include <stdio.h>
int	main(void)
{
	int	min;
	int	max;
	int	i;
	int *table;

	min = -5;
	max = 15;
	i = 0;
	table = ft_range(min, max);
	
	while (i < max - min)
	{
		printf("%d ", table[i]);
		i++;
	}
}
*/