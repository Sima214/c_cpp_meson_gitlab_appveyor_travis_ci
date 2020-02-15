#include "Greeter.hpp"

#include <cstddef>
#include <string>

namespace example {

std::string Greeter::getGreetings() {
  return "Hello " + this->who + "!";
}

}  // namespace example

const char* get_greet(const char* who) {
  if (who == nullptr) {
    return nullptr;
  }
  std::string      whopp     = std::string(who);
  example::Greeter greeter   = example::Greeter(whopp);
  std::string      greetings = greeter.getGreetings();
  return greetings.c_str();
}

const char* get_hello_world() {
  example::Greeter greeter;
  std::string      greetings = greeter.getGreetings();
  return greetings.c_str();
}