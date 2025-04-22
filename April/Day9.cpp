class Solution(object):
    def rowAndMaximumOnes(self, mat):
        """
        :type mat: List[List[int]]
        :rtype: List[int]
        """
        k=0
        res=0
        for i in range(len(mat)):
            l=mat[i]
            c=l.count(1)
            if k<c:
                res=i
                k=c
        return [res,k]
