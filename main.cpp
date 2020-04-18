//
//  main.cpp
//  arith2
//
//  Created by Zixuan Zhao on 2/26/20.
//  Copyright © 2020 Matthew Flatt. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include "parse.hpp"
#include <sstream>
#define CATCH_CONFIG_RUNNER
#include "catch.hpp"
#include "Env.hpp"
#include "expr.hpp"
#include "step.hpp"

int main(int argc, const char * argv[]) {
    
//    Catch::Session().run();
    
    std::cout << "> ";

    if (argc == 1) {
        std::cout << parse(std::cin)->interp(Env::emptyenv)->to_string() << std::endl;
    } else if (argc == 2) {
        std::string parameter(argv[1]);
        
        if (parameter == "--opt") {
            std::string optimized = parse(std::cin)->optimize()->to_string();
            std::cout << optimized << std::endl;
        } else if (parameter == "--step") {
            std::cout << Step::interp_by_steps(parse(std::cin))->to_string() << std::endl;
        } else {
            std::cerr << "Unknown parameter" << parameter << std::endl;
            exit(1);
        }
    }
    
    return 0;
}
