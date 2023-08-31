/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnjoroge <jnjoroge@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 12:56:27 by jnjoroge          #+#    #+#             */
/*   Updated: 2023/08/26 13:46:37 by jnjoroge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
/*
#include<stdio.h>
int main()
{
    printf("%d\n", ft_is_prime(2));
	printf("%d\n", ft_is_prime(20));
	printf("%d\n", ft_is_prime(89));    
}
*/
