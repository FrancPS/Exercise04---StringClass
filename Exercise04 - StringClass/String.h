#pragma once
class String
{

public:
	String();
	String(const char* chars);
	String(const String& source);

	~String();

	const void Print();
	const int length();
	void clear();

	String operator+(const String& str);
	bool operator==(const char* chars);
	//String GetMeAString();

private:
	char* word;

	


	

};

