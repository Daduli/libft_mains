/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strtrim.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 10:53:03 by tle               #+#    #+#             */
/*   Updated: 2021/03/27 17:11:54 by tle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strtrim(char const *s1, char const *set);

int	main(void)
{
	char *s = ft_strtrim("tripouille   xxx", " x");

	printf("%lu\n", strlen(s));
	printf("%lu\n", strlen("tripouille") + 1);
}
