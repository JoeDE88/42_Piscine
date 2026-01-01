/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/01 19:34:47 by codespace         #+#    #+#             */
/*   Updated: 2026/01/01 22:04:46 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnb(int n);
void	ft_print_comb2(void);

/*
int	main(void)
{
	ft_print_comb2();
}
*/

void	ft_putnb(int n)
{
	char	c;
	char	d;

	c = 48 + (n / 10);
	d = 48 + (n % 10);
	write(1, &c, 1);
	write(1, &d, 1);
}

void	ft_print_comb2(void)
{
	int	num[2];

	num[0] = 0;
	while (num[0] < 100)
	{
		num[1] = num[0] + 1;
		while (num[1] < 100)
		{
			ft_putnb(num[0]);
			write(1, " ", 1);
			ft_putnb(num[1]);
			if (num[0] != 98 || num[1] != 99)
			{
				write(1, ",", 1);
				write(1, " ", 1);
			}
			num[1]++;
		}
		num[0]++;
	}
}
