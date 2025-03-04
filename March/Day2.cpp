class Solution {
public:
    int guess(int num);  // Assume this function is predefined

    int guessNumber(int n) {
        int low = 1, high = n;  // Start from 1 to n
        while (low <= high) {
            int mid = low + (high - low) / 2;  // Avoid overflow
            int result = guess(mid);
            
            if (result == 0) {
                return mid;  // Correct number found
            } else if (result == -1) {
                high = mid - 1;  // Guess is too high
            } else {
                low = mid + 1;  // Guess is too low
            }
        }
        return -1;  // Should never reach here
    }
};
