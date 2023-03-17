/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luserbu <luserbu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 12:16:07 by luserbu           #+#    #+#             */
/*   Updated: 2023/03/17 14:01:29 by luserbu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


// ************************************************************************** */
// -------------------------------------------------------------------------- //
// --CANONIC FORM-/-CONSTRUCTOR-/-DESTRUCTOR--------------------------------- //
// -------------------------------------------------------------------------- //
// ************************************************************************** */


Bureaucrat::Bureaucrat(void) : _name("DEFAULT NAME"), _grade(150) {

	std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {

	std::cout << "Bureaucrat STRING constructor called" << std::endl;
	if (CheckGrade(grade))
		_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src) {

	std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Bureaucrat::~Bureaucrat(void) {

	std::cout << "Bureaucrat destructor called" << std::endl;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & rhs) {

	(void)rhs;
	std::cout << "Bureaucrat copy assignement operator called" << std::endl;
	// if (this != &rhs)
	// 	;
	return (*this);
}


// ************************************************************************** */
// -------------------------------------------------------------------------- //
// -- MEMBERS FUNCTION------------------------------------------------------- //
// -------------------------------------------------------------------------- //
// ************************************************************************** */


int		Bureaucrat::getGrade(void) const {

	return (this->_grade);
}

std::string		Bureaucrat::getName(void) const {

	return (this->_name);
}

bool		Bureaucrat::CheckGrade(int grade) {

	if (grade < 1)
	{
		throw (Bureaucrat::GradeTooLowException());
		return (false);
	}
	else if (grade > 150)
	{
		throw (Bureaucrat::GradeTooHighException());
		return (false);
	}
	else
		return (true);
	
}

void		Bureaucrat::incrementation(void) {

	this->_grade -= 1;
	if (CheckGrade(_grade))
		std::cout << "You have been GRADE at " << _grade << std::endl;
}

void		Bureaucrat::decrementation(void) {

	this->_grade += 1;
	if (CheckGrade(_grade))
		std::cout << "You have been DOWNGRADE at " << _grade << std::endl;
}

void		Bureaucrat::signForm(Form & form) {

	if (!form.beSigned(*this))
	{
		std::cout << _name << " couldn't sign " << form.getName() << " because " << "Form::GradeTooLowException" << std::endl;
		throw (Bureaucrat::GradeTooLowException());
	}
	else
		std::cout << _name << " signed " << form.getForm() << std::endl;
}


// ************************************************************************** */
// -------------------------------------------------------------------------- //
// --FUNCTIONS--------------------------------------------------------------- //
// -------------------------------------------------------------------------- //
// ************************************************************************** */


std::ostream    & operator<<(std::ostream & o, Bureaucrat const &rhs) {

	std::cout << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << std::endl;
    return (o);
}
