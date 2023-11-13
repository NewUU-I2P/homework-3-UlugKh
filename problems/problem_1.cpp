void problemSolution1(float consumed_water) {
    float cost;
    // write your code here
    float cost = 13;
    if (consumption > 30) {
        cost += 30 * 0.4;
        consumption -= 30;
        if (consumption > 20) {
            cost += 20 * 0.12;
            consumption -= 20;
            if (consumption > 10) {
                cost += 10 * 1.4;
                consumption -= 10;
                cost += consumption * 1.5;
            } else {
                cost += consumption * 1.4;
            }
        } else {
            cost += consumption * 0.12;
        }
    } else {
        cost += consumption * 0.4;
    }
    return cost;
}
