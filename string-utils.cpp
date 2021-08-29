#include "string-utils.h"


char* string_utils_strchr( char* input_string, int symbol )
{
    assert( input_string != NULL );
    assert( std::isfinite( symbol ) );


    char* desired_symbol_ptr = NULL;
    int i = 0;

    while( input_string[i] != '\0' )
    {
        if( input_string[i] == symbol )
        {
            desired_symbol_ptr = &input_string[i];

            assert( desired_symbol_ptr != NULL );
            return desired_symbol_ptr;
        }
        i++;
    }
    return NULL;
}



int string_utils_strlen( char* input_string )
{
    assert( input_string != NULL );


    int length = 0;

    while( input_string[length] != '\0' )
    {
        length++;
    }

    assert( std::isfinite( length ) );
    return length;
}



char* string_utils_strcpy( char* destptr, char* srcptr )
{
    assert( destptr != NULL );
    assert( srcptr != NULL );


    plain_copy( destptr, srcptr, 0, string_utils_strlen( srcptr ) + 1 );

    return destptr;
}

char* string_utils_strncpy( char* destptr, char * srcptr, int num )
{
    assert( destptr != NULL );
    assert( srcptr != NULL );
    assert( std::isfinite( num ) );


    int max_length = 0, string_length = string_utils_strlen( destptr );
    if( num > string_length )
    {
        max_length = string_length;
    }
    else
    {
        max_length = num;
    }

    int i = plain_copy( destptr, srcptr, 0, max_length );
    destptr[i+1] = '\0';

    return destptr;
}



char* strcat( char* destptr, char* srcptr )
{
    assert( destptr != NULL );
    assert( srcptr != NULL );


    plain_copy( destptr, srcptr, string_utils_strlen( destptr ), string_utils_strlen( srcptr ) );

    return destptr;
}



static int plain_copy( char* destptr, char* srcptr, int startfrom, int endwhen )
{
    assert( destptr != NULL );
    assert( srcptr != NULL );
    assert( std::isfinite( startfrom ) );

    for( startfrom; startfrom < endwhen; startfrom++ )
    {
        destptr[startfrom] = srcptr[startfrom];
    }

    return startfrom;
}



char* string_utils_fgets( char* input_string, int num, FILE* filestream )
{

}



