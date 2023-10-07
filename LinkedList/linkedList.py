class Node:
    def __init__(self, value) -> None:
        self.value = value
        self.next = None


class LinkedList:
    def __init__(self, head=None) -> None:
        self.head = head

    def remove(self, value) -> None:
        curr = self.head
        if curr.value == value:
            self.head = curr.next
        else:
            while curr:
                if curr.value == value:
                    break
                d = curr
                curr = curr.next

            if curr == None:
                return

            d.next = curr.next
            curr = None

    def add(self, node: Node) -> None:
        curr: Node = self.head
        if curr:
            while curr.next:
                curr = curr.next
            curr.next = node

        else:
            self.head = node

    def print(self) -> None:
        curr = self.head
        while curr:
            print(curr.value)
            curr = curr.next
