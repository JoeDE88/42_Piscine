/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 20:39:51 by codespace         #+#    #+#             */
/*   Updated: 2026/01/07 22:01:55 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putstr_non_printable(char *str);
void	convert_to_hexa(char c);

int	main(void)
{
	char	str[] = { 'H','e','l','l','o', '\n', 'W','o','r','l','d','\0' };
	ft_putstr_non_printable(str);
	return (0);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < ' ' || str[i] == 127)
			convert_to_hexa(str[i]);
		else
			write(1, &str[i], 1);
		i++;
	}
}

void	convert_to_hexa(char c)
{
	char	hexa_base[] = "0123456789abcdef";
	char	character;
	
	write(1, "\\", 1);
	character = hexa_base[c / 16];
	write(1, &character, 1);
	character = hexa_base[c % 16];
	write(1, &character, 1);
}