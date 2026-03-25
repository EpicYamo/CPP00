/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaycan <aaycan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 09:50:48 by aaycan            #+#    #+#             */
/*   Updated: 2026/03/25 09:50:49 by aaycan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int argc, char **argv)
{
	int	i;
	int	j;

    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
		i = 1;
        while ((i < argc) && (argv[i] != NULL))
        {
            j = 0;
            while (argv[i][j])
            {
                std::cout << (char)std::toupper(argv[i][j]);
                j++;
            }
            i++;
        }
        std::cout << std::endl;
    }
    return (0);
}
