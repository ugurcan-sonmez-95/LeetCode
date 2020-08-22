### Defanging an IP Address - Solution

class Solution:
    def defangIPaddr(self, address: str) -> str:
        new_str = address.split(".")
        defanged_ip = "[.]".join(new_str)
        return defanged_ip