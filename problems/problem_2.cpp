float problemSolution2(float i, float j, float k) {
    float result;
    // write your code here;
    result = (p1 > p2) ? ((p1 > p3) ? p1 : p3) : (p2 > p3 ? p2 : p3);
    return result;
}
