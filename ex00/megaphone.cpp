/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuomins <fsuomins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 18:57:36 by fsuomins          #+#    #+#             */
/*   Updated: 2023/11/10 09:52:05 by fsuomins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>

int	main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "shhhhh... I think the students are asleep... *";
	else {
		for (int i = 1; argv[i]; i++)
        {
			for (int j = 0; argv[i][j]; j++)
				std::cout << (char) toupper(argv[i][j]);
			if (i < argc - 1)
				std::cout << ' ';
		}
	}
	std::cout << std::endl;
	return (EXIT_SUCCESS);
}
