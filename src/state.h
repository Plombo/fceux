/* FCE Ultra - NES/Famicom Emulator
 *
 * Copyright notice for this file:
 *  Copyright (C) 2002 Xodnizel
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

enum ENUM_SSLOADPARAMS
{
	SSLOADPARAM_NOBACKUP,
	SSLOADPARAM_BACKUP,
};

void FCEUSS_Save(const char *);
bool FCEUSS_Load(const char *);

 //zlib values: 0 (none) through 9 (max) or -1 (default)
bool FCEUSS_SaveMS(std::ostream* outstream, int compressionLevel);

bool FCEUSS_LoadFP(std::istream* is, ENUM_SSLOADPARAMS params);

extern int CurrentState;
void FCEUSS_CheckStates(void);

struct SFORMAT
{
	//a void* to the data or a void** to the data
	void *v;

	//size, plus flags
	uint32 s;

	//a string description of the element
	char *desc;
};

void ResetExState(void (*PreSave)(void),void (*PostSave)(void));
void AddExState(void *v, uint32 s, int type, char *desc);

//indicates that the value is a multibyte integer that needs to be put in the correct byte order
#define FCEUSTATE_RLSB            0x80000000

//void*v is actually a void** which will be indirected before reading
#define FCEUSTATE_INDIRECT            0x40000000

//all FCEUSTATE flags together so that we can mask them out and get the size
#define FCEUSTATE_FLAGS (FCEUSTATE_RLSB|FCEUSTATE_INDIRECT)

void FCEU_DrawSaveStates(uint8 *XBuf);

void BackupSaveState();				//Makes a backupsavestate