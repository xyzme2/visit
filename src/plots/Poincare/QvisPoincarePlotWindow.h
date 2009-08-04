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

#ifndef QVISPOINCAREPLOTWINDOW_H
#define QVISPOINCAREPLOTWINDOW_H

#include <QvisPostableWindowObserver.h>
#include <AttributeSubject.h>

class PoincareAttributes;
class QLabel;
class QCheckBox;
class QLineEdit;
class QSpinBox;
class QVBox;
class QButtonGroup;
class QvisColorTableButton;
class QvisOpacitySlider;
class QvisColorButton;
class QvisLineStyleWidget;
class QvisLineWidthWidget;
class QvisVariableButton;

// ****************************************************************************
// Class: QvisPoincarePlotWindow
//
// Purpose:
//    Defines QvisPoincarePlotWindow class.
//
// Notes:      Autogenerated by xml2window.
//
// Programmer: xml2window
// Creation:   omitted
//
// Modifications:
//   
// ****************************************************************************

class QvisPoincarePlotWindow : public QvisPostableWindowObserver
{
    Q_OBJECT
  public:
    QvisPoincarePlotWindow(const int type,
                         PoincareAttributes *subj,
                         const QString &caption = QString::null,
                         const QString &shortName = QString::null,
                         QvisNotepadArea *notepad = 0);
    virtual ~QvisPoincarePlotWindow();
    virtual void CreateWindowContents();
  public slots:
    virtual void apply();
    virtual void makeDefault();
    virtual void reset();
  protected:
    void UpdateWindow(bool doAll);
    void GetCurrentValues(int which_widget);
    void Apply(bool ignore = false);
  private slots:
    void sourceTypeChanged(int val);
    void maxStepLengthProcessText();
    void terminationProcessText();
    void pointSourceProcessText();
    void lineStartProcessText();
    void lineEndProcessText();
    void planeOriginProcessText();
    void planeNormalProcessText();
    void planeUpAxisProcessText();
    void planeRadiusProcessText();
    void pointDensityProcessText();
    void colorTableNameChanged(bool useDefault, const QString &ctName);
    void singleColorChanged(const QColor &color);
    void legendFlagChanged(bool val);
    void lightingFlagChanged(bool val);
    void relTolProcessText();
    void absTolProcessText();
    void terminationTypeChanged(int val);
    void integrationTypeChanged(int val);
    void showStreamlinesChanged(bool val);
    void showPointsChanged(bool val);
    void numberPlanesProcessText();
    void colorByChanged(int val);
    void maxToroidalWindingProcessText();
    void overrideToroidalWindingProcessText();
    void hitRateProcessText();
    void showCurvesChanged(int val);
    void adjustPlaneProcessText();
    void showIslandsChanged(bool val);
    void overlapsChanged(int val);
    void minProcessText();
    void maxProcessText();
    void minFlagChanged(bool val);
    void maxFlagChanged(bool val);
    void colorTypeChanged(int val);
  private:
    int plotType;
    QButtonGroup *sourceType;
    QLineEdit *maxStepLength;
    QLineEdit *termination;
    QLineEdit *pointSource;
    QLineEdit *lineStart;
    QLineEdit *lineEnd;
    QLineEdit *planeOrigin;
    QLineEdit *planeNormal;
    QLineEdit *planeUpAxis;
    QLineEdit *planeRadius;
    QLineEdit *pointDensity;
    QvisColorTableButton *colorTableName;
    QvisColorButton *singleColor;
    QCheckBox *legendFlag;
    QCheckBox *lightingFlag;
    QLineEdit *relTol;
    QLineEdit *absTol;
    QButtonGroup *terminationType;
    QButtonGroup *integrationType;
    QCheckBox *showStreamlines;
    QCheckBox *showPoints;
    QLineEdit *numberPlanes;
    QButtonGroup *colorBy;
    QLineEdit *maxToroidalWinding;
    QLineEdit *overrideToroidalWinding;
    QLineEdit *hitRate;
    QButtonGroup *showCurves;
    QLineEdit *adjustPlane;
    QCheckBox *showIslands;
    QButtonGroup *overlaps;
    QLineEdit *min;
    QLineEdit *max;
    QCheckBox *minFlag;
    QCheckBox *maxFlag;
    QButtonGroup *colorType;
    QLabel *sourceTypeLabel;
    QLabel *maxStepLengthLabel;
    QLabel *terminationLabel;
    QLabel *pointSourceLabel;
    QLabel *lineStartLabel;
    QLabel *lineEndLabel;
    QLabel *planeOriginLabel;
    QLabel *planeNormalLabel;
    QLabel *planeUpAxisLabel;
    QLabel *planeRadiusLabel;
    QLabel *pointDensityLabel;
    QLabel *colorTableNameLabel;
    QLabel *singleColorLabel;
    QLabel *relTolLabel;
    QLabel *absTolLabel;
    QLabel *terminationTypeLabel;
    QLabel *integrationTypeLabel;
    QLabel *numberPlanesLabel;
    QLabel *colorByLabel;
    QLabel *maxToroidalWindingLabel;
    QLabel *overrideToroidalWindingLabel;
    QLabel *hitRateLabel;
    QLabel *showCurvesLabel;
    QLabel *adjustPlaneLabel;
    QLabel *overlapsLabel;
    QLabel *minLabel;
    QLabel *maxLabel;
    QLabel *colorTypeLabel;

    PoincareAttributes *atts;
};



#endif
