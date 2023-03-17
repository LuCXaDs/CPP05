/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luserbu <luserbu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 12:16:07 by luserbu           #+#    #+#             */
/*   Updated: 2023/03/15 17:30:31 by luserbu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

// ************************************************************************** */
// -------------------------------------------------------------------------- //
// --CANONIC FORM-/-CONSTRUCTOR-/-DESTRUCTOR--------------------------------- //
// -------------------------------------------------------------------------- //
// ************************************************************************** */


Form::Form(void) : _name("DEFAULT"), _gradeSign(150), _gradeExe(150) {

	this->_paper = false;
	std::cout << "Form default constructor called" << std::endl;
}

Form::Form(std::string name, int gradeSign, int gradeExe) : _name(name), _gradeSign(gradeSign), _gradeExe(gradeExe) {

	std::cout << "Form STRING constructor called" << std::endl;
	Bureaucrat coco;
	this->_paper = false;
	coco.CheckGrade(gradeSign);
	coco.CheckGrade(gradeExe);
}


Form::Form(Form const & src) : _gradeSign(150), _gradeExe(150) {

	this->_paper = false;
	std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Form::~Form(void) {

	std::cout << "Form destructor called" << std::endl;
}

Form & Form::operator=(Form const & rhs) {

	(void)rhs;
	std::cout << "Form copy assignement operator called" << std::endl;
	// if (this != &rhs)
	// 	;
	return (*this);
}


// ************************************************************************** */
// -------------------------------------------------------------------------- //
// -- MEMBERS FUNCTION------------------------------------------------------- //
// -------------------------------------------------------------------------- //
// ************************************************************************** */


int			Form::beSigned(Bureaucrat const & costard) {

	if (costard.getGrade() < (this->_gradeSign))
	{
		_paper = true;
		return (1);
	}
	return (0);
}

std::string			Form::getSign(void) const {

	if (this->_paper == true)
		return ("TRUE");
	else
		return ("FALSE");
}

std::string		Form::getName(void) const {

	return (this->_name);
}

bool		Form::getForm(void) const {

	return (this->_paper);
}



// ************************************************************************** */
// -------------------------------------------------------------------------- //
// --FUNCTIONS--------------------------------------------------------------- //
// -------------------------------------------------------------------------- //
// ************************************************************************** */


std::ostream    & operator<<(std::ostream & o, Form const &rhs) {

	std::cout << rhs.getName() << " has sign contrat : " << rhs.getSign() << std::endl;
    return (o);
}
