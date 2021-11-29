#include "solution.h"
#include <iostream> 

int main(int argc, char const *argv[])
{
    Solution s;
    std::vector<int> v1{2, 7, 11, 15};
    s.twoSum(v1, 9);
 

    std::vector<int> v2{0, 4, 3, 0};
    s.twoSum(v2, 0);

    // std::vector<int> v3{-3, 4, 3, 90};
    // s.twoSum(v3, 0);

    return 0;
}
    


   