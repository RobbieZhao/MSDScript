//
//  API.hpp
//  arith2
//
//  Created by Zixuan Zhao on 4/7/20.
//  Copyright © 2020 Matthew Flatt. All rights reserved.
//

#ifndef API_hpp
#define API_hpp

#include <stdio.h>
#include <string>
#include <sstream>

std::string interp(std::istream& in);

std::string optimize(std::istream& in);

std::string step_interp(std::istream &in);



#endif /* API_hpp */
