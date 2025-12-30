/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 22:09:42 by codespace         #+#    #+#             */
/*   Updated: 2025/12/30 22:13:04 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void);

/*
int	main(void)
{
	ft_print_reverse_alphabet();
}
*/

void	ft_print_reverse_alphabet(void)
{
	char	c;

	c = 122;
	while (c > 96)
	{
		write(1, &c, 1);
		c--;
	}
}
