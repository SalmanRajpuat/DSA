class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == divisor) return 1;

        // Handle overflow
        if (dividend == INT_MIN && divisor == -1) return INT_MAX;

        // Determine the sign of the result
        bool sign = (dividend < 0) == (divisor < 0);

        // Use long to prevent overflow, and take abs safely
        long n = abs((long)dividend);
        long d = abs((long)divisor);

        long quotient = 0;
        while (n >= d) {
            long temp = d, multiple = 1;
            while (n >= (temp << 1)) {
                temp <<= 1;
                multiple <<= 1;
            }
            n -= temp;
            quotient += multiple;
        }

        if (!sign) quotient = -quotient;

        // Clamp result to 32-bit signed int range
        if (quotient > INT_MAX) return INT_MAX;
        if (quotient < INT_MIN) return INT_MIN;

        return (int)quotient;
    }
};
