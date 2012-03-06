/*****************************************************************************
*
* Copyright (c) 2000 - 2012, Lawrence Livermore National Security, LLC
* Produced at the Lawrence Livermore National Laboratory
* LLNL-CODE-442911
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

#ifndef QVIS_PYTHON_FILTER_EDITOR_H
#define QVIS_PYTHON_FILTER_EDITOR_H

#include <gui_exports.h>
#include <QWidget>

// Forward declarations
class QTextEdit;
class QSyntaxHighlighter;
class QPushButton;
class QMenu;

// ****************************************************************************
// Class: QvisPythonFilterEditor
//
// Purpose:
//   TODO
//
// Notes:
//
// Programmer: Cyrus Harrison
// Creation:   Thu Feb 11 09:31:58 PST 2010
//
// Modifications:
//
// ****************************************************************************

class GUI_API QvisPythonFilterEditor : public QWidget
{
    Q_OBJECT
public:
             QvisPythonFilterEditor(QWidget *parent= 0);
    virtual ~QvisPythonFilterEditor();

    QString getSource(bool escape=false);

    static QString templateDirectory();

signals:
    void     sourceTextChanged();
    void     templateSelected(const QString &tname);

public slots:
    void     setSource(const QString &py_script, bool escaped=false);
    void     saveScript(const QString &py_file);
    void     loadScript(const QString &py_file);


private slots:
    void     cmdSaveClick();
    void     loadMenuEvent(QAction *);

private:
    QTextEdit          *editor;
    QSyntaxHighlighter *highlighter;
    QPushButton        *cmdLoad;
    QMenu              *cmdLoadMenu;
    QPushButton        *cmdSave;

    QAction            *loadFile;
    QAction            *loadTempSimple;
    QAction            *loadTempAdv;
};

#endif

