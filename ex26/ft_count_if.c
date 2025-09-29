/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dievarga <dievarga@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 16:58:15 by dievarga          #+#    #+#             */
/*   Updated: 2025/09/29 18:19:36 by dievarga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char *))
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (tab[i])
	{
		if (f(tab[i]) == 1)
			count++;
		i++;
	}
	return (count);
}
/*
int	ft_containsonlya(char *c)
{
	int	i;

	i = 0;
	while (c[i])
	{	
		if (c[i] != 'a')
			return (0);
		i++;
	}
	return (1);
}
#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	char*	elements[] = {"ab", "ba","abb", "ccc", "aa", "a", NULL};
	
	printf("this is how many return 1: %d\n", ft_count_if(elements, ft_containsonlya));
}
*/
