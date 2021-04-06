/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 09:46:09 by tle               #+#    #+#             */
/*   Updated: 2021/03/23 11:42:37 by tle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	ft_bzero(void *s, int n);

int	main(void)
{
	int src[] = { 12, 5, 87 };
	int str[] = { 1, 2, 3 };
	int i;

	i = 0;
	bzero(src, 5);
	while (i < 3)
	{
		printf("%d\n", src[i]);
		i++;
	}
	i = 0;
	ft_bzero(str, 5);
	while (i < 3)
	{
		printf("%d\n", str[i]);
		i++;
	}
}
