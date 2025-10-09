/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dievarga <dievarga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 17:51:16 by dievarga          #+#    #+#             */
/*   Updated: 2025/09/28 19:57:43 by dievarga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	len;
	int	*arr;
	int	i;

	if (min >= max)
		return (NULL);
	len = max - min;
	arr = malloc(sizeof(int) * len);
	if (!arr)
		return (NULL);
	i = 0;
	while (i < len)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}
/*
#include <stdio.h>
int	main(int argc, char *argv[])
{
	int	i;
	int	len;
	int*	out;

	i = 0;
	if (argc == 3)
	{
		out = ft_range(atoi(argv[1]), atoi(argv[2]));
		if (out == NULL)
			return (0);
		len = atoi(argv[2]) - atoi(argv[1]);
		while (i < len)
		{
			printf("%d\n", out[i]);
			i++;
		}
		//free(out);
	}
	return (0);
}
*/
