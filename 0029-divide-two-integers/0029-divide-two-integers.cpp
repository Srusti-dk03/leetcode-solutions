class Solution {
public:
    int divide(int dividend, int divisor) {

        // Special overflow case
        if (dividend == INT_MIN && divisor == -1)
            return INT_MAX;

        long long a = dividend;
        long long b = divisor;

        // Determine sign
        bool negative = (a < 0) ^ (b < 0);

        // Work with positive values
        a = abs(a);
        b = abs(b);

        long long result = 0;

        while (a >= b) {

            long long temp = b;
            long long multiple = 1;

            // Find the largest doubled divisor that fits
            while ((temp << 1) <= a) {
                temp <<= 1;
                multiple <<= 1;
            }

            a -= temp;
            result += multiple;
        }

        if (negative)
            result = -result;

        return (int)result;
    }
};