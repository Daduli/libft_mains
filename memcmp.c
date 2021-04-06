/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 16:04:12 by tle               #+#    #+#             */
/*   Updated: 2021/03/24 09:27:15 by tle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, int n);

int	main(void)
{
	int i;
	char s1[] = "Hello! What's up?";
	char s2[] = "Hello! What's up?";

	printf("%d\n", memcmp(s1, s2, 10));
	printf("%d\n", ft_memcmp(s1, s2, 10));
}
