/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dievarga <dievarga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 11:49:05 by dievarga          #+#    #+#             */
/*   Updated: 2025/09/27 14:08:02 by dievarga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	diff;

	i = 0;
	diff = 0;
	while (s1[i] && s2[i])
	{
		diff = (s1[i] - s2[i]);
		i++;
	}
	return (diff);
}
/*
#include <stdio.h>
int	main(int argc, char* argv[])
{
	if (argc == 3)
		printf("%d\n", ft_strcmp(argv[1], argv[2]));
}
*/
