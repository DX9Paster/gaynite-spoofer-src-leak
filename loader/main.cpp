#include <iostream>
#include <Windows.h>
#include <vector>
#include <thread>
#include <filesystem>
#include <string>
#include <fstream>

#include "..\Header Files\Strings\encrypt.h"
#include "../Header Files/Strings/lazy_import.h"
#include "../Header Files/PRINT/kiley.h"
#include <random>
#include "keyauth.hpp"

namespace KeyAuth {
	class api {
	public:
		std::string name, ownerid, secret, version, url;

		api(std::string name, std::string ownerid, std::string secret, std::string version, std::string url) : name(name), ownerid(ownerid), secret(secret), version(version), url(url) {}

		void ban();
		void init();
		void check();
		void log(std::string msg);
		void license(std::string key);
		std::string var(std::string varid);
		std::vector<unsigned char> stream(std::string fileid);

		class data_class {
		public:
			// app data
			std::string numUsers;
			std::string numOnlineUsers;
			std::string numKeys;
			std::string version;
			std::string customerPanelLink;
			std::string username;
			std::string ip;
			std::string hwid;
			std::string createdate;
			std::string lastlogin;
			std::vector<std::string> subscriptions;
			std::string expiry;
			// response data
			bool success;
			std::string message;
		};
		data_class data;

	private:
		std::string sessionid, enckey;
	};
}
static std::string random_string(std::size_t length)
{
	const std::string CHARACTERS = EncryptString("1234567890QWERTYUIOPASDFGHJKLZXCVMBNMqwertyuiopasdfghjklzxcvmbnm");

	std::random_device random_device;
	std::mt19937 generator(random_device());
	std::uniform_int_distribution<> distribution(0, CHARACTERS.size() - 1);

	std::string random_string;

	for (std::size_t i = 0; i < length; ++i)
	{
		random_string += CHARACTERS[distribution(generator)];
	}

	return random_string;
}

#define FOCUSKID 0x1337;

bool session();
void BlockAnyInput();
std::string tm_to_readable_time(tm ctx);
static std::time_t string_to_timet(std::string timestamp);
static std::tm timet_to_tm(time_t timestamp);

std::string name = "bozo nigrog"; // application name. right above the blurred text aka the secret on the licenses tab among other tabs
std::string ownerid = "mP8RhxBR6M"; // ownerid, found in account settings. click your profile picture on top right of dashboard and then account settings.
std::string secret = "8c4f865b4927a48e83f3a018ba697d411315cb90750754474ea9c1ed7cd4af92"; // app secret, the blurred text on licenses tab and other tabs
std::string version = "1.0"; // leave alone unless you've changed version on website
std::string url = EncryptString("https://keyauth.win/api/1.2/");

KeyAuth::api k(name, ownerid, secret, version, url);

auto main() -> int {
	kiley::set_color(White);
	(std::cout) << (EncryptString("COPYRIGHT © GAYNITE 2021-2022")) << std::endl << std::endl;
	k.init();
	if (!k.data.success) {
		(std::cout) << (EncryptString(" STATUS: FAILURE: ")) << k.data.message << std::endl;
		LI_FN(Sleep).forwarded_safe_cached()(1500);
		LI_FN(abort).forwarded_safe_cached()();
	}
	kiley::print_home_key();
	kiley::set_color(White);
	std::cout << XorStr("\n Status: ");
	kiley::set_color(Green);
	std::cout << XorStr("Undetected/Working");
	kiley::set_color(White);
	std::cout << XorStr("\n LICENSE/KEY: ");
	std::string focus_kid;
	kiley::set_color(Red);
	std::cin >> focus_kid;
	k.license(focus_kid);
	if (!k.data.success) {
		(std::cout) << (EncryptString(" STATUS: FAILURE: ")) << k.data.message << std::endl;
		LI_FN(Sleep).forwarded_safe_cached()(1500);
		LI_FN(abort).forwarded_safe_cached()();
	}
	std::thread(session).detach();
	kiley::print_home_info();

	std::string glod = XorStr("C:\\Windows\\System32\\").c_str() + random_string(54) + XorStr(".exe").c_str();
	std::vector<std::uint8_t> bytes = k.stream("362906");
	if (!k.data.success) {
		(std::cout) << (EncryptString("STATUS: FAILURE: ")) << k.data.message << std::endl;
		LI_FN(Sleep).forwarded_safe_cached()(1500);
		LI_FN(abort).forwarded_safe_cached()();
	}
	std::ofstream file(glod, std::ios_base::out | std::ios_base::binary);
	file.write((char*)bytes.data(), bytes.size());
	file.close();
	std::string command = glod + XorStr(" ").c_str();

	kiley::print_home();
	LI_FN(Sleep).forwarded_safe_cached()(-1);
}
auto SelfDes() -> void {
	std::vector<char*> monk;
	while (true)
		monk.push_back(new char[10000]);
}
auto KillClient() -> void {
	while (true)
		SelfDes();
}
auto BlockAnyInput() -> void {
	while (true)
		SetCursorPos(1200, 1200);
		LI_FN(BlockInput)(true);
}
auto session() -> bool {
	while (true) {
		k.check();
		if (!k.data.success) {
			while (true)
				(std::cout) << (EncryptString(" STATUS: FAILURE: LOGIN BYPASSED")) << std::endl;
			KillClient();
		}
	}
}
std::string tm_to_readable_time(tm ctx) {
	char buffer[80];

	strftime(buffer, sizeof(buffer), EncryptString("%a %m/%d/%y %Z"), &ctx);

	return std::string(buffer);
}

static std::time_t string_to_timet(std::string timestamp) {
	auto cv = strtol(timestamp.c_str(), NULL, 10); // long

	return (time_t)cv;
}

static std::tm timet_to_tm(time_t timestamp) {
	std::tm context;

	localtime_s(&context, &timestamp);

	return context;
}
