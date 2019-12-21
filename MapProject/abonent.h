#pragma once
using namespace System;

ref class abonent
{
public:
	String^ surname;
	String^ number;
	String^ tel;
	
	abonent();
	abonent(const abonent %o);
	abonent% operator = (abonent% o);
};


