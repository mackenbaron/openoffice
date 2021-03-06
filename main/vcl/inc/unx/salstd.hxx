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



#ifndef _SALSTD_HXX
#define _SALSTD_HXX

// -=-= includes -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
#include <tools/ref.hxx>
#include <tools/string.hxx>
#include <tools/gen.hxx>
#include <vcl/sv.h>

// -=-= X-Lib forwards -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
#ifndef _SVUNX_H
typedef unsigned long		Pixel;
typedef unsigned long		XID;
typedef unsigned long		XLIB_Time;
typedef unsigned long		XtIntervalId;

typedef	XID					Colormap;
typedef XID					Drawable;
typedef XID					Pixmap;
typedef XID					XLIB_Cursor;
typedef XID					XLIB_Font;
typedef XID					XLIB_Window;

typedef struct	_XDisplay	Display;
typedef struct	_XGC	   *GC;
typedef struct	_XImage		XImage;
typedef struct	_XRegion   *XLIB_Region;

typedef union	_XEvent		XEvent;

typedef struct 	_XConfigureEvent	XConfigureEvent;
typedef struct 	_XReparentEvent		XReparentEvent;
typedef struct 	_XClientMessageEvent		XClientMessageEvent;
typedef struct 	_XErrorEvent		XErrorEvent;

struct	Screen;
struct	Visual;
struct	XColormapEvent;
struct	XFocusChangeEvent;
struct	XFontStruct;
struct	XKeyEvent;
struct	XPropertyEvent;
struct	XTextItem;
struct	XWindowChanges;

#define None	0L
#endif

#endif

