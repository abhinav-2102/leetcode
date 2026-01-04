# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def deleteMiddle(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if not head or not head.next:
            return None
        n=0
        curr=head
        while curr:
            n+=1
            curr=curr.next
        curr=head
        mid=n//2
        for i in range(mid):
            if i == mid-1:
                curr.next=curr.next.next
            curr=curr.next
        return head
