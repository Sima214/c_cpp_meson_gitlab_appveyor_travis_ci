#include "Greeter.hpp"

#include <cstddef>
#include <cstdlib>
#include <cstring>
#include <string>

namespace example {

std::string Greeter::getGreetings() {
  return "Hello " + this->who + "!";
}

}  // namespace example

char* get_greet(const char* who) {
  if (who == nullptr) {
    return nullptr;
  }
  std::string      whopp     = std::string(who);
  example::Greeter greeter   = example::Greeter(whopp);
  std::string      greetings = greeter.getGreetings();
  char*            ret       = (char*) malloc(greetings.length() + 1);
  strcpy(ret, greetings.c_str());
  return ret;
}

char* get_hello_world() {
  example::Greeter greeter;
  std::string      greetings = greeter.getGreetings();
  char*            ret       = (char*) malloc(greetings.length() + 1);
  strcpy(ret, greetings.c_str());
  return ret;
}