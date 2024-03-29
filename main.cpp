#include <iostream>
#include "problems/problem_1.cpp"
#include "problems/problem_2.cpp"
#include "problems/problem_3.cpp"
#include "problems/problem_4.cpp"
#include "problems/problem_5.cpp"

using namespace std;

int main() {
    cout << "Problem 1\n";
    problemSolution1(55);
    cout << "Problem 2\n";
    problemSolution2(34.9, 34.5, 34.2);
    cout << "Problem 3\n";
    problemSolution3(M, 1.5);
    cout << "Problem 4\n";
    problemSolution4();
    cout << "Problem 5\n";
    cout << problemSolution5(5.0, 2.0, '/') << endl;
    return 0;
}
