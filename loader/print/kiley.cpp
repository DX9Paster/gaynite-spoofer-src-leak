#include "kiley.h"
#include <iostream>
#include <vector>
#include "../Strings/encrypt.h"
#include <windows.h>
#include <random>

void kiley::set_color(const int forg_col)
{
    const auto h_std_out = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    if (GetConsoleScreenBufferInfo(h_std_out, &csbi))
    {
        const WORD w_color = (csbi.wAttributes & 0xF0) + (forg_col & 0x0F);
        SetConsoleTextAttribute(h_std_out, w_color);
    }
}
void kiley::print_home_info() {
    system(XorStr("cls").c_str());
    set_color(Yellow);
    set_color(White);
    std::cout << XorStr("\nGayniteSpoofer v1.1.0 | Updated on : 26 August 2022");
    std::cout << XorStr("\n\nThe spoofer isnt working after update ? Go to the discord :");
    std::cout << XorStr("\nhttps://discord.com/invite/gaynite");
    std::cout << XorStr("\n\nState:");
    std::cout << XorStr("\n Connected to server: ");
    set_color(Green);
    std::cout << XorStr("Connected");
    set_color(White);
}
void kiley::print_home_key() {
    //system(XorStr("cls").c_str());
    set_color(Yellow);
    std::cout << XorStr("Developer: FocusKid The King#1829");
    set_color(White);
    std::cout << XorStr("\nGayniteSpoofer v1.1.0 | Updated on : 26 August 2022");
    std::cout << XorStr("\n\nThe spoofer isnt working after update ? Go to the discord :");
    std::cout << XorStr("\nhttps://discord.com/invite/gaynite");
    std::cout << XorStr("\n\nState:");
    std::cout << XorStr("\n Connected to server: ");
    set_color(Green);
    std::cout << XorStr("Connected");

}
void kiley::print_home() {
    std::cout << XorStr("\n Modules Downloaded: ");
    set_color(Green);
    std::cout << XorStr("Confirmed");
    set_color(White);
    std::cout << XorStr("\n\nOptions:");
    std::cout << XorStr("\n [F1] Spoof (!): ");
    set_color(Green);
    std::cout << XorStr("Undetected");
    set_color(White);
    std::cout << XorStr("\n [F2] Check Serials (!): ");
    set_color(Green);
    std::cout << XorStr("Working");
    set_color(White);
    std::cout << XorStr("\n [F3] Auto-Detct AC [BETA](!): ");
    set_color(Yellow);
    std::cout << XorStr("BETA");
    set_color(White);
    std::cout << XorStr("\n [F4] Apple Cleaner (!): ");
    set_color(Green);
    std::cout << XorStr("Working");
    set_color(White);
    std::cout << XorStr("\n [F5] Best Steps For Apple Cleaner (!) ");
    set_color(White);
    std::cout << XorStr("\n\nInformations:");
    std::cout << XorStr("\n (!) = When spoofed press F2 twice for serials to work-\n");
    std::cout << XorStr("       Video example of usage below:");
    std::cout << XorStr("\n  https://streamable.com/cnvn0r");
    std::cout << XorStr("\n\n (!!) = For Auto-Detect AC SPAM F3 when fortnite is launching-\n");
    std::cout << XorStr("        Video example of usage below:");
    std::cout << XorStr("\n  https://streamable.com/zsoyvr");
}
void kiley::print_home_spoof() {
    system(XorStr("cls").c_str());
    set_color(Yellow);
    std::cout << XorStr("Developer: FocusKid The King#1829");
    set_color(White);
    std::cout << XorStr("\nGayniteSpoofer v1.1.0 | Updated on : 26 August 2022");
    std::cout << XorStr("\n\nThe spoofer isnt working after update ? Go to the discord :");
    std::cout << XorStr("\nhttps://discord.com/invite/gaynite");
    std::cout << XorStr("\n\nState:");
    std::cout << XorStr("\n Connected to server: ");
    set_color(Green);
    std::cout << XorStr("Connected");
    set_color(White);
    std::cout << XorStr("\n Modules Downloaded: ");
    set_color(Green);
    std::cout << XorStr("Confirmed");
    set_color(White);
    std::cout << XorStr("\n\nOptions:");
    std::cout << XorStr("\n [F1] Spoof EAC [EasyAntiCheat] (!): ");
    set_color(Green);
    std::cout << XorStr("Undetected");
    set_color(White);
    std::cout << XorStr("\n [F2] Spoof BE [BattleEye] (!): ");
    set_color(Green);
    std::cout << XorStr("Undetected");
    set_color(White);
    std::cout << XorStr("\n\nInformations:");
    std::cout << XorStr("\n (!) = When spoofed press F2 twice for serials to work-\n");
    std::cout << XorStr("       Video example of usage below:");
    std::cout << XorStr("\n  https://streamable.com/cnvn0r");
    std::cout << XorStr("\n\n (!!) = For Auto-Detect AC SPAM F3 when fortnite is launching-\n");
    std::cout << XorStr("        Video example of usage below:");
    std::cout << XorStr("\n  https://streamable.com/zsoyvr");
}
