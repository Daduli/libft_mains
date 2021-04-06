/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 16:44:57 by tle               #+#    #+#             */
/*   Updated: 2021/03/26 15:41:01 by tle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strlcat(char *dst, const char *src, int dstsize);

int	main(void)
{
	char	dest[30];
	char	src[] = "AAAAAAAAA";

	memset(dest, 0, 30);
	dest[0] = 'B';

	printf("%lu\n", strlen(dest));
	printf("%d\n", ft_strlcat(dest, src, 6));
	printf("%lu\n", strlen(src));
}
