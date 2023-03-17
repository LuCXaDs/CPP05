/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luserbu <luserbu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 12:16:07 by luserbu           #+#    #+#             */
/*   Updated: 2023/03/15 17:30:31 by luserbu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

// ************************************************************************** */
// -------------------------------------------------------------------------- //
// --CANONIC Forme-/-CONSTRUCTOR-/-DESTRUCTOR-------------------------------- //
// -------------------------------------------------------------------------- //
// ************************************************************************** */


ShrubberyCreationForm::ShrubberyCreationForm(void) : _name("DEFAULT"), _gradeSign(150), _gradeExe(150) {

	this->_paper = false;
	std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string name, int gradeSign, int gradeExe) : _name(name), _gradeSign(gradeSign), _gradeExe(gradeExe) {

	std::cout << "ShrubberyCreationForm STRING constructor called" << std::endl;
	Bureaucrat coco;
	this->_paper = false;
	coco.CheckGrade(gradeSign);
	coco.CheckGrade(gradeExe);
}


ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) : _gradeSign(150), _gradeExe(150) {

	this->_paper = false;
	std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {

	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs) {

	(void)rhs;
	std::cout << "ShrubberyCreationForm copy assignement operator called" << std::endl;
	// if (this != &rhs)
	// 	;
	return (*this);
}


// ************************************************************************** */
// -------------------------------------------------------------------------- //
// -- MEMBERS FUNCTION------------------------------------------------------- //
// -------------------------------------------------------------------------- //
// ************************************************************************** */


int			ShrubberyCreationForm::beSigned(Bureaucrat const & costard) {

	if (costard.getGrade() < (this->_gradeSign))
	{
		_paper = true;
		return (1);
	}
	return (0);
}

std::string			ShrubberyCreationForm::getSign(void) const {

	if (this->_paper == true)
		return ("TRUE");
	else
		return ("FALSE");
}

std::string		ShrubberyCreationForm::getName(void) const {

	return (this->_name);
}

bool		ShrubberyCreationForm::getShrubberyCreationForm(void) const {

	return (this->_paper);
}



// ************************************************************************** */
// -------------------------------------------------------------------------- //
// --FUNCTIONS--------------------------------------------------------------- //
// -------------------------------------------------------------------------- //
// ************************************************************************** */


std::ostream    & operator<<(std::ostream & o, ShrubberyCreationForm const &rhs) {

	std::cout << rhs.getName() << " has sign contrat : " << rhs.getSign() << std::endl;
    return (o);
}
