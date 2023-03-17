/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luserbu <luserbu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:21:49 by luserbu           #+#    #+#             */
/*   Updated: 2023/03/15 20:56:35 by luserbu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"


int main(void) 
{
	std::cout << std::endl;
	std::cout << "----------------TEST----------------"<< std::endl;
	std::cout << std::endl;
	{
		try
		{
			Form form1("CACA", 150, 0);
		}
		catch(std::exception & e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	std::cout << "----------------TEST----------------"<< std::endl;
	std::cout << std::endl;
	{
		try
		{
			Form form1("CACA", 150, 151);
		}
		catch(std::exception & e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	std::cout << "----------------TEST----------------"<< std::endl;
	std::cout << std::endl;
	{
		try
		{
			Form form1("CACA", 150, 150);
		}
		catch(std::exception & e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	std::cout << "----------------TEST----------------"<< std::endl;
	std::cout << std::endl;
	{
		try
		{
			Form form1("LOL", 150, 150);
			Bureaucrat first("PABLO", 5);
			Bureaucrat second("GASPARD", 150);

			std::cout << first << std::endl;
			std::cout << second << std::endl;

			std::cout << std::endl;

			second.signForm(form1);
			first.signForm(form1);
			
		}
		catch(std::exception & e)
		{
			std::cout << e.what() << std::endl;
		}
	}
}