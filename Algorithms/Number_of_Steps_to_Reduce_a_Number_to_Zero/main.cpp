// Number of Steps to Reduce a Number to Zero - Solution

class Solution {
public:
    int numberOfSteps (int num) {
        int stepCount {};
        while (num != 0) {
            if (num % 2 == 0)
                num /= 2;
            else
                num--;
            stepCount++;
        }
        return stepCount;
    }
};