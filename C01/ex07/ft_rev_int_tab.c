/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 13:44:51 by codespace         #+#    #+#             */
/*   Updated: 2026/01/05 13:58:42 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#define N 6

void	ft_swap(int *a, int *b);
void	ft_rev_int_tab(int *tab, int size);

/*
int	main(void)
{
	int	tab[N] = {23, 63, 91, 72, 88, 13};
	int i;
	
	i = 0;
	ft_rev_int_tab(tab, N);
	while (i < N)
	printf("%d ", tab[i++]);
	return (0);
}
*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	j = size - 1;
	while (i < size / 2)
	{
		ft_swap(&tab[i], &tab[j]);
		i++;
		j--;
	}
}

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
