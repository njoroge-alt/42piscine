/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnjoroge <jnjoroge@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 11:04:18 by jnjoroge          #+#    #+#             */
/*   Updated: 2023/08/26 12:55:26 by jnjoroge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	unsigned int	i;

	i = 0;
	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (nb);
	while (i * i < (unsigned int)nb)
		i++;
	if (i * i == (unsigned int)nb)
		return (i);
	return (0);
}
/*
#include<stdio.h>
int main()
{
    printf("%d\n", ft_sqrt(4000));
    
}
*/