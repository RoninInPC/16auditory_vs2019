#include<iostream>
#include <cstring>
#ifndef H_MYSTRINGG
#define H_MYSTRINGG
class MyString {
private:
	int size(const char* One) {
		return sizeof(One) / sizeof(char);
	}
	int size(char* One) {
		return sizeof(One) / sizeof(char);
	}
public:
	char* buffer;
	int size(){
		return sizeof(buffer) / sizeof(char);
	}
	void output() {
		std::cout << buffer << "\n";
	}
	void input() {
		std::cin >> buffer;
	}
	MyString& operator=(MyString New) {
		char* bufferNew = new char[size(New.buffer)];
		bufferNew = New.buffer;
		buffer = bufferNew;
		return *this;
	}
	MyString& operator=(const char* New) {
		buffer = (char*)New;
		return *this;
	}
	MyString& operator=(char* New) {
		char* bufferNew = new char[size(New)];
		bufferNew = New;
		buffer = bufferNew;
		return *this;
	}
	MyString& operator=(char New) {
		char* bufferNew = new char[1];
		bufferNew[0] = New;
		buffer = bufferNew;
		return *this;
	}
	MyString() {
		*this = "";
	}
	MyString(const MyString& New) {
		*this = New.buffer;
	}
	MyString(const char* New) {
		*this = New;
	}
	MyString(char* New) {
		*this = New;
	}
	MyString(char New) {
		*this = New;
	}
	~MyString() {
		delete[] buffer;
	}
	friend std::ostream& operator<< (std::ostream& out, const MyString& New);
	friend std::istream& operator>> (std::istream& out, const MyString& New);
	friend MyString operator+(MyString One, MyString Two);
	void operator+=(MyString New) {
		MyString Ans = buffer;
		Ans = Ans+ New;
		buffer = Ans.buffer;
	}
	void* operator new(size_t size)
	{
		void* ptr;
		ptr = malloc(size);
		return ptr;
	}
	void operator delete(void* ptr)
	{
		free(ptr);
	}
	void operator+=(const char* New) {
		MyString Ans = New;
		Ans = Ans + New;
		buffer = Ans.buffer;
	}
	void operator+=(char* New) {
		MyString Ans = New;
		Ans = Ans + New;
		buffer = Ans.buffer;
	}
	void operator+=(char New) {
		MyString Ans = New;
		Ans = Ans + New;
		buffer = Ans.buffer;
	}
};
#endif