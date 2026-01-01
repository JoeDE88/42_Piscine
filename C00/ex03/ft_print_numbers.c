/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/01 19:12:29 by codespace         #+#    #+#             */
/*   Updated: 2026/01/01 19:13:13 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void);

/*
int	main(void)
{
	ft_print_numbers();
}
*/

void	ft_print_numbers(void)
{
	char	c;

	c = 48;
	while (c < 58)
	{
		write(1, &c, 1);
		c++;
	}
}
