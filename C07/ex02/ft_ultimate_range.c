/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnjoroge <jnjoroge@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 13:46:59 by jnjoroge          #+#    #+#             */
/*   Updated: 2023/08/30 20:45:17 by jnjoroge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;
	int	*dest;

	size = max - min;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	dest = malloc (sizeof(int) * size + 1);
	if (dest == NULL)
	{
		*range = 0;
		return (-1);
	}
	*range = dest;
	i = 0;
	while (i < size)
	{
		dest[i] = min + i;
		i++;
	}
	return (size);
}
/*
#include<stdio.h>
int	main(void)
{
	int	min;
	int	max;
	int	i;
	int table;
	int	*range;

	min = 1;
	max = 12;
	i = 0;
	table = ft_ultimate_range(&range, min, max);
	printf("%d\n", table);
		
}*/