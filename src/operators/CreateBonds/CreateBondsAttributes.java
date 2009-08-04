// ***************************************************************************
//
// Copyright (c) 2000 - 2009, Lawrence Livermore National Security, LLC
// Produced at the Lawrence Livermore National Laboratory
// LLNL-CODE-400124
// All rights reserved.
//
// This file is  part of VisIt. For  details, see https://visit.llnl.gov/.  The
// full copyright notice is contained in the file COPYRIGHT located at the root
// of the VisIt distribution or at http://www.llnl.gov/visit/copyright.html.
//
// Redistribution  and  use  in  source  and  binary  forms,  with  or  without
// modification, are permitted provided that the following conditions are met:
//
//  - Redistributions of  source code must  retain the above  copyright notice,
//    this list of conditions and the disclaimer below.
//  - Redistributions in binary form must reproduce the above copyright notice,
//    this  list of  conditions  and  the  disclaimer (as noted below)  in  the
//    documentation and/or other materials provided with the distribution.
//  - Neither the name of  the LLNS/LLNL nor the names of  its contributors may
//    be used to endorse or promote products derived from this software without
//    specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT  HOLDERS AND CONTRIBUTORS "AS IS"
// AND ANY EXPRESS OR  IMPLIED WARRANTIES, INCLUDING,  BUT NOT  LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND  FITNESS FOR A PARTICULAR  PURPOSE
// ARE  DISCLAIMED. IN  NO EVENT  SHALL LAWRENCE  LIVERMORE NATIONAL  SECURITY,
// LLC, THE  U.S.  DEPARTMENT OF  ENERGY  OR  CONTRIBUTORS BE  LIABLE  FOR  ANY
// DIRECT,  INDIRECT,   INCIDENTAL,   SPECIAL,   EXEMPLARY,  OR   CONSEQUENTIAL
// DAMAGES (INCLUDING, BUT NOT  LIMITED TO, PROCUREMENT OF  SUBSTITUTE GOODS OR
// SERVICES; LOSS OF  USE, DATA, OR PROFITS; OR  BUSINESS INTERRUPTION) HOWEVER
// CAUSED  AND  ON  ANY  THEORY  OF  LIABILITY,  WHETHER  IN  CONTRACT,  STRICT
// LIABILITY, OR TORT  (INCLUDING NEGLIGENCE OR OTHERWISE)  ARISING IN ANY  WAY
// OUT OF THE  USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH
// DAMAGE.
//
// ***************************************************************************

package llnl.visit.operators;

import llnl.visit.AttributeSubject;
import llnl.visit.CommunicationBuffer;
import llnl.visit.Plugin;
import java.lang.Integer;
import java.util.Vector;
import java.lang.Double;

// ****************************************************************************
// Class: CreateBondsAttributes
//
// Purpose:
//    Attributes for the CreateBondsOperator
//
// Notes:      Autogenerated by xml2java.
//
// Programmer: xml2java
// Creation:   omitted
//
// Modifications:
//   
// ****************************************************************************

public class CreateBondsAttributes extends AttributeSubject implements Plugin
{
    public CreateBondsAttributes()
    {
        super(6);

        elementVariable = new String("element");
        atomicNumber1 = new Vector();
        atomicNumber1.addElement(new Integer(0));
        atomicNumber1.addElement(new Integer(-1));
        atomicNumber2 = new Vector();
        atomicNumber2.addElement(new Integer(-1));
        atomicNumber2.addElement(new Integer(-1));
        minDist = new Vector();
        minDist.addElement(new Double(0.4));
        minDist.addElement(new Double(0.4));
        maxDist = new Vector();
        maxDist.addElement(new Double(1.2));
        maxDist.addElement(new Double(1.9));
        maxBondsClamp = 10;
    }

    public CreateBondsAttributes(CreateBondsAttributes obj)
    {
        super(6);

        int i;

        elementVariable = new String(obj.elementVariable);
        atomicNumber1 = new Vector();
        for(i = 0; i < obj.atomicNumber1.size(); ++i)
        {
            Integer iv = (Integer)obj.atomicNumber1.elementAt(i);
            atomicNumber1.addElement(new Integer(iv.intValue()));
        }
        atomicNumber2 = new Vector();
        for(i = 0; i < obj.atomicNumber2.size(); ++i)
        {
            Integer iv = (Integer)obj.atomicNumber2.elementAt(i);
            atomicNumber2.addElement(new Integer(iv.intValue()));
        }
        minDist = new Vector(obj.minDist.size());
        for(i = 0; i < obj.minDist.size(); ++i)
        {
            Double dv = (Double)obj.minDist.elementAt(i);
            minDist.addElement(new Double(dv.doubleValue()));
        }

        maxDist = new Vector(obj.maxDist.size());
        for(i = 0; i < obj.maxDist.size(); ++i)
        {
            Double dv = (Double)obj.maxDist.elementAt(i);
            maxDist.addElement(new Double(dv.doubleValue()));
        }

        maxBondsClamp = obj.maxBondsClamp;

        SelectAll();
    }

