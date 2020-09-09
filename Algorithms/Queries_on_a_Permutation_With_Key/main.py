### Queries on a Permutation With Key - Solution

class Solution:
    def processQueries(self, queries: List[int], m: int) -> List[int]:
        P = []
        for i in range(1, m+1):
            P.append(i)
        result = []
        for num in queries:
            idx = P.index(num)
            P.remove(P[idx])
            P.insert(0, num)
            result.append(idx)
        return result