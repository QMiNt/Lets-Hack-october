 
import java.util.*;  
     
class Node{  

  int key;  
   
  Node left, right;  
    
  public Node(int item)  
  {  
    key = item;  
    left = right = null;  
  }  
   
 }  
    
   
class BinaryTree{  
   
  static Node root_node;  
   
  
  BinaryTree(int key)  
  {  
    root_node = new Node(key);  
  }  
   
  BinaryTree()  
  {  
    root_node = null;  
  }  
    
   
 public static void printTree()  
    {  
        int h = height(root_node);  
        int i;  
        for (i=1; i<=h; i++){  
            printCurrentLevel(root_node, i);  
            System.out.println();  
          }  
    }  
    
    public static int height(Node root){  
          
        if (root == null)  
           return 0;  
        else  
        {  
            int lheight = height(root.left);  
            int rheight = height(root.right);  
               
            if (lheight > rheight)  
                return(lheight+1);  
            else   
                return(rheight+1);  
        }  
    }  
    
   
   public static void printCurrentLevel (Node root ,int level)  
    {  
        if (root == null)  
            return;  
        if (level == 1)  
            System.out.print(root.key + " ");  
        else if (level > 1)  
        {  
            printCurrentLevel(root.left, level-1);  
            printCurrentLevel(root.right, level-1);  
        }  
    }  
   
   
  public static void main(String[] args){  
   
      
    BinaryTree tree = new BinaryTree();  
   
    tree.root_node = new Node(150);  
   
    tree.root_node.left = new Node(250);  
    
    tree.root_node.right = new Node(270);  
     
    tree.root_node.left.left = new Node(320);  
   
    tree.root_node.left.right = new Node(350);  
   
    
    System.out.println("Printing the nodes of tree level wise :");  
    System.out.println("Level order traversal : ");  
    tree.printTree();  
   
    int h = tree.height(tree.root_node)  
  
    System.out.println("The height of the Binary tree is : " + h );  
  
  }  
}  
