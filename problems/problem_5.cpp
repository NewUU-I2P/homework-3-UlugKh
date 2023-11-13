float problemSolution5(float x, float y, char operation) {
   float result;
   // write your code here
       switch (operation) {
        case '+': return x + y;
        case '-': return x - y;
        case '*': return x * y;
        case '/': return (y != 0) ? x / y : return 1;
        default: return 1;
    }
   return result;
}
