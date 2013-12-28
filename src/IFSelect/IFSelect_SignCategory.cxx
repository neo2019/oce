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

#include <IFSelect_SignCategory.ixx>
#include <Interface_Category.hxx>


static Standard_CString nulsign = "";


    IFSelect_SignCategory::IFSelect_SignCategory ()
    : IFSelect_Signature ("Category")
{
  Interface_Category::Init();  // si pas deja fait
  Standard_Integer i, nb = Interface_Category::NbCategories();
  for (i = 1; i <= nb; i ++)  AddCase (Interface_Category::Name(i));
}


    Standard_CString IFSelect_SignCategory::Value
  (const Handle(Standard_Transient)& ent,
   const Handle(Interface_InterfaceModel)& model) const
{
  if (ent.IsNull() || model.IsNull()) return nulsign;
  return Interface_Category::Name(model->CategoryNumber (model->Number(ent)));
}
