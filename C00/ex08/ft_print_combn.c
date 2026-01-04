/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 18:22:09 by codespace         #+#    #+#             */
/*   Updated: 2026/01/04 20:15:21 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_print_combn(int n);
void	print_array(char *arr, int size, int last);

/*
int	main(void)
{
	ft_print_combn(5);
	return (0);
}
*/

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_combn(int n)
{
	char	arr[10];
	char	max_arr[10];
	int		flag;
	int		base;
	int		i;

	i = 0;
	while (i < n)
	{
		arr[i] = i + 48;
		max_arr[i] = (10 - n) + i + 48;
		i++;
	}
	print_array(arr, n, max_arr[0]);
	while (arr[0] != max_arr[0])
	{
		flag = n - 1;
		while (arr[flag] == max_arr[flag])
			--flag;
		base = ++(arr[flag]);
		while (flag < n - 1)
			arr[++flag] = ++base;
		print_array(arr, n, max_arr[0]);
	}
}

void	print_array(char *arr, int size, int last)
{
	int	i;

	i = 0;
	if (arr[0] == last)
	{
		while (i < size)
			ft_putchar(arr[i++]);
	}
	else
	{
		while (i < size)
			ft_putchar(arr[i++]);
		write(1, ", ", 2);
	}
}
