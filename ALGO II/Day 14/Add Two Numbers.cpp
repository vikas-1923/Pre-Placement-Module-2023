class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        
        carry = 0
        ans = ListNode()
        res = ans
        while l1 and l2:
            ans.next = ListNode((l1.val + l2.val + carry)%10)
            carry = (l1.val + l2.val + carry)//10
            l1 = l1.next
            l2 = l2.next
            ans = ans.next
        while l1:
            ans.next = ListNode((l1.val + carry)%10)
            carry = (l1.val + carry)//10
            l1 = l1.next
            ans = ans.next
        while l2:
            ans.next = ListNode((l2.val + carry)%10)
            carry = (l2.val + carry)//10
            l2 = l2.next
            ans = ans.next   
        if carry:
            ans.next = ListNode(carry)
        
        return res.next
