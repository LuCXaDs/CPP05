/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luserbu <luserbu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 12:16:49 by luserbu           #+#    #+#             */
/*   Updated: 2023/03/07 17:23:10 by luserbu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	public:

		Bureaucrat(void);
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const & src);
		
		~Bureaucrat(void);

		Bureaucrat & operator=(Bureaucrat const & rhs);
	
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{ return ("Bureaucrat::GradeTooHighException"); }
		};
		
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{ return ("Bureaucrat::GradeTooLowException"); }
		};

		std::string		getName(void) const;
		int				getGrade(void) const;
		bool			CheckGrade(int grade);

		void			incrementation(void);
		void			decrementation(void);

		void			signForm(Form & costard);

	private:

		const std::string	_name;
		int					_grade;
		
};

std::ostream    & operator<<(std::ostream & o, Bureaucrat const &rhs);


#endif