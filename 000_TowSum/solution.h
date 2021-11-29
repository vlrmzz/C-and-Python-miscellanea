#include <vector>
using std::vector;
#include <unordered_map>
using std::unordered_map;
#include<iostream>

template<typename K, typename V>
void print_map(std::unordered_map<K, V> const &m)
{
    for (auto const &pair: m) {
        std::cout << "{" << pair.first << ": " << pair.second << "}\n";
    }
}

class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            std::unordered_map<int,int> record;
            for (int i=0; i != nums.size(); i++) {
                auto found = record.find(nums[i]);
                if (found != record.end())
                    return {found->second, i};
                record.emplace(target - nums[i],i);
                print_map(record);
            }
            return {-1,-1};
        }
};