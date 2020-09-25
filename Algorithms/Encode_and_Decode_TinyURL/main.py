### Encode and Decode TinyURL - Solution

class Codec:
    def __init__(self):
        self.new_map = defaultdict(str)
        self.chars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"
        self.cnt = 0

    def encode(self, longUrl: str) -> str:
        """Encodes a URL to a shortened URL.
        """
        self.cnt += 1
        str_list = []
        while self.cnt:
            str_list.append(self.chars[self.cnt%64])
            self.cnt //= 64
        new_str = "".join(str_list)
        self.new_map[new_str] = longUrl
        return new_str

    def decode(self, shortUrl: str) -> str:
        """Decodes a shortened URL to its original URL.
        """
        return self.new_map[shortUrl]

# Your Codec object will be instantiated and called as such:
# codec = Codec()
# codec.decode(codec.encode(url))