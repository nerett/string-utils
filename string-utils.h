#ifndef STRING-UTILS_H_INCLUDED
#define STRING-UTILS_H_INCLUDED

#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <math.h>


char* string_utils_strchr( char* input_string, int symbol );
int string_utils_strlen( char* input_string );
char* string_utils_strcpy( char * destptr, char * srcptr );
char* string_utils_strncpy( char* destptr, char * srcptr, int num );
char* string_utils_strcat( char * destptr, char * srcptr );
char* string_utils_fgets( char* input_string, int num, FILE* filestream );
int string_utils_puts( char* input_string );
char* string_utils_strdup( char* input_string );
int string_utils_getline( char* output_string, int string_size, char symbol );

static int plain_copy( char* destptr, char* srcptr, int startfrom, int endwhen );

#endif // STRING-UTILS_H_INCLUDED
