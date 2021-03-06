/*****************************************************************************

Project...........: uti.l
Filename..........: filename.c
Author............: K.P.
Creation Date.....: 03.12.90

Description.......: get filenamepart of a path

********************* ALL RIGHTS RESERVED BY MEN GMBH ************************

******************************************************************************
* ED | DATE     | CHANGES                                      		| EDITOR *
*----------------------------------------------------------------------------*
*              <<<--- OS-9/68000 V2.3 Release --->>>                         *
*----------------------------------------------------------------------------*
* 01 |03.12.90 | First Installation                           		| K.P.   *
******************************************************************************/

/*
 * filename() get the filename-part of path
 */
char *filename(path)
char *path;
{
	char *fn = path, *p = path;
	
	while(*p) {
		if(*p == '\\' || *p == '/')
			fn = p+1;
		p++;
	}
	return fn;
}			

