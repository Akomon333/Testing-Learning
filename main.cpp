#include <iostream>
#include <vector>

#include <map>
#include <unordered_map>



int main(){
   
    class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::unordered_map<int,int> PossibleSolutions;
        std::pair<int,int> SolutionForTask;
        for (int i = 0; i < nums.size(); i++){
            int CurrentNum = nums[i];
            int Diffirence = target - CurrentNum;

            if(PossibleSolutions.find(Diffirence) != PossibleSolutions.end()){
                SolutionForTask.first = PossibleSolutions[Diffirence];
                SolutionForTask.second = i;
                break;
            } else{
                PossibleSolutions[CurrentNum] = i;
            }
        }
        
        return {SolutionForTask.first,SolutionForTask.second};
    }
};

    return 0;
}
