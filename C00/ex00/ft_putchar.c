/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 16:23:56 by codespace         #+#    #+#             */
/*   Updated: 2025/12/23 16:34:28 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

/*
int	main(void)
{
	ft_putchar(97);
	return (0);
}
*/

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
