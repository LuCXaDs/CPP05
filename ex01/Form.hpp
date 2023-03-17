/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luserbu <luserbu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 12:16:49 by luserbu           #+#    #+#             */
/*   Updated: 2023/03/07 17:23:10 by luserbu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

	public:

		Form(void);
		Form(std::string name, const int gradeSign, const int gradeExe);
		Form(Form const & src);
		
		~Form(void);

		Form & operator=(Form const & rhs);

		// class GradeTooHighException : public std::exception
		// {
		// 	public:
		// 		virtual const char* what() const throw()
		// 		{ return ("Bureaucrat::GradeTooHighException"); }
		// };
		
		// class GradeTooLowException : public std::exception
		// {
		// 	public:
		// 		virtual const char* what() const throw()
		// 		{ return ("Bureaucrat::GradeTooLowException"); }
		// };

		std::string		getName(void) const;
		std::string		getSign(void) const;
		bool			getForm(void) const;
		int				beSigned(Bureaucrat const & cravate);

	private:

		const std::string	_name;
		bool				_paper;
		const int			_gradeSign;
		const int			_gradeExe;
		
};

std::ostream    & operator<<(std::ostream & o, Form const &rhs);

#endif