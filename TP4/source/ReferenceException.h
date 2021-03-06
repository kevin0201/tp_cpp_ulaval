/*
 * ReferenceException.h
 *
 *  Created on: 2016-04-15
 *      Author: etudiant
 */

#ifndef REFERENCEEXCEPTION_H_
#define REFERENCEEXCEPTION_H_
#include <stdexcept>

class ReferenceException : public std::runtime_error{
public:
	ReferenceException(const std::string& p_raison);
};

class ReferenceDejaPresenteException : public ReferenceException{
public:
	ReferenceDejaPresenteException(const std::string& p_raison);
};

class ReferenceAbsenteException : public ReferenceException{
public:
	ReferenceAbsenteException(const std::string& p_raison);
};


#endif /* REFERENCEEXCEPTION_H_ */
