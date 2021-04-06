/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 15:23:42 by tle               #+#    #+#             */
/*   Updated: 2021/03/23 15:44:50 by tle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	ft_memchr(const void *s, int c, int n);

int	main(void)
{
	char str[] = "Hello! What's up?";
	char *c;

	printf("%s\n", memchr(str, 'e', 10));
	printf("%s\n", ft_memchr(str, 'e', 10));
}
