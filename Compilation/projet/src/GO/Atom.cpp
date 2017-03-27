/**
* @file Atom.cpp
* @author P. Sullivan, V. Sebastien
* @since 19/01/2017
* @brief implémentation des méthodes de la classe Atom
*
**/


#include "Atom.hpp"

Atom::Atom(std::string c, int a, ATOMETYPES t){
	code = c;
	action = a;
	type = t;
	setOperations(ATOM);
}

Atom::Atom(int c, int a, ATOMETYPES t){
	code = std::to_string(c);
	action = a;
	type = t;
	setOperations(ATOM);
}

std::string Atom::toString(int depth){
	std::string act = std::to_string(this->action);
	std::string term = this->type ? "TERMINAL" : "NON-TERMINAL";
	return "---> Atom : '" + this->code + "' ; " + act + " ; " + term;
}

ATOMETYPES Atom::donneType(){
	return this->type;
}

int Atom::donneAction(){
	this->action;
}

std::string Atom::donneCode(){
	return this->code;
}

