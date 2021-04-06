/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 10:14:29 by tle               #+#    #+#             */
/*   Updated: 2021/03/23 10:37:10 by tle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_memcpy(void *restrict dst, const void *restrict src, int n);

int	main(void)
{
	int i;
	int str[] = { 10, 20, 30 };
	int *dest = NULL;
	int src[] = { 1, 2, 3 };
	int *dst = NULL;

	i = 0;
	dest = (int *)malloc(sizeof(int) * 3);
	memcpy(dest, str, 3);
	while (i < 3)
	{
		printf("%d\n", dest[i]);
		i++;
	}
	i = 0;
	dst = (int *)malloc(sizeof(int) * 3);
	ft_memcpy(dst, src, 5);
	while (i < 3)
	{
		printf("%d\n", dst[i]);
		i++;
	}
	free(dest);
	free(dst);
}
