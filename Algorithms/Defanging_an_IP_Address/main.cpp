// Defanging an IP Address - Solution

class Solution {
public:
    std::string defangIPaddr(std::string address) {
        std::string finalStr;
        for (int i{}; i < address.size(); i++) {
            if (address[i] == '.')
                finalStr += "[.]";
            else
                finalStr += address[i];
        }
        return finalStr;
    }
};