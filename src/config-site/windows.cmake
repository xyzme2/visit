
IF (MSVC_VERSION)
  SET(ERRMSG "You have chosen a compiler version not currently supported.  You will need to build all dependent 3rd party libraries with this compiler, and provide the correct locations for them.")
  IF (NOT MSVC_VERSION LESS 1500)
      MESSAGE(SEND_ERROR "${ERRMSG}")
  ELSEIF (NOT MSVC_VERSION LESS 1400)
      SET(VISIT_MSVC_VERSION "MSVC80")
  ELSEIF (NOT MSVC_VERSION LESS 1310)
      SET(VISIT_MSVC_VERSION "MSVC71")
  ELSE (NOT MSVC_VERSION LESS 1500)
      MESSAGE(SEND_ERROR "${ERRMSG}")
  ENDIF (NOT MSVC_VERSION LESS 1500)
ELSE (MSVC_VERSION)
  # For some reason, cmake doesnt' set MSVC_VERSION when .Net2003 compiler
  # is chosen. Check a different flag.
  IF (MSVC71)
    SET(VISIT_MSVC_VERSION "MSVC71")
  ELSE (MSVC71)
    MESSAGE(SEND_ERROR "${ERRMSG}")
  ENDIF (MSVC71)
ENDIF(MSVC_VERSION)


SET(VISIT_WINDOWS_DIR ${VISIT_SOURCE_DIR}/../windowsbuild)
SET(VISITHOME ${VISIT_WINDOWS_DIR}/ThirdParty)


VISIT_OPTION_DEFAULT(VISIT_MESA_DIR   ${VISITHOME}/Mesa)
VISIT_OPTION_DEFAULT(VISIT_VTK_DIR    ${VISITHOME}/vtk-5.0.0d/${VISIT_MSVC_VERSION}/lib/vtk-5.0)
VISIT_OPTION_DEFAULT(VISIT_QT_BIN     ${VISITHOME}/Qt/lib/${VISIT_MSVC_VERSION})
VISIT_OPTION_DEFAULT(QT_DIR     ${VISITHOME}/Qt)
SET(QT_QMAKE_EXECUTABLE     ${VISIT_QT_BIN}/qmake.exe)
VISIT_OPTION_DEFAULT(VISIT_PYTHON_DIR ${VISITHOME}/Python25/${VISIT_MSVC_VERSION})


VISIT_OPTION_DEFAULT(VISIT_BOXLIB2D_DIR ${VISITHOME}/boxlib)
VISIT_OPTION_DEFAULT(VISIT_BOXLIB3D_DIR ${VISITHOME}/boxlib)
VISIT_OPTION_DEFAULT(VISIT_CCMIO_DIR    ${VISITHOME}/ccmio)
VISIT_OPTION_DEFAULT(VISIT_CFITSIO_DIR  ${VISITHOME}/cfitsio)
VISIT_OPTION_DEFAULT(VISIT_CGNS_DIR     ${VISITHOME}/cgns)
VISIT_OPTION_DEFAULT(VISIT_EXODUSII_DIR ${VISITHOME}/exodus)
VISIT_OPTION_DEFAULT(VISIT_GDAL_DIR     ${VISITHOME}/gdal)
VISIT_OPTION_DEFAULT(VISIT_HDF4_DIR     ${VISITHOME}/hdf4)
VISIT_OPTION_DEFAULT(VISIT_HDF5_DIR     ${VISITHOME}/hdf5)
VISIT_OPTION_DEFAULT(VISIT_HDF5_LIBDEP  ${VISITHOME}/szip/lib/${VISIT_MSVC_VERSION} szlibdll)
VISIT_OPTION_DEFAULT(VISIT_H5PART_DIR   ${VISITHOME}/h5part)

#VISIT_OPTION_DEFAULT(VISIT_MILI_DIR     ${VISITHOME}/Mili)

VISIT_OPTION_DEFAULT(VISIT_NETCDF_DIR   ${VISITHOME}/netcdf)
VISIT_OPTION_DEFAULT(VISIT_SILO_DIR     ${VISITHOME}/silo)
VISIT_OPTION_DEFAULT(VISIT_SILO_LIBDEP  HDF5_LIBRARY_DIR hdf5dll ${VISIT_HDF5_LIBDEP})

