#include "iostream"
#include "fstream"

void logout(const std::string& username) {
    std::ofstream logFile("logout.log", std::ios::app);
    if (logFile.is_open()) {
        logFile << "User " << username << " logged out." << std::endl;
        logFile.close();
    } else {
        std::cerr << "Unable to open logout log file." << std::endl;
    }
}