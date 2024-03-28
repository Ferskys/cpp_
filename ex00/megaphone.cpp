/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuomins <fsuomins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 18:57:36 by fsuomins          #+#    #+#             */
/*   Updated: 2024/03/27 16:18:34 by fsuomins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>

static char static_toupper(char c)
{
    return std::toupper(static_cast<unsigned char>(c));
}

void print_uppercase_arguments(int argc, char **argv)
{
    for (int i = 1; i < argc; ++i) {
        for (char *p = argv[i]; *p != '\0'; ++p)
            std::cout << static_toupper(*p);
        if (i < argc - 1)
            std::cout << ' ';
    }
    std::cout << std::endl;
}

void valid_args(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "shhhhh... I think the students are asleep... *\n";
	else
		print_uppercase_arguments(argc, argv);
}
		
int	main(int argc, char **argv)
{
	valid_args(argc, argv);
	return (EXIT_SUCCESS);
}