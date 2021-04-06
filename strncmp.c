/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 12:31:30 by tle               #+#    #+#             */
/*   Updated: 2021/03/24 12:37:47 by tle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, int n);

int main(void)
{
	char str[] = "This is a testing sentence";
	char str2[] = "is something";

	printf("%d\n", strncmp(str, str2, 15));
	printf("%d\n", ft_strncmp(str, str2, 15));
}
