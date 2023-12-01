/**
 * Project: Implementation of imperative language compiler IFJ23
 * @file generator.h

 * @brief Generator definitions and header file for generator.c - generator of code

 * @author Juraj Remeň - xremen02
 */

#include <stdio.h>
#include <stdbool.h>

#ifndef GENERATOR_H
#define GENERATOR_H

#define GENERATE(...)             \
  do                              \
  {                               \
    fprintf(stdout, __VA_ARGS__); \
    fprintf(stdout, "\n");        \
  } while (0)

void generate_readString(void);
void generate_readInt(void);
void generate_readDouble(void);
void generate_write(void);
void generate_Int2Double(void);
void generate_Double2Int(void);
void generate_length(void);
void generate_substring(void);
void generate_ord(void);
void generate_chr(void);
void define_built_in_functions(void);

void generate_header(void);

#endif //GENERATOR_H
