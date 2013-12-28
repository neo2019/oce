// Created by: Peter KURNEV
// Copyright (c) 1999-2014 OPEN CASCADE SAS
//
// This file is part of Open CASCADE Technology software library.
//
// This library is free software; you can redistribute it and / or modify it
// under the terms of the GNU Lesser General Public version 2.1 as published
// by the Free Software Foundation, with special exception defined in the file
// OCCT_LGPL_EXCEPTION.txt. Consult the file LICENSE_LGPL_21.txt included in OCCT
// distribution for complete text of the license and disclaimer of any warranty.
//
// Alternatively, this file may be used under the terms of Open CASCADE
// commercial license or contractual agreement.

#ifndef BOPDS_MapOfPassKeyBoolean_HeaderFile
#define BOPDS_MapOfPassKeyBoolean_HeaderFile

#define _NCollection_MapHasher
#include <NCollection_Map.hxx>   
#include <BOPDS_PassKeyMapHasher.hxx>
#include <BOPDS_PassKeyBoolean.hxx>

typedef NCollection_Map<BOPDS_PassKeyBoolean, BOPDS_PassKeyMapHasher> BOPDS_MapOfPassKeyBoolean; 
typedef BOPDS_MapOfPassKeyBoolean::Iterator BOPDS_MapIteratorMapOfPassKeyBoolean;  

#undef _NCollection_MapHasher

#endif
