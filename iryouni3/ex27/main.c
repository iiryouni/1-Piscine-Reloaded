/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iryouni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 13:33:31 by iryouni           #+#    #+#             */
/*   Updated: 2016/11/09 14:54:44 by iryouni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (*str)
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	int		fd;
	int		oct;
	char	buf[4096];

	if (argc > 2)
		write(2, "Too many arguments.\n", 20);
	else if (argc == 1)
		write(2, "File name missing.\n", 19);
	else
	{
		fd = open(argv[1], O_RDONLY);
		oct = read(fd, buf, 4096);
		write(1, buf, oct);
		close(fd);
	}
	return (0);
}
