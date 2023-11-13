#include <iostream>
#include <string>
#include <sstream>

std::string problemSolution4(const std::string &macAddress) {
    // write your code here
    std::istringstream iss(macAddress);
    int firstOctet;

    if (!(iss >> std::hex >> firstOctet)) {
        return "Invalid MAC address format";
    }

    if (firstOctet == 0xFF) {
        return "Broadcast";
    }

    if (firstOctet % 2 == 0) {
        return "Unicast";
    } else {
        return "Multicast";
    }
    // make use of control flow statements
    // return result;
}
