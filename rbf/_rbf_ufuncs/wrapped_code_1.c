/******************************************************************************
 *                      Code generated with SymPy 1.13.3                      *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                      This file is part of 'ufuncify'                       *
 ******************************************************************************/
#include "wrapped_code_1.h"
#include <math.h>

double autofunc0(double x0, double x1, double c0, double c1, double eps) {

   double autofunc0_result;
   double d0 = x0 - c0;
   double d1 = x1 - c1;
   double r2 = (d0*d0) + (d1*d1);
   double r = sqrt(r2);
   if (r <= 0) {
      autofunc0_result = 0;
   }
   else {
      autofunc0_result = -(eps*eps*eps*eps*eps*eps*eps*eps)*(r2*r2*r2*r2)*log(eps*r);
   }
   return autofunc0_result;

}
