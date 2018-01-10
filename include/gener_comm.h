#include <stdio.h>
#include <stdlib.h>

#ifndef general_comments
#define general_comments

const static char head_str = '[';
const static char head_trm = ']';
const static char splitter = ':';
const static char sequence = ',';

/* handle general information about comment characteristics.  */
/* should be adequate for handling the information that is shared. anything else I can think of should be added here. */
typedef struct inline_comments {
    char *language;
    char *com_char;
    int  *cln_space;
} inline_comment;


/* block comments will likely be a little bit easier */
typedef struct block_comments {
    char *language;
    char *opn_char;
    char *cls_char;
    int  *cln_space;
} block_comment;

typedef struct record_values {
    char *record_val;
    char split_recrd;
    // I think this might work well enough.    
} record_value;

record_value string_to_val( char *record_contents, int *record_length )
{
    // removing this from this file, moving it to the other header file.
    // I'm not sure that record_length is going to be necessary - I'll focus instead on splitting the record.
    char *rec_char = record_contents; // character pointer rec_char should point to record contents.
    char  raw_rec_char = *record_contents; // raw character raw_rec_char should actually contain a value 
    char *lang_name
}


int quick_comp(char *f1, char *f2)
{
    // unfortunately, this looks like this will be a slow algorithm, but we'll have to see.
    int a,b,c = 0,0,1; // I'm not overly confident that this will work in C.
    a = strlen(f1);
    b = strlen(f2);
    if (a==b)
    {
        int d = b;
        while(b>=0)
        {
            if(f1+b!=f2+b)
            {
                break;
            }
            b--;
            if(b<0){ c=0; }
        }
    }
    return c; // will return 1 if it is not equal - otherwise, will return 0.
}

// skip to the index within a file that contains the designated header.
// this is going to be a VERY rough function to try and speed through the INI files. 
int skip_to_section(FILE file_name, char* ini_header)
{
    int i = 0; // initialize the beginning index of the file.
    int j = 0; // last index - use this as a jumping off point.
    int k = 0; // final index - use this to remember where we left off.
    // maybe use strncmp to make sure that the string matches? or should I actually care?
    FILE *working_file = fopen(file_name,'r');
    char *cmpchr;
    fgets(cmpchr,0,1,working_file);
    while(cmpch!='\0')
    {
        // if the string matches the designated title - then i'll break. I'm not sure what the rules for strncmp are....
        
    }
}

#endif
