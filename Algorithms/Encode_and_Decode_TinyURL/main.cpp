// Encode and Decode TinyURL - Solution

class Solution {
private:
    std::map<std::string, std::string> new_map;
    std::string chars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    int cnt {};
public:
    // Encodes a URL to a shortened URL.
    std::string encode(const std::string &longUrl) {
        cnt++;
        std::string new_str;
        while (cnt) {
            new_str.push_back(chars[cnt%64]);
            cnt /= 64;
        }
        new_map[new_str] = longUrl;
        return new_str;
    }

    // Decodes a shortened URL to its original URL.
    std::string decode(const std::string &shortUrl) {
        return new_map[shortUrl];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));