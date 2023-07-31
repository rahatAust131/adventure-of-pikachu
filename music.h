#ifndef MUSIC_H_INCLUDED
#define MUSIC_H_INCLUDED

# include "buttonpage.h"

bool musicOn = true ; // for adding music

void bgMusic()   //for playing music
{
	if(musicOn)
		PlaySound("music\\centre.wav", NULL, SND_LOOP | SND_ASYNC);

}

#endif