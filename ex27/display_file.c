/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dievarga <dievarga@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 18:41:41 by dievarga          #+#    #+#             */
/*   Updated: 2025/10/09 11:56:35 by dievarga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int	ft_print_error(const char *msg)
{
	int	i;

	i = 0;
	while (msg[i])
		i++;
	write(2, msg, i);
	return (1);
}

void	ft_display_file(int fd)
{
	char	buffer[4096];
	ssize_t	bytes_read;

	bytes_read = read(fd, buffer, 4096);
	while (bytes_read > 0)
	{
		write(1, buffer, bytes_read);
		bytes_read = read(fd, buffer, 4096);
	}
}

int	main(int argc, char *argv[])
{
	int		fd;	

	if (argc < 2)
		return (ft_print_error("File name missing.\n"));
	if (argc > 2)
		return (ft_print_error("Too many arguments.\n"));
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		return (ft_print_error("Cannot read file.\n"));
	ft_display_file(fd);
	close(fd);
	return (0);
}
