/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putchar_fd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 15:49:09 by tle               #+#    #+#             */
/*   Updated: 2021/03/25 15:58:47 by tle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>

void	ft_putchar_fd(char c, int fd);

int	main(int argc, char **argv)
{
	int fd;

	(void)argc;
	fd = open(argv[1], O_RDONLY);
	ft_putchar_fd('H', fd);
}
