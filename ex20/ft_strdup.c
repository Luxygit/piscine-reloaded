/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dievarga <dievarga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 12:54:15 by dievarga          #+#    #+#             */
/*   Updated: 2025/09/29 20:25:35 by dievarga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*copy;
	char	*aux;
	int		len;

	len = 0;
	while (src[len])
		len++;
	copy = malloc(sizeof(char) * (len + 1));
	aux = copy;
	while (*src)
	{
		*aux = *src;
		aux++;
		src++;
	}
	*aux = '\0';
	return (copy);
}
/*
#include <stdio.h>
int	main(int argc, char* argv[])
{
	if (argc > 1)
	{
		printf("copied from %s to %s\n", argv[1], ft_strdup(argv[1]));
	}
}
*/
