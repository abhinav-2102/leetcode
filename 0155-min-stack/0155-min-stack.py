class MinStack:

    def __init__(self):
        self.s,self.stack=[],[]

    def push(self, val: int) -> None:
        self.s.append(val)
        if not self.stack or val<=self.stack[-1]:
            self.stack.append(val)

    def pop(self) -> None:
        if self.s.pop()==self.stack[-1]:
            self.stack.pop()

    def top(self) -> int:
        return -1 if not self.s else self.s[-1]

    def getMin(self) -> int:
        return -1 if not self.stack else self.stack[-1]


# Your MinStack object will be instantiated and called as such:
# obj = MinStack()
# obj.push(val)
# obj.pop()
# param_3 = obj.top()
# param_4 = obj.getMin()