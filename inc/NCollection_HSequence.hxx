// Created on: 2001-01-29
// Created by: Alexander GRIGORIEV
// Copyright (c) 2001-2014 OPEN CASCADE SAS
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

#ifndef NCollection_HSequence_HeaderFile
#define NCollection_HSequence_HeaderFile

#include <NCollection_DefineHSequence.hxx>
#include <NCollection_Sequence.hxx>

//      Declaration of Sequence class managed by Handle

#define NCOLLECTION_HSEQUENCE(HClassName,Type)                                 \
DEFINE_HSEQUENCE(HClassName,NCollection_Sequence<Type >)

#endif
