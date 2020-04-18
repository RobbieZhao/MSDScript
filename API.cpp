#include "API.hpp"
#include "Env.hpp"
#include "parse.hpp"
#include "expr.hpp"
#include "step.hpp"

std::string interp(std::istream& in) {
    return parse(in)->interp(Env::emptyenv)->to_string();
}

std::string optimize(std::istream& in) {
    return parse(in)->optimize()->to_string();
}

std::string step_interp(std::istream &in) {
    return Step::interp_by_steps(parse(in))->to_string();
}