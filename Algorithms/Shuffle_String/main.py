### Shuffle String - Solution

class Solution:
    def restoreString(self, s: str, indices: List[int]) -> str:
        new_s = ['a']*len(s)
        for i in range(len(s)):
            new_s[indices[i]] = s[i]
        final_s = "".join(new_s)
        return final_s