    public boolean equals(CreateBondsAttributes obj)
    {
        int i;

        // Compare the elements in the atomicNumber1 vector.
        boolean atomicNumber1_equal = (obj.atomicNumber1.size() == atomicNumber1.size());
        for(i = 0; (i < atomicNumber1.size()) && atomicNumber1_equal; ++i)
        {
            // Make references to Integer from Object.
            Integer atomicNumber11 = (Integer)atomicNumber1.elementAt(i);
            Integer atomicNumber12 = (Integer)obj.atomicNumber1.elementAt(i);
            atomicNumber1_equal = atomicNumber11.equals(atomicNumber12);
        }
        // Compare the elements in the atomicNumber2 vector.
        boolean atomicNumber2_equal = (obj.atomicNumber2.size() == atomicNumber2.size());
        for(i = 0; (i < atomicNumber2.size()) && atomicNumber2_equal; ++i)
        {
            // Make references to Integer from Object.
            Integer atomicNumber21 = (Integer)atomicNumber2.elementAt(i);
            Integer atomicNumber22 = (Integer)obj.atomicNumber2.elementAt(i);
            atomicNumber2_equal = atomicNumber21.equals(atomicNumber22);
        }
        // Compare the elements in the minDist vector.
        boolean minDist_equal = (obj.minDist.size() == minDist.size());
        for(i = 0; (i < minDist.size()) && minDist_equal; ++i)
        {
            // Make references to Double from Object.
            Double minDist1 = (Double)minDist.elementAt(i);
            Double minDist2 = (Double)obj.minDist.elementAt(i);
            minDist_equal = minDist1.equals(minDist2);
        }
        // Compare the elements in the maxDist vector.
        boolean maxDist_equal = (obj.maxDist.size() == maxDist.size());
        for(i = 0; (i < maxDist.size()) && maxDist_equal; ++i)
        {
            // Make references to Double from Object.
            Double maxDist1 = (Double)maxDist.elementAt(i);
            Double maxDist2 = (Double)obj.maxDist.elementAt(i);
            maxDist_equal = maxDist1.equals(maxDist2);
        }
        // Create the return value
        return ((elementVariable.equals(obj.elementVariable)) &&
                atomicNumber1_equal &&
                atomicNumber2_equal &&
                minDist_equal &&
                maxDist_equal &&
                (maxBondsClamp == obj.maxBondsClamp));
    }

    public String GetName() { return "CreateBonds"; }
    public String GetVersion() { return "1.0"; }

    // Property setting methods
    public void SetElementVariable(String elementVariable_)
    {
        elementVariable = elementVariable_;
        Select(0);
    }

    public void SetAtomicNumber1(Vector atomicNumber1_)
    {
        atomicNumber1 = atomicNumber1_;
        Select(1);
    }

    public void SetAtomicNumber2(Vector atomicNumber2_)
    {
        atomicNumber2 = atomicNumber2_;
        Select(2);
    }

    public void SetMinDist(Vector minDist_)
    {
        minDist = minDist_;
        Select(3);
    }

    public void SetMaxDist(Vector maxDist_)
    {
        maxDist = maxDist_;
        Select(4);
    }

    public void SetMaxBondsClamp(int maxBondsClamp_)
    {
        maxBondsClamp = maxBondsClamp_;
        Select(5);
    }

    // Property getting methods
    public String GetElementVariable() { return elementVariable; }
    public Vector GetAtomicNumber1() { return atomicNumber1; }
    public Vector GetAtomicNumber2() { return atomicNumber2; }
    public Vector GetMinDist() { return minDist; }
    public Vector GetMaxDist() { return maxDist; }
    public int    GetMaxBondsClamp() { return maxBondsClamp; }

    // Write and read methods.
    public void WriteAtts(CommunicationBuffer buf)
    {
        if(WriteSelect(0, buf))
            buf.WriteString(elementVariable);
        if(WriteSelect(1, buf))
            buf.WriteIntVector(atomicNumber1);
        if(WriteSelect(2, buf))
            buf.WriteIntVector(atomicNumber2);
        if(WriteSelect(3, buf))
            buf.WriteDoubleVector(minDist);
        if(WriteSelect(4, buf))
            buf.WriteDoubleVector(maxDist);
        if(WriteSelect(5, buf))
            buf.WriteInt(maxBondsClamp);
    }

    public void ReadAtts(int n, CommunicationBuffer buf)
    {
        for(int i = 0; i < n; ++i)
        {
            int index = (int)buf.ReadByte();
            switch(index)
            {
            case 0:
                SetElementVariable(buf.ReadString());
                break;
            case 1:
                SetAtomicNumber1(buf.ReadIntVector());
                break;
            case 2:
                SetAtomicNumber2(buf.ReadIntVector());
                break;
            case 3:
                SetMinDist(buf.ReadDoubleVector());
                break;
            case 4:
                SetMaxDist(buf.ReadDoubleVector());
                break;
            case 5:
                SetMaxBondsClamp(buf.ReadInt());
                break;
            }
        }
    }

    public String toString(String indent)
    {
        String str = new String();
        str = str + stringToString("elementVariable", elementVariable, indent) + "\n";
        str = str + intVectorToString("atomicNumber1", atomicNumber1, indent) + "\n";
        str = str + intVectorToString("atomicNumber2", atomicNumber2, indent) + "\n";
        str = str + doubleVectorToString("minDist", minDist, indent) + "\n";
        str = str + doubleVectorToString("maxDist", maxDist, indent) + "\n";
        str = str + intToString("maxBondsClamp", maxBondsClamp, indent) + "\n";
        return str;
    }


    // Attributes
    private String elementVariable;
    private Vector atomicNumber1; // vector of Integer objects
    private Vector atomicNumber2; // vector of Integer objects
    private Vector minDist; // vector of Double objects
    private Vector maxDist; // vector of Double objects
    private int    maxBondsClamp;
}

