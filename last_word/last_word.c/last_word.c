/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarrero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 14:02:46 by rmarrero          #+#    #+#             */
/*   Updated: 2024/10/30 15:42:46 by rmarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
int ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}
int	main(int argc, char **argv)
{
	int i = 0;
	int len = ft_strlen(argv[1]) - 1;

	if (argc == 2)
	{
		if (argv[1][len])
		{
			while(argv[1][len] == ' ')
				len--;
			while(argv[1][len] && argv[1][len] != ' ')
				len--;
			len++;
			while(argv[1][len] && argv[1][len] != ' ')
			{
				write(1, &argv[1][len], 1);
				len++;
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}
