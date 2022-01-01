# create a linked list where the values are s->u->s->None
# Then print the linked list

class Node:
    def __init__(self,data):
        self.data = data
        self.next = None
        
class LinkedLists:
    def __init__(self):
        self.head = None
        
    def printList(self):
        currentValue = self.head
        
        while currentValue != None:
            print(currentValue.data)
            currentValue = currentValue.next
        
if __name__ == '__main__':
    
    lList = LinkedLists()
    
    lList.head = Node('s')
    secondValue = Node('u')
    thirdValue = Node('s')
    
    lList.head.next = secondValue
    secondValue.next = thirdValue
    
    lList.printList()