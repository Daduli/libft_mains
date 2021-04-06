/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memccpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 11:22:14 by tle               #+#    #+#             */
/*   Updated: 2021/03/26 13:29:54 by tle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	ft_memccpy(void *dst, const void *src, int c, int n);

int	main(void)
{
	char	dest[100];
	char	check[100];
	
	memset(dest, 'A', 100);
	ft_memccpy(dest, "B", 0, 10);
	printf("%s\n", dest);
	memset(check, 'A', 100);
	if (memccpy(check, "B", 0, 10) == 0)
		printf("%s\n", check);
}
