/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarrero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 20:42:13 by rmarrero          #+#    #+#             */
/*   Updated: 2024/10/29 21:31:56 by rmarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int i = 0;
	int j = 1;
	char p;


	if (argc == 3)
	{
		while (argv[1][i])
		{
			p = argv[1][i];
			j = i + 1;	
			while (argv[1][j])
			{
				if (p == argv[1][j])
					argv[1][j] = 64;
				j++;
			}
			i++;
		}
		i = 0;
		while (argv[1][i])
		{
			p = argv[1][i];
			while (argv[2][j])
			{
				if (argv[1][i] == argv[2][j])
					argv[1][i] = 64;
				j++;
			}
			i++;
		}
		i = 0;
		while (argv[1][i])
		{
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	else
		write(1, "\n", 1);
	
	printf("%s", argv[1]);
	return (0);
}
