/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 18:27:11 by codespace         #+#    #+#             */
/*   Updated: 2026/01/06 22:17:03 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_char_is_alpha(char c);
int		char_is_space_or_sym(char c);
void	ft_convert_case(char *c, char letter);
char	*ft_strcapitalize(char *str);

/*
int	main(void)
{
	char	str[70] = "salut, comMent tu vas? 42mots Quarante-deux; cinquante+et+un";
	
	ft_strcapitalize(str);
	printf("%s\n", str);
	return (0);
}
*/

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_char_is_alpha(str[i]) || (str[i] >= '0' && str[i] <= '9'))
			ft_convert_case(&str[i++], 'u');
		while (!char_is_space_or_sym(str[i]) && str[i] != '\0')
			ft_convert_case(&str[i++], 'l');
		i++;
	}
	return (str);
}

int	ft_char_is_alpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

int	char_is_space_or_sym(char c)
{
	if (c != ' ' && !((c >= 33 && c <= 47) || (c >= 58 && c <= 64)))
		return (0);
	return (1);
}

void	ft_convert_case(char *c, char letter)
{
	if (*c >= 'a' && *c <= 'z' && letter == 'u')
		*c -= 32;
	if (*c >= 'A' && *c <= 'Z' && letter == 'l')
		*c += 32;
}
