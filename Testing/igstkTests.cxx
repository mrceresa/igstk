/*=========================================================================

  Program:   Image Guided Surgery Software Toolkit
  Module:    igstkTests.cxx
  Language:  C++
  Date:      $Date$
  Version:   $Revision$

  Copyright (c) ISC  Insight Software Consortium.  All rights reserved.
  See IGSTKCopyright.txt or http://www.igstk.org/copyright.htm for details.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.  See the above copyright notices for more information.

=========================================================================*/

// this file defines the igstkTests for the test driver
// and all it expects is that you have a function called RegisterTests
#if defined(_MSC_VER)
#pragma warning ( disable : 4786 )
#endif
#include <iostream>
#include "igstkTestMain.h" 
#include "igstkSystemInformation.h"


void RegisterTests()
{
  REGISTER_TEST(igstkToolCalibrationReaderTest);
  REGISTER_TEST(igstkPivotCalibrationReaderTest);
  REGISTER_TEST(igstkMR3DImageToUS3DImageRegistrationTest);
  REGISTER_TEST(igstkUSImageObjectTest);
  REGISTER_TEST(igstkUSImageObjectRepresentationTest);
  REGISTER_TEST(igstkUSImageReaderTest);
  REGISTER_TEST(igstkToolCalibrationTest);
  REGISTER_TEST(igstkVesselObjectTest);

  REGISTER_TEST(igstkBasicTrackerTest);
  REGISTER_TEST(igstkBinaryDataTest);
  REGISTER_TEST(igstkCommunicationTest);
  REGISTER_TEST(igstkCTImageSpatialObjectTest);
  REGISTER_TEST(igstkImageReaderTest);
  REGISTER_TEST(igstkImageSpatialObjectTest);
  REGISTER_TEST(igstkLandmark3DRegistrationTest);
  REGISTER_TEST(igstkLandmark3DRegistrationTest2);
  REGISTER_TEST(igstkLandmark3DRegistrationErrorEstimatorTest);
  REGISTER_TEST(igstkMRImageSpatialObjectRepresentationTest);
  REGISTER_TEST(igstkMRImageSpatialObjectTest);
  REGISTER_TEST(igstkMultipleOutputTest);  
  REGISTER_TEST(igstkPivotCalibrationTest);
  REGISTER_TEST(igstkPrincipalAxisCalibrationTest);

  REGISTER_TEST(igstkObjectRepresentationRemovalTest);
  REGISTER_TEST(igstkTransductionMacroTest);

  REGISTER_TEST(igstkSpatialObjectTest);
  REGISTER_TEST(igstkSerialCommunicationTest);
  REGISTER_TEST(igstkStateMachineErrorsTest);
  REGISTER_TEST(igstkStateMachineTest);
  REGISTER_TEST(igstkStringEventTest);
  REGISTER_TEST(igstkTimeStampTest);
  REGISTER_TEST(igstkTokenTest);
  REGISTER_TEST(igstkTrackerTest);
  REGISTER_TEST(igstkTrackerToolTest);
  REGISTER_TEST(igstkTransformTest);  
  REGISTER_TEST(igstkVTKLoggerOutputTest);

  REGISTER_TEST(igstkTrackerToolReferenceTest);
  REGISTER_TEST(igstkTrackerToolReferenceAndImageTest);

  REGISTER_TEST(igstkSpatialObjectCoordinateSystemTest);
  REGISTER_TEST(igstkCoordinateSystemTest);
  REGISTER_TEST(igstkCoordinateSystemTest2);
  REGISTER_TEST(igstkCoordinateSystemTest3);
  REGISTER_TEST(igstkCoordinateSystemDelegatorTest);
  REGISTER_TEST(igstkCoordinateSystemEventTest);
  REGISTER_TEST(igstkSpatialObjectCoordinateSystemTest3);
 
  // Tests depend on device 
#ifdef IGSTK_TEST_AURORA_ATTACHED 
  REGISTER_TEST(igstkNDICommandInterpreterTest);
#elif defined IGSTK_TEST_POLARIS_ATTACHED 
  REGISTER_TEST(igstkNDICommandInterpreterTest);
#endif

#ifdef IGSTK_TEST_AURORA_ATTACHED
  REGISTER_TEST(igstkAuroraTrackerTest);
  REGISTER_TEST(igstkAuroraTrackerTest2);
  REGISTER_TEST(igstkAuroraTrackerToolTest);
#endif

#ifdef IGSTK_TEST_POLARIS_ATTACHED
  REGISTER_TEST(igstkPolarisTrackerTest);
  REGISTER_TEST(igstkPolarisTrackerTest2);
  REGISTER_TEST(igstkPolarisTrackerTest3);
  REGISTER_TEST(igstkPolarisTrackerTest4);
  REGISTER_TEST(igstkPolarisTrackerToolTest);
#endif

#ifdef IGSTK_USE_MicronTracker
  REGISTER_TEST(igstkMicronTrackerTest);
  REGISTER_TEST(igstkMicronTrackerToolTest);
#endif

  // Tests depend on data
#ifdef IGSTK_DATA_ROOT
  REGISTER_TEST(igstkAuroraTrackerSimulatedTest);
  REGISTER_TEST(igstkCTImageReaderTest);
  REGISTER_TEST(igstkCTImageSpatialObjectRepresentationTest);
  REGISTER_TEST(igstkDICOMImageReaderErrorsTest);
  REGISTER_TEST(igstkDICOMImageReaderTest);
  REGISTER_TEST(igstkMeshReaderTest);
  REGISTER_TEST(igstkMRImageReaderTest);
  REGISTER_TEST(igstkNDICommandInterpreterSimulatedTest);
  REGISTER_TEST(igstkNDICommandInterpreterStressTest);
  REGISTER_TEST(igstkPolarisTrackerSimulatedTest);
  REGISTER_TEST(igstkSerialCommunicationSimulatorTest);
  REGISTER_TEST(igstkSpatialObjectReaderTest);
  REGISTER_TEST(igstkTubeReaderTest);
#endif 

  // Tests depend on FLTK
#ifdef IGSTK_USE_FLTK
  REGISTER_TEST(igstkAxesObjectTest);
  REGISTER_TEST(igstkBoxObjectTest);
  REGISTER_TEST(igstkConeObjectTest);
  REGISTER_TEST(igstkCylinderObjectTest);
  REGISTER_TEST(igstkEllipsoidObjectTest);
  REGISTER_TEST(igstkFLTKTextBufferLogOutputTest);
  REGISTER_TEST(igstkFLTKTextLogOutputTest);
  REGISTER_TEST(igstkMeshObjectTest);
  REGISTER_TEST(igstkPulseGeneratorTest);
  REGISTER_TEST(igstkTubeObjectTest);
  REGISTER_TEST(igstkMouseTrackerTest);
  REGISTER_TEST(igstkViewTest);
  REGISTER_TEST(igstkViewRefreshRateTest);
  REGISTER_TEST(igstkUltrasoundProbeObjectTest);
  REGISTER_TEST(igstkSpatialObjectRepresentationVisibilityTest);
  REGISTER_TEST(igstkFLTKWidgetTest);
  REGISTER_TEST(igstkFLTKWidgetTest2);
  REGISTER_TEST(igstkMouseTrackerToolTest);
  REGISTER_TEST(igstkCircularSimulatedTrackerTest);
  REGISTER_TEST(igstkCoordinateSystemObjectWithViewTest);

#ifdef IGSTK_DATA_ROOT
  REGISTER_TEST(igstkAnnotation2DTest);
  REGISTER_TEST(igstkAnnotation2DTest2);
  REGISTER_TEST(igstkImageSpatialObjectRepresentationTest2);
  REGISTER_TEST(igstkImageSpatialObjectRepresentationTest3);
  REGISTER_TEST(igstkVascularNetworkReaderTest);
  REGISTER_TEST(igstkCTImageSpatialObjectReadingAndRepresentationTest);
  REGISTER_TEST(igstkCTImageSpatialObjectReadingAndRepresentationTest2);
  REGISTER_TEST(igstkCTImageSpatialObjectRepresentationWindowLevelTest);
  REGISTER_TEST(igstkImageSpatialObjectRepresentationTest);
  REGISTER_TEST(igstkUltrasoundImageSimulatorTest);
#endif 
#endif
  // Tests depend on Qt
#ifdef IGSTK_USE_Qt
  REGISTER_TEST(igstkQTWidgetTest);
  REGISTER_TEST(igstkQTWidgetTest2);
  REGISTER_TEST(igstkCTImageSpatialObjectReadingAndRepresentationTest3);
#endif
 
  
}
