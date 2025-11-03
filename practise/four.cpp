#include <iostream>
#include <string>
#ifdef _WIN32
#include <windows.h>
#else
#include <sys/ioctl.h>
#include <unistd.h>
#endif

using namespace std;

int getConsoleWidth() {
#ifdef _WIN32
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
    return csbi.srWindow.Right - csbi.srWindow.Left + 1;
#else
    struct winsize w;
    ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);
    return w.ws_col;
#endif
}

int main() {
    string name = "Your Name";  // Replace this
    int columns = getConsoleWidth();

    // Compute spaces safely
    int spaces = (columns - static_cast<int>(name.length())) / 2;
    if (spaces < 0) spaces = 0; // avoid negative length error

    cout << string(spaces, ' ') << name << endl;

    return 0;
}
