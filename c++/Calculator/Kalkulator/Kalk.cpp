#include "Kalk.h"



Kalk::Kalk()
{
	a = NULL ;
	b = NULL;
	z = "";
	s_a = "";
	s_b = "";
	reset = false;
	error = false;

}

void Kalk::inc_a()
{
	a++;
	z = "asdasd";
}

String ^ Kalk::returnAB()
{
	if (String::IsNullOrEmpty(z)) { return s_a; }
	else { return s_b; }
}

String ^ Kalk::retyrzZ()
{
	return z;
}

String ^ Kalk::retyrzA()
{
	return s_a;
}
String ^ Kalk::retyrzB()
{
	return s_b;
}
void Kalk::addZnak(String^ text)
{
	
	if (String::IsNullOrEmpty(z)) { z = text; }
	else { z = text; wynik(); z = text;}
	
	//z = text;
	
	
	

}
void Kalk::add(String^ text)
{
	String^ temp;

	
	if (error == true) { s_a = ""; s_b = ""; error = false; }

	if (String::IsNullOrEmpty(z)) {
		if (reset == true) { s_a = "", reset = false; }
		temp = s_a;
	}
	else { temp = s_b; }

	if (text == ",")
	{	
	
		
		if (String::IsNullOrEmpty(temp))
		{
			temp = "0";
		}
		
		if (temp->IndexOf(text) == -1)
		{
			if ((temp->Length) <= 13) { temp += text; }
		}
	}
	else
	{
		if ((temp->Length) <= 14) { temp += text; }
	}
	if (String::IsNullOrEmpty(z)) s_a = temp; else s_b = temp;

}

void Kalk::wynik()
{
	
		if (z == "+") dodaj();
		if (z == "-") odejmij();
		if (z == "/") dzielenie();
		if (z == "*") mnozenie();
		if (z == "^") potega();
	
}

void Kalk::dodaj()
{
	
	if (String::IsNullOrEmpty(s_b) || String::IsNullOrEmpty(s_a))
	{
		
		//a = NULL;
		//s_a = "";
		b = NULL;
		s_b = "";
		z = "";
	


	}
	else
	{
		a = Double::Parse(s_a);
		b = Double::Parse(s_b);

		a += b;
		s_a = a.ToString();

		b = NULL;
		s_b = "";
	    z = "";
		reset = true;
	}
	


}

void Kalk::odejmij()
{
	if (String::IsNullOrEmpty(s_b) || String::IsNullOrEmpty(s_a))
	{
		//a = NULL;
		//s_a = "";
		b = NULL;
		s_b = "";
		z = "";

	}

	else
	{
		a = Double::Parse(s_a);
		b = Double::Parse(s_b);

		a -= b;
		s_a = a.ToString();

		b = NULL;
		s_b = "";
		z = "";
		reset = true;
	}

}

void Kalk::mnozenie()
{
	if (String::IsNullOrEmpty(s_b) || String::IsNullOrEmpty(s_a))
	{
		//a = NULL;
		//s_a = "";
		b = NULL;
		s_b = "";
		z = "";

	}

	else
	{
		a = Double::Parse(s_a);
		b = Double::Parse(s_b);

		a = a * b;
		s_a = a.ToString();

		b = NULL;
		s_b = "";
		z = "";
		reset = true;
	}
}

void Kalk::dzielenie()
{
	if (String::IsNullOrEmpty(s_b) || String::IsNullOrEmpty(s_a))
	{
		//a = NULL;
		//s_a = "";
		b = NULL;
		s_b = "";
		z = "";

	}

	else
	{
		a = Double::Parse(s_a);
		b = Double::Parse(s_b);

		a = a / b;
		s_a = a.ToString();
		if (b == 0) { s_a = "error"; error = true; }
		b = NULL;
		s_b = "";
		z = "";
		reset = true;

	}
}

void Kalk::procent()
{
	if (String::IsNullOrEmpty(s_b) || String::IsNullOrEmpty(s_a))
	{

	}
	else
	{
		a = Double::Parse(s_a);
		b = Double::Parse(s_b);

		b = a * (b / 100);
		s_b = b.ToString();

	}
}

