#include <string>

std::string problemSolution3(float height, char S) {
    // write your code here
     if (S == 'M') {
        if (height < 1.6) {
            return "Short";
        } else if (height < 1.8) {
            return "Average";
        } else {
            return "Tall";
        }
    } else if (S == 'F') {
        if (height < 1.5) {
            return "Short";
        } else if (height < 1.7) {
            return "Average";
        } else {
            return "Tall";
        }
    } else {
        return "Invalid input";
    }
    // use return to return your result
    // make use of control flow statements
}
