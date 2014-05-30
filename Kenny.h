//
// Yleinen hederitiedosto.
//

#pragma once


#ifdef _MATIKKA
#include <math.h>
#endif  /* _MATIKKA */


#ifdef _VECTOR
#include <vector>
#endif  /* _VECTOR */

#ifndef STUDENT_H
#define STUDENT_H

struct Person
{
    std::string name;
	int phone;
};

#endif /* _STUDENT */


#include <iostream>
#include <iomanip>      // std::setprecision
#include <string>
#include "IOhandlerClass.h"
#include <new>  




// Namespaces -->
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;
using std::getline;

// Funktioiden prototyypit -->
