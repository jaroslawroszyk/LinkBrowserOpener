#include <iostream>
#include <fstream>
#include <string>
#include <filesystem>

#ifdef _WIN32
#include <windows.h>
#elif __linux__
#include <cstdlib>
#elif __APPLE__
#include <cstdlib>
#endif

auto openWebBrowser(const std::string &url) -> void
{
#ifdef _WIN32
    ShellExecute(NULL, "open", url.c_str(), NULL, NULL, SW_SHOWNORMAL);
#elif __linux__
    std::string command = "xdg-open " + url;
    system(command.c_str());
#elif __APPLE__
    std::string command = "open " + url;
    system(command.c_str());
#else
    cout << "Unsupported platform!" << endl;
#endif
}

auto main() -> int
{
    std::ifstream inputFile("links.txt");
    if (not inputFile)
    {
        std::cerr << "Error: Unable to open file." << std::endl;
        return 1;
    }

    std::string url{};
    while (getline(inputFile, url))
    {
        openWebBrowser(url);
    }

    inputFile.close();
    return 0;
}