/*
===========================================================================
blockattack - Block Attack - Rise of the Blocks
Copyright (C) 2005-2012 Poul Sander

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see http://www.gnu.org/licenses/

Source information and contacts persons can be found at
http://blockattack.sf.net
===========================================================================
*/

#ifndef _GLOBAL_HPP
#define	_GLOBAL_HPP

#include "CppSdlImageHolder.hpp"
#include "Libs/NFont.h"
#include <memory>

void MainMenu();
void ResetFullscreen();

extern std::shared_ptr<CppSdl::CppSdlImageHolder>  menuMarked;
extern std::shared_ptr<CppSdl::CppSdlImageHolder>  menuUnmarked;
extern NFont nf_scoreboard_font;
extern bool MusicEnabled;			//true if background music is enabled
extern bool SoundEnabled;			//true if sound effects is enabled
extern bool bFullscreen;			//true if game is running fullscreen
extern char player1name[30];
extern char player2name[30];
extern SDL_Surface *screen;        //The whole screen;

#endif	/* _GLOBAL_HPP */

