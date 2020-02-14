#ifndef TEMPLATE_GREETER_HPP
#define TEMPLATE_GREETER_HPP
/**
* @file
* @brief Says hello to someone of your choosing.
*/

#include <string>

namespace example {

const std::string WORLD = "World";

const std::string genGreetings(const std::string& who);

class Greeter {
 protected:
  /**
   * Who to greete.
   */
  const std::string& who;
  std::string greet;

 public:
  /**
  * Constructs a new Greeter who greets w.
  */
  Greeter(const std::string& w)
    : who(w) {
    greet = "Hello " + w + "!";
  };

  /**
  * Constructs a new Greeter who greets the world.
  */
  Greeter()
    : Greeter(WORLD){};

  /**
   * Generates the greetings.
   * 
   * @return the greetings.
   */
  std::string getGreetings();

  //virtual ~Greeter(){};
};

}  // namespace example

/**
 * Greeter interface for C. 
 * 
 * @param who Who to greet.
 * @return Greetings.
 */
extern "C" const char* get_greet(const char* who);

/**
 * Returns a hello world string.
 */
extern "C" const char* get_hello_world();

#endif /*TEMPLATE_GREETER_HPP*/