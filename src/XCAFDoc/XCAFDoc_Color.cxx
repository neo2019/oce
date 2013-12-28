// Created on: 2000-08-16
// Created by: data exchange team
// Copyright (c) 2000-2014 OPEN CASCADE SAS
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

#include <TDF_RelocationTable.hxx>
#include <XCAFDoc_Color.ixx>

//=======================================================================
//function : Constructor
//purpose  : 
//=======================================================================

XCAFDoc_Color::XCAFDoc_Color()
{
}

//=======================================================================
//function : GetID
//purpose  : 
//=======================================================================

const Standard_GUID& XCAFDoc_Color::GetID() 
{
  static Standard_GUID ColorID ("efd212f0-6dfd-11d4-b9c8-0060b0ee281b");
  return ColorID; 
}

//=======================================================================
//function : Set
//purpose  : 
//=======================================================================

 Handle(XCAFDoc_Color) XCAFDoc_Color::Set(const TDF_Label& L,
					  const Quantity_Color& C) 
{
  Handle(XCAFDoc_Color) A;
  if (!L.FindAttribute (XCAFDoc_Color::GetID(), A)) {
    A = new XCAFDoc_Color ();
    L.AddAttribute(A);
  }
  A->Set (C); 
  return A;
}

//=======================================================================
//function : Set
//purpose  : 
//=======================================================================

 Handle(XCAFDoc_Color) XCAFDoc_Color::Set(const TDF_Label& L,
					  const Quantity_NameOfColor C) 
{
  Handle(XCAFDoc_Color) A;
  if (!L.FindAttribute (XCAFDoc_Color::GetID(), A)) {
    A = new XCAFDoc_Color ();
    L.AddAttribute(A);
  }
  A->Set (C); 
  return A;
}

//=======================================================================
//function : Set
//purpose  : 
//=======================================================================

Handle(XCAFDoc_Color) XCAFDoc_Color::Set(const TDF_Label& L,
						     const Standard_Real R,
						     const Standard_Real G,
						     const Standard_Real B) 
{
  Handle(XCAFDoc_Color) A;
  if (!L.FindAttribute (XCAFDoc_Color::GetID(), A)) {
    A = new XCAFDoc_Color ();
    L.AddAttribute(A);
  }
  A->Set (R,G,B); 
  return A;
}

//=======================================================================
//function : Set
//purpose  : 
//=======================================================================

void XCAFDoc_Color::Set(const Quantity_Color& C) 
{
  Backup();
  myColor = C;
}

//=======================================================================
//function : Set
//purpose  : 
//=======================================================================

 void XCAFDoc_Color::Set(const Quantity_NameOfColor C) 
{
  Backup();
  myColor.SetValues(C);
}

//=======================================================================
//function : Set
//purpose  : 
//=======================================================================

 void XCAFDoc_Color::Set(const Standard_Real R,
			       const Standard_Real G,
			       const Standard_Real B) 
{
  Backup();
  myColor.SetValues(R,G,B, Quantity_TOC_RGB);
}

//=======================================================================
//function : GetColor
//purpose  : 
//=======================================================================

const Quantity_Color& XCAFDoc_Color::GetColor() const
{
  return myColor;
}

//=======================================================================
//function : GetNOC
//purpose  : 
//=======================================================================

 Quantity_NameOfColor XCAFDoc_Color::GetNOC() const
{
  return myColor.Name();
}

//=======================================================================
//function : GetRGB
//purpose  : 
//=======================================================================

 void XCAFDoc_Color::GetRGB(Standard_Real& R,
				  Standard_Real& G,
				  Standard_Real& B) const
{
  myColor.Values(R,G,B, Quantity_TOC_RGB);
}
//=======================================================================
//function : ID
//purpose  : 
//=======================================================================

const Standard_GUID& XCAFDoc_Color::ID() const
{
  return GetID();
}

//=======================================================================
//function : Restore
//purpose  : 
//=======================================================================

 void XCAFDoc_Color::Restore(const Handle(TDF_Attribute)& With) 
{
  myColor = Handle(XCAFDoc_Color)::DownCast(With)->GetColor();
}

//=======================================================================
//function : NewEmpty
//purpose  : 
//=======================================================================

 Handle(TDF_Attribute) XCAFDoc_Color::NewEmpty() const
{
  return new XCAFDoc_Color();
}

//=======================================================================
//function : Paste
//purpose  : 
//=======================================================================

 void XCAFDoc_Color::Paste(const Handle(TDF_Attribute)& Into,
				 const Handle(TDF_RelocationTable)& /* RT */) const
{
  Handle(XCAFDoc_Color)::DownCast(Into)->Set(myColor);
}

