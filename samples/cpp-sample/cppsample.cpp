/************************************************************************************
'
' Copyright � 2002 James W. Newkirk, Michael C. Two, Alexei A. Vorontsov
' Copyright � 2000-2002 Philip A. Craig
'
' This software is provided 'as-is', without any express or implied warranty. In no 
' event will the authors be held liable for any damages arising from the use of this 
' software.
' 
' Permission is granted to anyone to use this software for any purpose, including 
' commercial applications, and to alter it and redistribute it freely, subject to the 
' following restrictions:
'
' 1. The origin of this software must not be misrepresented; you must not claim that 
' you wrote the original software. If you use this software in a product, an 
' acknowledgment (see the following) in the product documentation is required.
'
' Portions Copyright � 2002 James W. Newkirk, Michael C. Two, Alexei A. Vorontsov 
' or Copyright � 2000-2002 Philip A. Craig
'
' 2. Altered source versions must be plainly marked as such, and must not be 
' misrepresented as being the original software.
'
' 3. This notice may not be removed or altered from any source distribution.
'
'***********************************************************************************/

#include "stdafx.h"

#include "cppsample.h"

namespace NUnitSamples {

	void SimpleCPPSample::Init() {
		fValue1 = 2;
		fValue2 = 3;
	}

	void SimpleCPPSample::Add() {
		int result = fValue1 + fValue2;
		Assert::Equals(6,result);
	}

	void SimpleCPPSample::DivideByZero()
	{
		int zero= 0;
		int result= 8/zero;
	}

	void SimpleCPPSample::Equals() {
		Assert::Equals("Integer.",12, 12);
		Assert::Equals("Long.",12L, 12L);
		Assert::Equals("Char.",'a', 'a');


		Assert::Equals("Expected Failure (Integer).", 12, 13);
		Assert::Equals("Expected Failure (Double).", 12.0, 11.99, 0.0);
	}

	void SimpleCPPSample::IgnoredTest()
	{
		throw new InvalidCastException();
	}

	void SimpleCPPSample::ExpectAnException()
	{
		throw new InvalidCastException();
	}

}

