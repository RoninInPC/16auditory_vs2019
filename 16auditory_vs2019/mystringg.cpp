#include"mystringg.hpp"
std::ostream& operator<< (std::ostream& out, const MyString& New)
{
	out << New.buffer;
	return out;
}
std::istream& operator>> (std::istream& in, const MyString& New) {
	in >> New.buffer;
	return in;
}
MyString operator+(MyString One, MyString Two) {
	MyString Ans;
	char* NewBuffer = new char[One.size() + Two.size()];
	for (int i = 0; i < One.size(); i++) {
		NewBuffer[i] = One.buffer[i];
	}
	int i = 0;
	for (int j = One.size(); j < One.size() + Two.size(); j++) {
		NewBuffer[j] = Two.buffer[i];
		i++;
	}
	NewBuffer[One.size() + Two.size()] = '\0';
	Ans.buffer = NewBuffer;
	return Ans;
}
MyString operator+(MyString One, char* ans) {
	MyString New = ans;
	return One + New;
}
MyString operator+(MyString One,const char* ans) {
	MyString New = ans;
	return One + New;
}
MyString operator+(MyString One, char ans) {
	MyString New = ans;
	return One + New;
}
