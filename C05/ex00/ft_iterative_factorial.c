/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnjoroge <jnjoroge@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 21:07:41 by jnjoroge          #+#    #+#             */
/*   Updated: 2023/08/28 21:16:23 by jnjoroge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fact;

	fact = nb;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	while (nb > 1)
	{
		fact = fact * (nb - 1);
		nb--;
	}
	return (fact);
}
/*
#include<stdio.h>
int main()
{
    printf("%d\n", ft_iterative_factorial(5));
    return(0);
}
*/