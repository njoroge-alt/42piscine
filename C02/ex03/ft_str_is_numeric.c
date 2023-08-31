/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnjoroge <jnjoroge@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 12:30:31 by jnjoroge          #+#    #+#             */
/*   Updated: 2023/08/17 12:46:59 by jnjoroge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
		if (str[i] >= '0' && str[i] <= '9')
			i++;
	else
		return (0);
	return (1);
}
/*
int	main()
{
	char src[] = "1212313w";

	 int a = ft_str_is_numeric( src );



	printf("%d\n", a );
	return 0;

}*/
