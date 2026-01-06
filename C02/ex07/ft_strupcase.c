/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 18:04:46 by codespace         #+#    #+#             */
/*   Updated: 2026/01/06 18:14:38 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str);

/*
int	main(void)
{
	char	str[50] = "Hello, this is the 1st test";
	ft_strupcase(str);
	printf("%s\n", str);
	return (0);
}
*/

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 96 && str[i] <= 122)
			str[i] -= 32;
		i++;
	}
	return (str);
}
