/*****************************************************************************
*
* Copyright (c) 2000 - 2009, Lawrence Livermore National Security, LLC
* Produced at the Lawrence Livermore National Laboratory
* LLNL-CODE-400124
* All rights reserved.
*
* This file is  part of VisIt. For  details, see https://visit.llnl.gov/.  The
* full copyright notice is contained in the file COPYRIGHT located at the root
* of the VisIt distribution or at http://www.llnl.gov/visit/copyright.html.
*
* Redistribution  and  use  in  source  and  binary  forms,  with  or  without
* modification, are permitted provided that the following conditions are met:
*
*  - Redistributions of  source code must  retain the above  copyright notice,
*    this list of conditions and the disclaimer below.
*  - Redistributions in binary form must reproduce the above copyright notice,
*    this  list of  conditions  and  the  disclaimer (as noted below)  in  the
*    documentation and/or other materials provided with the distribution.
*  - Neither the name of  the LLNS/LLNL nor the names of  its contributors may
*    be used to endorse or promote products derived from this software without
*    specific prior written permission.
*
* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT  HOLDERS AND CONTRIBUTORS "AS IS"
* AND ANY EXPRESS OR  IMPLIED WARRANTIES, INCLUDING,  BUT NOT  LIMITED TO, THE
* IMPLIED WARRANTIES OF MERCHANTABILITY AND  FITNESS FOR A PARTICULAR  PURPOSE
* ARE  DISCLAIMED. IN  NO EVENT  SHALL LAWRENCE  LIVERMORE NATIONAL  SECURITY,
* LLC, THE  U.S.  DEPARTMENT OF  ENERGY  OR  CONTRIBUTORS BE  LIABLE  FOR  ANY
* DIRECT,  INDIRECT,   INCIDENTAL,   SPECIAL,   EXEMPLARY,  OR   CONSEQUENTIAL
* DAMAGES (INCLUDING, BUT NOT  LIMITED TO, PROCUREMENT OF  SUBSTITUTE GOODS OR
* SERVICES; LOSS OF  USE, DATA, OR PROFITS; OR  BUSINESS INTERRUPTION) HOWEVER
* CAUSED  AND  ON  ANY  THEORY  OF  LIABILITY,  WHETHER  IN  CONTRACT,  STRICT
* LIABILITY, OR TORT  (INCLUDING NEGLIGENCE OR OTHERWISE)  ARISING IN ANY  WAY
* OUT OF THE  USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH
* DAMAGE.
*
*****************************************************************************/


// ************************************************************************* //
//                            avtMFIXFileFormat.h                            //
// ************************************************************************* //

#ifndef AVT_MFIX_FILE_FORMAT_H
#define AVT_MFIX_FILE_FORMAT_H

#include <avtMTMDFileFormat.h>

#include <vectortypes.h>

class DBOptionsAttributes;
class vtkMFIXReader;
class vtkUnstructuredGrid;

// ****************************************************************************
//  Class: avtMFIXFileFormat
//
//  Purpose:
//      Reads in MFIX files as a plugin to VisIt.
//
//  Programmer: bdotson -- generated by xml2avt
//  Creation:   Fri May 26 08:59:22 PDT 2006
//
//  Modifications:
//    Jeremy Meredith, Thu Aug  7 15:46:38 EDT 2008
//    Use a C++ string for Version so comparisons are easier.
//
//    Kathleen Bonnell, Wed Oct 22 17:11:07 PDT 2008
//    Reworked to use vtkMFIXReader for bulk of work, and to have DBOptions.
//
// ****************************************************************************

class avtMFIXFileFormat : public avtMTMDFileFormat
{
  public:
                       avtMFIXFileFormat(const char *, DBOptionsAttributes *);
    virtual           ~avtMFIXFileFormat();

    virtual int            GetNTimesteps(void);

    virtual void           GetTimes(doubleVector &_times);

    virtual const char    *GetType(void)   { return "MFIX"; };
    virtual void           FreeUpResources(void); 

    virtual vtkDataSet    *GetMesh(int, int, const char *);
    virtual vtkDataArray  *GetVar(int, int, const char *);
    virtual vtkDataArray  *GetVectorVar(int, int, const char *);



  protected:

    virtual void PopulateDatabaseMetaData(avtDatabaseMetaData *, int);

  private:

    void                 ReadInData(void);
    void                 ReadInformation(void);
    void                 SetUpReader(void);

    char                 RestartFileName[256];
    doubleVector         times;
    stringVector         variables;
    bool                 readInData;
    bool                 readInformation;
    bool                 fileBigEndian;

    vtkMFIXReader *reader;
};


#endif
