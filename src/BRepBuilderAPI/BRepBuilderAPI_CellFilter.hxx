// Created on: 2011-11-24
// Created by: ANNA MASALSKAYA
// Copyright (c) 2011-2014 OPEN CASCADE SAS
//
// This file is part of Open CASCADE Technology software library.
//
// This library is free software; you can redistribute it and/or modify it under
// the terms of the GNU Lesser General Public License version 2.1 as published
// by the Free Software Foundation, with special exception defined in the file
// OCCT_LGPL_EXCEPTION.txt. Consult the file LICENSE_LGPL_21.txt included in OCCT
// distribution for complete text of the license and disclaimer of any warranty.
//
// Alternatively, this file may be used under the terms of Open CASCADE
// commercial license or contractual agreement.

#ifndef _BRepBuilderAPI_CellFilter_HeaderFile
#define _BRepBuilderAPI_CellFilter_HeaderFile

#include <BRepBuilderAPI_VertexInspector.hxx>

typedef NCollection_CellFilter<BRepBuilderAPI_VertexInspector> BRepBuilderAPI_CellFilter;

#ifdef __BORLANDC__
  // definition of global functions is needed for map
  Standard_Integer HashCode (const NCollection_CellFilter<BRepBuilderAPI_VertexInspector>::Cell &aCell, const Standard_Integer theUpper)
  { return aCell.HashCode(theUpper); }
  Standard_Boolean IsEqual (const NCollection_CellFilter<BRepBuilderAPI_VertexInspector>::Cell &aCell1, const NCollection_CellFilter<BRepBuilderAPI_VertexInspector>::Cell &aCell2)
  { return aCell1.IsEqual(aCell2); }
#endif

#endif
