#pragma once
class String
{

private:
	char* word;

	String();
	String(char* word);
	String(String str);

	int length(String str);
	void clear(String str);

	String GetMeAString() { return String("another string"); }

};

