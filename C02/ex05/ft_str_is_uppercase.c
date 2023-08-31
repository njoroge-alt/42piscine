/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnjoroge <jnjoroge@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 15:36:16 by jnjoroge          #+#    #+#             */
/*   Updated: 2023/08/17 12:54:35 by jnjoroge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
		if (str[i] >= 'A' && str[i] <= 'Z')
			i++;
	else
		return (0);
	return (1);
}
/*
int	main()
{
	char src[] = "LJHLSUGS";

	 int a = ft_str_is_uppercase(src);

	

	printf("%d\n", a );
	return 0;

}
*/
