/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 11:38:56 by tle               #+#    #+#             */
/*   Updated: 2021/03/30 12:05:45 by tle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char *ft_strchr(const char *s, int c);

int	main(void)
{
	char str[] = "tripouille";

	printf("%s\n", strchr(str, 't' + 256));
	printf("%s\n", ft_strchr(str, c));
}
