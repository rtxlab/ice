// **********************************************************************
//
// Copyright (c) 2002
// ZeroC, Inc.
// Billerica, MA, USA
//
// All Rights Reserved.
//
// Ice is free software; you can redistribute it and/or modify it under
// the terms of the GNU General Public License version 2 as published by
// the Free Software Foundation.
//
// **********************************************************************

#include <Ice/Ice.h>
#include <TestI.h>

ThrowerI::ThrowerI(const Ice::ObjectAdapterPtr& adapter) :
    _adapter(adapter)
{
}

void
ThrowerI::shutdown(const Ice::Current&)
{
    _adapter->getCommunicator()->shutdown();
}

bool
ThrowerI::supportsUndeclaredExceptions(const Ice::Current&)
{
    return true;
}

bool
ThrowerI::supportsNonIceExceptions(const Ice::Current&)
{
    return true;
}

void
ThrowerI::throwAasA(Ice::Int a, const Ice::Current&)
{
    A ex;
    ex.aMem = a;
    throw ex;
}

void
ThrowerI::throwAorDasAorD(Ice::Int a, const Ice::Current&)
{
    if(a > 0)
    {
	A ex;
	ex.aMem = a;
	throw ex;
    }
    else
    {
	D ex;
	ex.dMem = a;
	throw ex;
    }
}

void
ThrowerI::throwBasA(Ice::Int a, Ice::Int b, const Ice::Current& current)
{
    throwBasB(a, b, current);
}

void
ThrowerI::throwCasA(Ice::Int a, Ice::Int b, Ice::Int c, const Ice::Current& current)
{
    throwCasC(a, b, c, current);
}

void
ThrowerI::throwBasB(Ice::Int a, Ice::Int b, const Ice::Current&)
{
    B ex;
    ex.aMem = a;
    ex.bMem = b;
    throw ex;
}

void
ThrowerI::throwCasB(Ice::Int a, Ice::Int b, Ice::Int c, const Ice::Current& current)
{
    throwCasC(a, b, c, current);
}

void
ThrowerI::throwCasC(Ice::Int a, Ice::Int b, Ice::Int c, const Ice::Current&)
{
    C ex;
    ex.aMem = a;
    ex.bMem = b;
    ex.cMem = c;
    throw ex;
}

void
ThrowerI::throwUndeclaredA(Ice::Int a, const Ice::Current&)
{
    A ex;
    ex.aMem = a;
    throw ex;
}

void
ThrowerI::throwUndeclaredB(Ice::Int a, Ice::Int b, const Ice::Current&)
{
    B ex;
    ex.aMem = a;
    ex.bMem = b;
    throw ex;
}

void
ThrowerI::throwUndeclaredC(Ice::Int a, Ice::Int b, Ice::Int c, const Ice::Current&)
{
    C ex;
    ex.aMem = a;
    ex.bMem = b;
    ex.cMem = c;
    throw ex;
}

void
ThrowerI::throwLocalException(const Ice::Current&)
{
    throw Ice::TimeoutException(__FILE__, __LINE__);
}

void
ThrowerI::throwNonIceException(const Ice::Current&)
{
    throw int(12345);
}
