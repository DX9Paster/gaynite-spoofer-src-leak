#include <consoleapi2.h>
#include <WinBase.h>
HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);


const char* SetWhite()
{
	SetConsoleTextAttribute(h, 15);
	return "";
}
const char* SetLightAqua()
{
	SetConsoleTextAttribute(h, 3);
	return "";
}
const char* SetAqua()
{
	SetConsoleTextAttribute(h, 9);
	return "";
}
const char* SetYellow()
{
	SetConsoleTextAttribute(h, 6);
	return "";
}
const char* SetPurple()
{
	SetConsoleTextAttribute(h, 5);
	return "";
}
const char* SetRed()
{
	SetConsoleTextAttribute(h, 4);
	return "";
}
const char* SetGreen()
{
	SetConsoleTextAttribute(h, 2);
	return "";
}
