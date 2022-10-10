/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caeduard <caeduard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 18:00:25 by caeduard          #+#    #+#             */
/*   Updated: 2022/10/10 10:44:20 by caeduard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
    int i;
    int j;

    i = 0;
    if (ac == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    }
    else
    {
        while (++i < ac)
        {
            j = -1;
            while (av[i][++j])
            {
                av[i][j] = toupper(av[i][j]);
            }
            std::cout << av[i];
        }
    }
    std::cout << std::endl;
    return (0);
}