void Kalk::odwrotnosc()
{
	if (error == true) { s_a = ""; s_b = ""; error = false; }
		if (String::IsNullOrEmpty(s_a) == false)
		{
			if (String::IsNullOrEmpty(z)) {
			
				a = Double::Parse(s_a);
				a = 1 / a;
				s_a = a.ToString();
			}
			else {
				if (String::IsNullOrEmpty(s_b) == false) {
					b = Double::Parse(s_b);
					b = 1 / b;
					s_b = b.ToString();
				}
				
			
			}
			
		}
			
}

void Kalk::plusMinus()
{
	if (error == true) { s_a = ""; s_b = ""; error = false; }
	if (String::IsNullOrEmpty(s_a) == false)
	{
		if (String::IsNullOrEmpty(z)) {

			a = Double::Parse(s_a);
			a = a*-1;
			s_a = a.ToString();
		}
		else {
			if (String::IsNullOrEmpty(s_b) == false) {
				b = Double::Parse(s_b);
				b = b * -1;
				s_b = b.ToString();
			}
			

		}

	}
}

void Kalk::pierwiastek()
{
	const double precyzja = 0.000001;
	double pom1, pom2, pom3;

	if (error == true) { s_a = ""; s_b = ""; error = false; }
	if (String::IsNullOrEmpty(s_a) == false)
	{

		if (String::IsNullOrEmpty(z)) {

			pom3 = Double::Parse(s_a);
		}
		else {
			if (String::IsNullOrEmpty(s_b))
			{
				pom3 = NULL;
			}
			else {
				pom3 = Double::Parse(s_b);
			}
			
		
		}



		pom1 = 1.;
		pom2 = pom3;
		if (pom3>0.) {


			while (fabs(pom1 - pom2) >= precyzja)
			{
				pom1 = (pom1 + pom2) / 2.;
				pom2 = pom3 / pom1;
			}

			reset = true;

			if (String::IsNullOrEmpty(z)) {

				s_a = pom1.ToString();
			}
			else { s_b = pom1.ToString(); }


			
		}
		else
		{
			if (pom3 < 0.) { s_a = "error"; error = true; }
		}
	}
}

void Kalk::backspace()
{

	if (String::IsNullOrEmpty(z)) {
		
		if (String::IsNullOrEmpty(s_a)) {}
		else
		{
			s_a = s_a->Remove((s_a->Length) - 1, 1);
		}
		
	}
	else {
		if (String::IsNullOrEmpty(s_b)) {}
		else
		{
			s_b = s_b->Remove((s_b->Length) - 1, 1);
		}
	
	}
}

void Kalk::cleanOne()
{
	if (String::IsNullOrEmpty(z)) {

		a = NULL;
		s_a = "";
		

	}
	else {
		if (String::IsNullOrEmpty(s_b)) {}
		else
		{
			b = NULL;
			s_b = "";
		}

	}
}

void Kalk::cleanAll()
{
	a = NULL;
	b = NULL;
	s_a = "";
	s_b = "";
	z = "";

}

void Kalk::potega()
{
	

	if (error == true) { s_a = ""; s_b = ""; error = false; }
	if ((String::IsNullOrEmpty(s_a) == false))
	{
		
		
		if (s_a->IndexOf(",") == -1)
		{

			a = Double::Parse(s_a);
			b = Double::Parse(s_b);
			int pom = a;

			if ((b > 0)) {

				for (int i = 1; i < b; i++)
				{
					a = a * pom;
				}
				s_a = a.ToString();
				s_b = "";
				z = "";
			}
			else
			{
				if (b == 0) {
					s_a = "1";
					s_b = "";
					z = "";
				}
				else {
					
					b = b * -1;
					for (int i = 1; i < b; i++)
					{
						a = a * pom;
					}

					a = 1 / a;

					s_a = a.ToString();
					s_b = "";
					z = "";
				}
			}
			
		}
		
	}

}

void Kalk::silnia()
{
	long long silnia=1;
	int temp;
	if (s_a->IndexOf(",") == -1)
	{
		temp = Int16::Parse(s_a);

		if (String::IsNullOrEmpty(s_a) == false)
		{
			temp = Int16::Parse(s_a);
			if (temp >= 1) {

				for (int i = 1; i <= temp; i++) silnia *= i;

				s_a = silnia.ToString();

			}
			else
			{
				if (temp == 0) { s_a = "1"; }
				else
				{
					s_a = "";
				}
			}
			
		}
	}
}
