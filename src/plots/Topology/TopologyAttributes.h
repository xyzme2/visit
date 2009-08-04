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

#ifndef TOPOLOGYATTRIBUTES_H
#define TOPOLOGYATTRIBUTES_H
#include <AttributeSubject.h>
#include <ColorAttributeList.h>
#include <ColorAttribute.h>

// ****************************************************************************
// Class: TopologyAttributes
//
// Purpose:
//    This class contains the plot attributes for the topology plot
//
// Notes:      Autogenerated by xml2atts.
//
// Programmer: xml2atts
// Creation:   omitted
//
// Modifications:
//   
// ****************************************************************************

class TopologyAttributes : public AttributeSubject
{
public:
    TopologyAttributes();
    TopologyAttributes(const TopologyAttributes &obj);
    virtual ~TopologyAttributes();

    virtual TopologyAttributes& operator = (const TopologyAttributes &obj);
    virtual bool operator == (const TopologyAttributes &obj) const;
    virtual bool operator != (const TopologyAttributes &obj) const;

    virtual const std::string TypeName() const;
    virtual bool CopyAttributes(const AttributeGroup *);
    virtual AttributeSubject *CreateCompatible(const std::string &) const;
    virtual AttributeSubject *NewInstance(bool) const;

    // Property selection methods
    virtual void SelectAll();
    void SelectMultiColor();

    // Property setting methods
    void SetLineWidth(int lineWidth_);
    void SetLineStyle(int lineStyle_);
    void SetMultiColor(const ColorAttributeList &multiColor_);
    void SetMinOpacity(double minOpacity_);
    void SetMinPlateauOpacity(double minPlateauOpacity_);
    void SetMaxPlateauOpacity(double maxPlateauOpacity_);
    void SetMaxOpacity(double maxOpacity_);
    void SetTolerance(double tolerance_);
    void SetHitpercent(double hitpercent_);

    // Property getting methods
    int                      GetLineWidth() const;
    int                      GetLineStyle() const;
    const ColorAttributeList &GetMultiColor() const;
          ColorAttributeList &GetMultiColor();
    double                   GetMinOpacity() const;
    double                   GetMinPlateauOpacity() const;
    double                   GetMaxPlateauOpacity() const;
    double                   GetMaxOpacity() const;
    double                   GetTolerance() const;
    double                   GetHitpercent() const;

    // Persistence methods
    virtual bool CreateNode(DataNode *node, bool completeSave, bool forceAdd);
    virtual void SetFromNode(DataNode *node);


    // Keyframing methods
    virtual std::string               GetFieldName(int index) const;
    virtual AttributeGroup::FieldType GetFieldType(int index) const;
    virtual std::string               GetFieldTypeName(int index) const;
    virtual bool                      FieldsEqual(int index, const AttributeGroup *rhs) const;

    // User-defined methods
    bool ChangesRequireRecalculation(const TopologyAttributes &obj);

    // IDs that can be used to identify fields in case statements
    enum {
        ID_lineWidth = 0,
        ID_lineStyle,
        ID_multiColor,
        ID_minOpacity,
        ID_minPlateauOpacity,
        ID_maxPlateauOpacity,
        ID_maxOpacity,
        ID_tolerance,
        ID_hitpercent
    };

private:
    int                lineWidth;
    int                lineStyle;
    ColorAttributeList multiColor;
    double             minOpacity;
    double             minPlateauOpacity;
    double             maxPlateauOpacity;
    double             maxOpacity;
    double             tolerance;
    double             hitpercent;

    // Static class format string for type map.
    static const char *TypeMapFormatString;
};

#endif
