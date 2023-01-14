class Solution:
    def maxSatisfaction(self, satisfaction: list[int]) -> int:
        likeTime = 0
        total = 0
        satisfaction.sort(reverse=True)
        for like in satisfaction:
            if like + total > 0:
                total += like
                likeTime += total
            else:
                break
        return likeTime