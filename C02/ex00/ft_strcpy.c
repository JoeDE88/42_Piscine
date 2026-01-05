/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 15:09:41 by codespace         #+#    #+#             */
/*   Updated: 2026/01/05 15:27:51 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src);

/*
int	main(void)
{
	char	dest[20];
	int		i;
	
	i = 0;
	ft_strcpy(dest, "This is a test");
	while (dest[i] != '\0')
	{
		write(1, &dest[i], 1);
		i++;
	}
	return (0);
}
*/

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
