/*
    Copyright (C) 2002, 2003  E. M. Williams

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Lesser General Public
    License as published by the Free Software Foundation; either
    version 2.1 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public
    License along with this library; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA

    The full text of the GNU Lesser General Public License is
    contained in the files COPYING and LICENSE.

*/

#ifndef FUZZYVALUE
#define FUZZYVALUE

#include <vector>
#include <string>

#include "LinguisticDomain.hh"

class FuzzyValue
{
 public:
  FuzzyValue(LinguisticDomain*);
  void setCrispValue(long double);
  long double getCrispValue();
  void setSetMembership(long double, std::string);
  long double getSetMembership(std::string);
  void clear();
  long double AND(std::string, FuzzyValue*, std::string);
  void OR_setSetMembership(long double, std::string);

 protected:
  LinguisticDomain* linguistic_domain;
  std::vector<long double> values;
};

#endif
