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

#ifndef _Graphic3d_CView_HeaderFile
#define _Graphic3d_CView_HeaderFile

#include <InterfaceGraphic_Graphic3d.hxx>
#include <InterfaceGraphic_Visual3d.hxx>
#include <Handle_Graphic3d_TextureEnv.hxx>
#include <Graphic3d_CLight.hxx>
#include <Graphic3d_SequenceOfHClipPlane.hxx>

class CALL_DEF_VIEWCONTEXT
{

public:

  CALL_DEF_VIEWCONTEXT()
  : Aliasing (0),
    BackZClipping  (0),
    FrontZClipping (0),
    DepthCueing (0),
    ZClipFrontPlane (0.0f),
    ZClipBackPlane  (0.0f),
    DepthFrontPlane (0.0f),
    DepthBackPlane  (0.0f),
    ZBufferActivity (0),
    Model (0),
    Visualization (0),
    NbActiveLight (0),
    ActiveLight (NULL),
    SurfaceDetail (0),
    ClipPlanes()
  {
    //
  }

public:

  int   Aliasing;

  int   BackZClipping;
  int   FrontZClipping;

  int   DepthCueing;

  float ZClipFrontPlane;
  float ZClipBackPlane;

  float DepthFrontPlane;
  float DepthBackPlane;

  int   ZBufferActivity;
  int   Model;
  int   Visualization;

  int   NbActiveLight;
  Graphic3d_CLight* ActiveLight;

  Handle(Graphic3d_TextureEnv) TextureEnv;
  int   SurfaceDetail;

  Graphic3d_SequenceOfHClipPlane ClipPlanes;
};

class Graphic3d_CView
{

public:

  Graphic3d_CView()
  : WsId (-1),
    ViewId (0),
    ptrView (NULL),
    IsDeleted (0),
    IsOpen (0),
    Active (0),
    ptrUnderLayer (NULL),
    ptrOverLayer  (NULL),
    Backfacing  (0),
	GContext (NULL),
    GDisplayCB  (NULL),
    GClientData (NULL),
    ptrFBO (NULL),
    WasRedrawnGL (0),
    IsRaytracing (0),
    IsShadowsEnabled (1),
    IsReflectionsEnabled (1),
    IsAntialiasingEnabled (0)
  {
    memset(&Orientation,0,sizeof(Orientation));
	memset(&Mapping,0,sizeof(Mapping));
	memset(&OrientationReset,0,sizeof(OrientationReset));
	memset(&MappingReset,0,sizeof(MappingReset));
	memset(&DefWindow,0,sizeof(DefWindow));
  }

public:

  int   WsId;
  int   ViewId;
  void* ptrView;

  int   IsDeleted;
  int   IsOpen;

  int   Active;

  CALL_DEF_VIEWORIENTATION Orientation;
  CALL_DEF_VIEWMAPPING     Mapping;

  CALL_DEF_VIEWORIENTATION OrientationReset;
  CALL_DEF_VIEWMAPPING     MappingReset;

  CALL_DEF_VIEWCONTEXT     Context;

  CALL_DEF_WINDOW          DefWindow;

  void* ptrUnderLayer;
  void* ptrOverLayer;

  int   Backfacing;

  Aspect_RenderingContext    GContext;
  Aspect_GraphicCallbackProc GDisplayCB;
  void* GClientData;

  void* ptrFBO;

  //! Was the window redrawn by standard OpenGL?
  mutable int WasRedrawnGL;

  //! Enables/disables OpenCL-based ray-tracing.
  int IsRaytracing;

  //! Enables/disables ray-traced sharp shadows.
  int IsShadowsEnabled;
  
  //! Enables/disables ray-traced reflections.
  int IsReflectionsEnabled;
  
  //! Enables/disables ray-traced adaptive anti-aliasing.
  int IsAntialiasingEnabled;

};

const Handle(Standard_Type)& TYPE(Graphic3d_CView);

#endif // Graphic3d_CView_HeaderFile
