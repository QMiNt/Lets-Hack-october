
class Node:
   def __init__(self, data=None):
      self.data = data
      self.next = None



class SLinkedList:
   def __init__(self):
      self.head = None

   def listprint(self):
      printa = self.head
      while printa is not None:
         print (printa.data)
         printa= printa.next

list = SLinkedList()
list.head = Node("first ")
s2 = Node("second ")
s3 = Node("third ")

# Link first Node to second node
list.head.next = s2

# Link second Node to third node
s2.next = s3

list.listprint()