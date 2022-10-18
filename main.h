#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdarg.h>
#include <unistd.h>

typedef struct fmt_spec FS;

/**
 * struct fmt_spec - A structure data type of fmt_spec
 * @type: Type of format specifier
 * @parser: A function to a pointer that takes a va_list and
 *
 * returns a string
 */

struct fmt_spec
{
	char type;
	char *(*parser)(va_list);
};

/* UTILS & HELPER FUNCTIONS */
unsigned int _strlen(char *);
void rev(char *);
void d_parser_h(int, int, char *);
void base_convert_h(int, char *, int, bool);
char *parse_string_h(va_list, bool);

/* PARSERS */
char *c_parser(va_list);
char *s_parser(va_list);
char *d_parser(va_list);
char *b_parser(va_list);
char *x_parser(va_list);
char *X_parser(va_list);
char *o_parser(va_list);
char *r_parser(va_list);
char *ROT3_parser(va_list);

/* DYNAMIC FS BUFFER FUNCTIONS */
bool fs_register(char);
void fs_buf_switcher(char, int, FS *);

/* STATIC FS BUFFER FUNCTIONS */
FS *gen_fs_buf(char *, int);
bool check_fmt_spec(char *, bool *, int *);
int num_of_vars(char *);
char *str_parser(char *, va_list, int *);
int _printf(char *, ...);

#endif /* MAIN_H */
