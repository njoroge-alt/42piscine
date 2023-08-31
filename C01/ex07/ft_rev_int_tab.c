/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnjoroge <jnjoroge@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 13:20:48 by jnjoroge          #+#    #+#             */
/*   Updated: 2023/08/15 13:45:09 by jnjoroge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	i = 0;
	while (i < (size / 2))
	{		
		swap = tab[i];
		tab[i] = tab [size - i - 1];
		tab [size - i - 1] = swap;
		i++;
	}	
}
/*
int main ()
{		
	int arr[12] = {3,51,4,52,52,523322,43,245,54,345,245,91};

	int size = 12;	

	ft_rev_int_tab(arr, size);
	
	
	int i = 0;

	while (i < size)
	{
		
	printf("%d, ", arr[i]);
	i++;
	}


}
*/
