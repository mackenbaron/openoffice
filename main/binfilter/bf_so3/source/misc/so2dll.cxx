/**************************************************************
 * 
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 * 
 *   http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 * 
 *************************************************************/



#ifdef WIN

#ifndef _SVWIN_H
#include <svwin.h>
#endif

#ifndef _SYSDEP_HXX
#include <sysdep.hxx>
#endif

#endif

#ifdef WIN
// Statische DLL-Verwaltungs-Variablen
static HINSTANCE hDLLInst = 0;      // HANDLE der DLL

/***************************************************************************
|*    LibMain()
|*
|*    Beschreibung       Initialisierungsfunktion der DLL
***************************************************************************/
extern "C" int CALLBACK LibMain( HINSTANCE hDLL, WORD, WORD nHeap, LPSTR )
{
#ifndef WNT
	if ( nHeap )
		UnlockData( 0 );
#endif

	hDLLInst = hDLL;

	return TRUE;
}

/***************************************************************************
|*    WEP()
|*
|*    Beschreibung      DLL-Deinitialisierung
***************************************************************************/
extern "C" int CALLBACK WEP( int )
{
	return 1;
}

#endif

#ifdef WNT
void ResourceDummy (void )
{

}
#endif

#ifdef OS2

#ifndef _SVWIN_H
#include <svpm.h>
#endif

// Statische DLL-Verwaltungs-Variablen
static ULONG hDLLInst = 0;      // HANDLE der DLL


/***************************************************************************
|*    LibMain()
|*
|*    Beschreibung       Initialisierungsfunktion der DLL
***************************************************************************/
extern "C" int LibDummy()
{
	return TRUE;
}

/***************************************************************************
|*    WEP()
|*
|*    Beschreibung      DLL-Deinitialisierung
***************************************************************************/
extern "C" int WEPDummy( int )
{
	return 1;
}

#endif

