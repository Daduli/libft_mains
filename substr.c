/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   substr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 09:14:03 by tle               #+#    #+#             */
/*   Updated: 2021/03/27 15:34:00 by tle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_substr(char const *s, unsigned int start, size_t len);

int	main(void)
{
	char *s;

	s = ft_substr("tripouille", 100, 1);
	if (!strcmp(s, ""))
		printf("OK\n");
	else
		printf("KO\n");
	printf("%s\n", s);
	if (strlen(s) == 1)
		printf("OK\n");
	else
		printf("KO\n");
}
