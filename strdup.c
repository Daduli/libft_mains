/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 13:17:50 by tle               #+#    #+#             */
/*   Updated: 2021/03/25 13:33:51 by tle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strdup(const char *s1);

int	main(void)
{
	char	str[] = "Hello";
	char	*s1;
	char	*s2;

	s1 = strdup(str);
	printf("%s\n", s1);
	s2 = ft_strdup(str);
	printf("%s\n", s2);
	free(s1);
	free(s2);
}
