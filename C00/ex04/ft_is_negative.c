/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/01 19:14:50 by codespace         #+#    #+#             */
/*   Updated: 2026/01/01 19:18:38 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n);

/*
int	main(void)
{
	ft_is_negative(7);
}
*/

void	ft_is_negative(int n)
{
	if (n > 0)
		write(1, "P", 1);
	else
		write(1, "N", 1);
}
