#ifndef LOADING_H_INCLUDED
#define LOADING_H_INCLUDED

# include "buttonpage.h"
# include "frontpage.h"

int t1Index, count = 0 ;

void changeLoading()  //show progress 'loading' on the screen
{
    if(mode == -1)
    {
        a+=50 ;
        if(a>300)
        {
            iPauseTimer(t1Index);
        }
        count++ ;
    }
}



#endif
