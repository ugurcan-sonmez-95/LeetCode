### Group the People Given the Group Size They Belong To - Solution

class Solution:
    def groupThePeople(self, groupSizes: List[int]) -> List[List[int]]:
        id_and_person = collections.defaultdict(list)
        for person, id_ in enumerate(groupSizes):
            id_and_person[id_].append(person)
        final_group = [val[i:i+key] for key, val in id_and_person.items() for i in range(0, len(val), key)]
        return final_group