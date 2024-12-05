/******************************************************************************
 *                      Code generated with SymPy 1.13.3                      *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                      This file is part of 'ufuncify'                       *
 ******************************************************************************/
#include "wrapped_code_66.h"
#include <math.h>

double autofunc0(double x0, double c0, double eps) {

   double autofunc0_result;
   double d0 = x0 - c0;
   double r2 = (d0*d0);
   double r = sqrt(r2);
   autofunc0_result = ((1.0/4.0)*log(r)/pow(eps + 1, 2) - (1.0/4.0)/pow(eps + 1, 3))*pow(r2, eps + 1);
   return autofunc0_result;

}
