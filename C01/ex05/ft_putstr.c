/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 13:29:23 by codespace         #+#    #+#             */
/*   Updated: 2026/01/05 13:32:32 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str);

/*
int	main(void)
{
	ft_putstr("Hola.");
}
*/

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}
