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

#ifndef TEST_AMD_I_H
#define TEST_AMD_I_H

#include <TestAMD.h>

class MyDerivedClassI : public Test::MyDerivedClass
{
public:

    MyDerivedClassI(const Ice::ObjectAdapterPtr&, const Ice::Identity&);

    virtual void shutdown_async(const Test::AMD_MyClass_shutdownPtr&,
				const Ice::Current&);

    virtual void opVoid_async(const Test::AMD_MyClass_opVoidPtr&,
			      const Ice::Current&);

    virtual void opByte_async(const Test::AMD_MyClass_opBytePtr&,
			      Ice::Byte, Ice::Byte,
			      const Ice::Current&);
    
    virtual void opBool_async(const Test::AMD_MyClass_opBoolPtr&,
			      bool, bool,
			      const Ice::Current&);
    
    virtual void opShortIntLong_async(const Test::AMD_MyClass_opShortIntLongPtr&,
				      Ice::Short, Ice::Int, Ice::Long,
				      const Ice::Current&);
    
    virtual void opFloatDouble_async(const Test::AMD_MyClass_opFloatDoublePtr&,
				     Ice::Float, Ice::Double,
				     const Ice::Current&);
    
    virtual void opString_async(const Test::AMD_MyClass_opStringPtr&,
				const std::string&, const std::string&,
				const Ice::Current&);
    
    virtual void opMyEnum_async(const Test::AMD_MyClass_opMyEnumPtr&,
				Test::MyEnum,
				const Ice::Current&);
    
    virtual void opMyClass_async(const Test::AMD_MyClass_opMyClassPtr&,
				 const Test::MyClassPrx&,
				 const Ice::Current&);

    virtual void opStruct_async(const Test::AMD_MyClass_opStructPtr&,
				const Test::Structure&, const Test::Structure&,
				const Ice::Current&);

    virtual void opByteS_async(const Test::AMD_MyClass_opByteSPtr&,
			       const Test::ByteS&, const Test::ByteS&,
			       const Ice::Current&);
    
    virtual void opBoolS_async(const Test::AMD_MyClass_opBoolSPtr&,
			       const Test::BoolS&, const Test::BoolS&,
			       const Ice::Current&);
    
    virtual void opShortIntLongS_async(const Test::AMD_MyClass_opShortIntLongSPtr&,
				       const Test::ShortS&, const Test::IntS&, const Test::LongS&,
				       const Ice::Current&);
    
    virtual void opFloatDoubleS_async(const Test::AMD_MyClass_opFloatDoubleSPtr&,
				      const Test::FloatS&, const Test::DoubleS&,
				      const Ice::Current&);
    
    virtual void opStringS_async(const Test::AMD_MyClass_opStringSPtr&,
				 const Test::StringS&, const Test::StringS&,
				 const Ice::Current&);
    
    virtual void opByteSS_async(const Test::AMD_MyClass_opByteSSPtr&,
				const Test::ByteSS&, const Test::ByteSS&,
				const Ice::Current&);
    
    virtual void opBoolSS_async(const Test::AMD_MyClass_opBoolSSPtr&,
				const Test::BoolSS&, const Test::BoolSS&,
				const Ice::Current&);
    
    virtual void opShortIntLongSS_async(const Test::AMD_MyClass_opShortIntLongSSPtr&,
					const Test::ShortSS&, const Test::IntSS&, const Test::LongSS&,
					const Ice::Current&);
    
    virtual void opFloatDoubleSS_async(const Test::AMD_MyClass_opFloatDoubleSSPtr&,
				       const Test::FloatSS&, const Test::DoubleSS&,
				       const Ice::Current&);
    
    virtual void opStringSS_async(const Test::AMD_MyClass_opStringSSPtr&,
				  const Test::StringSS&, const Test::StringSS&,
				  const Ice::Current&);

    virtual void opByteBoolD_async(const Test::AMD_MyClass_opByteBoolDPtr&,
				   const Test::ByteBoolD&, const Test::ByteBoolD&, 
				   const Ice::Current&);

    virtual void opShortIntD_async(const Test::AMD_MyClass_opShortIntDPtr&,
				   const Test::ShortIntD&, const Test::ShortIntD&,
				   const Ice::Current&);

    virtual void opLongFloatD_async(const Test::AMD_MyClass_opLongFloatDPtr&,
				    const Test::LongFloatD&, const Test::LongFloatD&,
				    const Ice::Current&);

    virtual void opStringStringD_async(const Test::AMD_MyClass_opStringStringDPtr&,
				       const Test::StringStringD&, const Test::StringStringD&,
				       const Ice::Current&);

    virtual void opStringMyEnumD_async(const Test::AMD_MyClass_opStringMyEnumDPtr&,
				       const Test::StringMyEnumD&, const Test::StringMyEnumD&,
				       const Ice::Current&);

    virtual void opDerived_async(const Test::AMD_MyDerivedClass_opDerivedPtr&,
				 const Ice::Current&);
    
private:

    Ice::ObjectAdapterPtr _adapter;
    Ice::Identity _identity;
};

#endif
