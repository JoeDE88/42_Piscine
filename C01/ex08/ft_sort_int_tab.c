/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 14:07:39 by codespace         #+#    #+#             */
/*   Updated: 2026/01/05 14:28:30 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#define N 7

void	ft_swap(int *a, int *b);
void	ft_sort_int_tab(int	*tab, int size);

/*
int	main(void)
{
	int	tab[N] = {1, 13, 54, 99, 12, 233, 4};
	int i;
	
	i = 0;
	ft_sort_int_tab(tab, N);
	while (i < N)
	printf("%d ", tab[i++]);
	printf("\n");
	return (0);
}
*/

void	ft_sort_int_tab(int	*tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				ft_swap(&tab[j], &tab[j + 1]);
			}
			j++;
		}
		i++;
	}
}

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
