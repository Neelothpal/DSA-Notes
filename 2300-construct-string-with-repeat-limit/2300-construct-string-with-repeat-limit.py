class Solution:
    def repeatLimitedString(self, s: str, repeatLimit: int) -> str:
        from heapq import heapify, heappop, heappush
        freq = [0] * 26
        for c in s:
            freq[ord(c) - ord('a')] += 1
        pq = [(-i, -count) for i, count in enumerate(freq) if count > 0]
        heapify(pq)
        result = []
        while pq:
            ch, count = heappop(pq)
            count = -count
            use = min(repeatLimit, count)
            result.append(chr(-ch + ord('a')) * use)
            count -= use
            if count > 0:
                if pq:
                    nextCh, nextCount = heappop(pq)
                    result.append(chr(-nextCh + ord('a')))
                    if nextCount + 1 < 0:
                        heappush(pq, (nextCh, nextCount + 1))
                    heappush(pq, (ch, -count))
        return ''.join(result)