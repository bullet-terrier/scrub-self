// contains all of the other definitions that we'll be using. (including the standards)
#include "gener_com.h"

#ifndef inline_comments
#define inline_comments

// handle splitting the filename, based on the language name, then see if the data will map out.
inline_comment get_comm( char *file_name, char *language_name )
{
    // return the inline comment type, as defined in gener_com.h
    FILE object_file = fopen(file_name,"r");
    inline_comment ret_data; // set up the ret_data to work-> I'll have to work with the other information.
    char *lang;
    char *comm;
    
}

#endif
