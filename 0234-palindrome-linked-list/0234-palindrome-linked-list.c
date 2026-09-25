bool isPalindrome(struct ListNode* head)
{
    struct ListNode* slow = head;
    struct ListNode* fast = head;

    // Find the middle
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    // Reverse the second half
    struct ListNode* prev = NULL;
    struct ListNode* next;

    while (slow != NULL)
    {
        next = slow->next;
        slow->next = prev;
        prev = slow;
        slow = next;
    }

    // Compare first half and reversed second half
    struct ListNode* first = head;
    struct ListNode* sec = prev;

    while (sec != NULL)
    {
        if (first->val != sec->val)
        {
            return 0;
        }

        first = first->next;
        sec = sec->next;
    }

    return 1;
}