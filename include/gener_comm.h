#include <stdio.h>
#include <stdlib.h>

#ifndef general_comments
#define general_comments

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


#endif
