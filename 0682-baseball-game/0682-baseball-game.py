class Solution:
    def total(self,record:List[int])->int:
        sum=0
        for num in record:
            sum=sum+num
        return sum
    def calPoints(self, operations: List[str]) -> int:
        record=[]
        for i,val in enumerate(operations):
            if val=="+":record.append(record[-1]+record[-2])

            elif val=="C":record.pop()

            elif val=="D":record.append(record[-1] * 2)

            else:record.append(int(val))
        
        sum=self.total(record)
        return sum