/**
 *
 * @file   enums.h
 * @Author Lavrentiy Ivanov (ookami@mail.ru)
 * @date   22.09.2014
 * @brief  Brief description of file.
 *
 * This file is part of OpenVSM.
 * OpenVSM is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * OpenVSM is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with OpenVSM.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef VSMAPI_ENUMS
#define VSMAPI_ENUMS
#include <vsm_api.h>

typedef enum LOGIC_TYPE
{
	TTL = 0,
	CMOS,
	I2L	
}LOGIC_TYPE;

typedef enum POPUPTYPES
{
	PWT_USER     = 0,
	PWT_DEBUG    = 1,
	PWT_STATUS   = 2,
	PWT_MEMORY   = 3,
	PWT_WATCH    = 5,
	PWT_SOURCE   = 4,
	PWT_VAR      = 6
} POPUPTYPES;

// Flags for creating pop-up windows. The bottom 20 bits are reserved for use by VSM,
// whilst the remaining top 12 bits are available for user pop-ups.
typedef enum POPUPFLAGS
{
	PWF_VISIBLE       = 0x00000001,
	PWF_SIZEABLE      = 0x00000002,
	PWF_LOCKPOSITION  = 0x00000004,
	PWF_HIDEONANIMATE = 0x00000008,
	PWF_AUTOREFRESH   = 0x00000010,
	PWF_WANTKEYBOARD  = 0x00000020,
	PWF_ACTIVE        = 0x00008000,
	PWF_INTERNAL      = 0x80000000
} POPUPFLAGS;

typedef enum ACTUATEFLAGS
{
	ACF_LEFT   =  0x00000001,
	ACF_RIGHT  =  0x00000002,
	ACF_MIDDLE =  0x00000004,
	ACF_INC    =  0x00010000,
	ACF_DEC    =  0x00020000,
	ACF_TOGGLE =  0x00040000
} ACTUATEFLAGS;

// Simulator Run Control Modes
typedef enum RUNMODES
{
	RM_BATCH=-1,
	RM_START,
	RM_STOP,
	RM_SUSPEND,
	RM_ANIMATE,
	RM_STEPTIME,
	RM_STEPOVER,
	RM_STEPINTO,
	RM_STEPOUT,
	RM_STEPTO,
	RM_META,
	RM_DUMP
} RUNMODES;

typedef enum SPICEMODES
{
	SPICETRAN=0x1,
	SPICEAC=0x2,
	SPICEDC=0x70,
	SPICEDCOP=0x10,
	SPICETRANOP=0x20,
	SPICEDCTRANCURVE=0x40,
	SPICEINITFLOAT=0x100,
	SPICEINITJCT=0x200,
	SPICEINITFIX=0x400,
	SPICEINITSMSIG=0x800,
	SPICEINITTRAN=0x1000,
	SPICEINITPRED=0x2000,
	SPICEUIC=0x10000l
} SPICEMODES;

typedef enum SPICEVARS
{
	SPICETIME,
	SPICEOMEGA,
	SPICEDELTA,
	SPICEGMIN,
	SPICEDELMIN,
	SPICEMINBREAK,
	SPICESRCFACT,
	SPICEFINALTIME,
	// Conv Tolerances?
} SPICEVARS;

typedef enum STATE
{
	UNDEFINED = 0,
	TSTATE    = 1,
	FSTATE    = -1,
	PLO = SS_POWER+SP_LOW,
	ILO = SS_INJECT+SP_LOW,  ///< I2L logic low
	SLO = SS_STRONG+SP_LOW,
	WLO = SS_WEAK+SP_LOW,
	FLT = SS_FLOAT+SP_FLOAT,
	WHI = SS_WEAK+SP_HIGH,   ///< I2L logic high
	SHI = SS_STRONG+SP_HIGH,
	IHI = SS_INJECT+SP_HIGH,
	PHI = SS_POWER+SP_HIGH,
	WUD = SS_WEAK+SP_UNDEFINED,
	SUD = SS_STRONG+SP_UNDEFINED
} STATE;

typedef enum ACTIVEDATATYPES
{
	ADT_VOID=-1,
	ADT_REAL,
	ADT_BOOLEAN,
	ADT_INTEGER,
	ADT_STATE,
	ADT_PINVOLTAGE,
	ADT_PINSTATE,
	ADT_WIREINFO,
	ADT_SPICEDATA,
	ADT_DSIMDATA,
	ADT_USER=100
} ACTIVEDATATYPES;

typedef enum DSIMMODES
{
	DSIMBOOT       = 0x01,
	DSIMSETTLE     = 0x02,
	DSIMNORMAL     = 0x04,
	DSIMEND        = 0x08
} DSIMMODES;

typedef enum DSIMVARS
{
	DSIMTIMENOW=-1,
	DSIMTDSCALE
} DSIMVARS;

typedef enum DATATYPES
{
	DT_VOID=-1, DT_STRING, DT_TEXT,  DT_BYTE, DT_WORD, DT_DWORD, DT_QWORD, DT_IEEE_FLOAT, DT_IEEE_DOUBLE, DT_HTEC_FLOAT, DT_MCHP_FLOAT, DT_BIGENDIAN=0x8000
} DATATYPES;

typedef enum DISPFORMATS
{
	DF_VOID=-1, DF_BINARY, DF_OCTAL, DF_HEXADECIMAL, DF_SIGNED, DF_UNSIGNED, DF_FLOAT, DF_TEXT
} DISPFORMATS;
#endif
