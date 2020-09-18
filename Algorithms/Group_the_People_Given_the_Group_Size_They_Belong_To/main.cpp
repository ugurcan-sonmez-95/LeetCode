// Group the People Given the Group Size They Belong To - Solution

class Solution {
public:
    std::vector<std::vector<int>> groupThePeople(const std::vector<int> &groupSizes) {
        std::map<int, std::vector<int>> id_and_person;
        for (int i{}; i < groupSizes.size(); i++) 
            id_and_person[groupSizes[i]].push_back(i);
        std::vector<std::vector<int>> final_group;
        for (auto &el: id_and_person)
            for (int j{}; j < el.second.size(); j += el.first) 
                final_group.push_back({el.second.begin()+j, el.second.begin()+j+el.first});
        return final_group;
    }
};