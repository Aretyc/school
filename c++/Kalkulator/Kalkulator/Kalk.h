#pragma once
#include "string"

using namespace System;

ref class Kalk
{
public:
	
	Kalk();
	void inc_a();
	String^ returnAB();
	String^ retyrzZ();
	String^ retyrzA();
	String^ retyrzB();
	void addZnak(String^ text);
	void add(String^ text);
	void wynik();
	void dodaj();
	void odejmij();
	void mnozenie();
	void dzielenie();
	void procent();
	void odwrotnosc();
	void plusMinus();
	void pierwiastek();
	void backspace();
	void cleanOne();
	void cleanAll();
	void potega();
	void silnia();


private:
	long double a, b;
	String^ z;
	String^ s_a;
	String^ s_b;
	bool reset;
	bool error;

};


