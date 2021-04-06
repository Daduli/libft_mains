/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset_m.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 12:11:26 by tle               #+#    #+#             */
/*   Updated: 2021/03/23 09:50:42 by tle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void *ft_memset(void *str, int c, int len);

int	main(void)
{
	int str[] = { 10, 40, 78 };
	int src[] = { 1, 2, 3 }; 
	int i;

	i = 0;
	memset(str, 0, 3);
	while (i < 3)
	{
		printf("%d\n", str[i]);
		i++;
	}
	i = 0;
	ft_memset(src, 0, 3);
	while (i < 3)
	{
		printf("%d\n", src[i]);
		i++;
	}
}
