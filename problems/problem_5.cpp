float problemSolution5(float x, float y, char operation) {
   float result;
   // write your code here
       switch (operation) {
        case '+': return x + y;
        case '-': return x - y;
        case '*': return x * y;
        case '/': return (y != 0) ? x / y : (cout << "Error!" << endl, 1);
        default: cout << "Error!" << endl; return 1;
    }
   return result;
}
