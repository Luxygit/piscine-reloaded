/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dievarga <dievarga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 11:49:05 by dievarga          #+#    #+#             */
/*   Updated: 2025/09/30 11:04:33 by dievarga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	diff;

	while (*s1 != '\0' && *s2 != '\0')
	{
		diff = *s1 - *s2;
		if (diff == 0)
		{
			s1++;
			s2++;
		}
		else
		{
			return (*s1 - *s2);
		}
	}
	return (*s1 - *s2);
}
/*
#include <stdio.h>
int	main(int argc, char* argv[])
{
	if (argc == 3)
		printf("%d\n", ft_strcmp(argv[1], argv[2]));
}
*/
