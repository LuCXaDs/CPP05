/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luserbu <luserbu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 12:16:49 by luserbu           #+#    #+#             */
/*   Updated: 2023/03/07 17:23:10 by luserbu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"

class Bureaucrat;

class ShrubberyCreationForm {

	public:

		ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string name, const int gradeSign, const int gradeExe);
		ShrubberyCreationForm(ShrubberyCreationForm const & src);
		
		~ShrubberyCreationForm(void);

		ShrubberyCreationForm & operator=(ShrubberyCreationForm const & rhs);

		std::string		getName(void) const;
		std::string		getSign(void) const;
		bool			getShrubberyCreationForm(void) const;
		int				beSigned(Bureaucrat const & cravate);

	private:

		const std::string	_name;
		bool				_paper;
		const int			_gradeSign;
		const int			_gradeExe;
		
};

std::ostream    & operator<<(std::ostream & o, ShrubberyCreationForm const &rhs);

#endif