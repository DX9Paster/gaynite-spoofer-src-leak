#include <Windows.h>
#include <iostream>

enum console_color
{
	Black = 0,
	Blue,
	Green,
	Cyan,
	Red,
	Magenta,
	Brown,
	LightGray,
	DarkGray,
	LightBlue,
	LightGreen,
	LightCyan,
	LightRed,
	LightMagenta,
	Yellow,
	White,

};

class kiley
{
public:
	static void print_home_info();
	static void print_home_key();
	static void print_home();
	static void set_color(const int forg_col);
	static void print_home_spoof();
};
