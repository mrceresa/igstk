/*=========================================================================

  Program:   Image Guided Surgery Software Toolkit
  Module:    igstkCommunicationTest.cxx
  Language:  C++
  Date:      $Date$
  Version:   $Revision$

  Copyright (c) ISIS Georgetown University. All rights reserved.
  See IGSTKCopyright.txt or http://www.igstk.org/HTML/Copyright.htm for details.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.  See the above copyright notices for more information.

=========================================================================*/

#if defined(_MSC_VER)
   //Warning about: identifier was truncated to '255' characters in the debug information (MVC6.0 Debug)
#pragma warning( disable : 4786 )
#endif

#include <iostream>

#include "igstkCommunication.h"

int igstkCommunicationTest( int, char * [] )
{
    typedef igstk::Communication  CommunicationType;
    
    CommunicationType::Pointer communicator = CommunicationType::New();

    communicator->OpenCommunication("Test");

    communicator->CloseCommunication();

    return EXIT_SUCCESS;
}

