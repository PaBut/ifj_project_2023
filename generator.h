/**
 * Project: Implementation of imperative language compiler IFJ23
 * @file generator.h

 * @brief Generator definitions and header file for generator.c - generator of code

 * @author Juraj Remeň - xremen02
 * @author Maksym Podhornyi - xpodho08
 */

#include <stdio.h>
#include <stdbool.h>

#include "symtable.h"
#include "scanner.h"
#include "expression.h"

#ifndef GENERATOR_H
#define GENERATOR_H

#define GENERATE(...)             \
  do                              \
  {                               \
    fprintf(stdout, __VA_ARGS__); \
    fprintf(stdout, "\n");        \
  } while (0)

#define GENERATE_EMPTY_LINE() \
  do                          \
  {                           \
    fprintf(stdout, "\n");    \
  } while (0)

#define GENERATE_WITHOUT_NEW_LINE(...) \
  do                                   \
  {                                    \
    fprintf(stdout, __VA_ARGS__);      \
  } while (0)


//built-in function definitions
void generate_readString(void);
void generate_readInt(void);
void generate_readDouble(void);
void generate_Double2Int(void);
void generate_Int2Double(void);
void generate_length(void);
void generate_substring(void);
void generate_write(void);
void generate_ord(void);
void generate_chr(void);
void define_built_in_functions(void);

void generate_var_declaration(char *id);
void generate_var_definition(char *id, data_type type);
void generate_var_assignment(char *id);
void generate_read(char *id, data_type type);
void generate_write_var(char *id);
void gen_push(token_t *token);
void gen_term(token_t *token);
void gen_operation(rules rule);
void gen_int2double(void);
void gen_double2int(void);
void gen_concat(void);
void gen_call_start(void);
void add_param_to_call(char* param_name);
void gen_call_end(char* function_name);

void generate_header(void);

void generate_function_start(char* function_name);
void generate_function_return_param(data_type type);
void generate_function_end(void);
void generate_return(void);


#endif //GENERATOR_H
