#include "string-utils.h"


int main()
{

    char tested_string1[50];
    char tested_string2[50];
    //char* ptr = NULL;
    scanf( "%s", tested_string1 );
    //ptr = string_utils_strchr(tested_string, 'x' );
    string_utils_strcpy( tested_string2, tested_string1 );

    printf( "next step\n" );
    printf( "\n\n" );
    //assert( ptr != NULL );
    printf( "%s", tested_string2 );


    return 0;
}
