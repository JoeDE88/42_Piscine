/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 19:13:49 by codespace         #+#    #+#             */
/*   Updated: 2026/01/07 20:35:53 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <bsd/string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

/*
int	main(void)
{
	char	dest[15];
	unsigned int	result;
	
	result = ft_strlcpy(dest, "String way larger then dest", sizeof(dest));
	printf("dest: '%s', size of dest: %ld, size of intented: %d\n", dest, sizeof(dest), result);
	return (0);
}
*/

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_size;

	src_size = 0;
	i = 0;
	while (src[src_size] != '\0')
		src_size++;
	if (size == 0)
		return (src_size);
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_size);
}
