#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
int main()
{
<<<<<<< HEAD
    printf("Hello");
=======
    vector<int> nums{7, 1, 3, 6, 5, 4};
    int min = INT_MAX;
    int max = INT_MIN;
    int buy_day, sell_day;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] < min)
        {
            min = nums[i];
            buy_day = i;
        }
    }
    for (int i = buy_day; i < nums.size(); i++)
    {
        if (nums[i] > max)
        {
            max = nums[i];
        }
    }
    cout << "You should have bought on day " << buy_day + 1;
>>>>>>> 86beb57655a29f85dfeb1fe97572ae98b3bae364
    return 0;
}
