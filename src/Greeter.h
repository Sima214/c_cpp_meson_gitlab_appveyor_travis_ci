#ifndef TEMPLATE_GREETER
#define TEMPLATE_GREETER
/**
 * @file
 * @brief Constructs greet strings.
 */

/**
 * Greeter interface for C.
 *
 * @param who Who to greet.
 * @return Greetings.
 */
__attribute__((visibility("default"))) const char* get_greet(const char* who);

/**
 * Returns a hello world string.
 */
__attribute__((visibility("default"))) const char* get_hello_world();

#endif /*TEMPLATE_GREETER*/