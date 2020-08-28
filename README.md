**Comb Sort implemented in Singly Linked List**

        Task description:
        
                ❏ Present and implement comb sorting on a singly linked list
                ❏ Present input and output.
                ❏ Define all functions, data structures and variables used.
    
        Short sorting description:
        
                Comb Sort is based on the idea of bubble sorting. The difference, however, is to make
                substitutions in a different way - we try to move all large elements to the very end 
                in each iteration
  
        Short algorithm description :

                ● The span is taken as the length of the array, divides the span by 1.3, rejects the 
                  fractional part.
    
                ● All pairs of objects distant by a span are examined in turn (if they are arranged
                  non-monotonically, they are exchanged).
    
                ● The above is done in a loop by dividing the span by 1.3 until the span reaches 1
                  The algorithm is not stable (like most of the fast algorithms). This means that items of the
                  same value can be rearranged.
    
An interesting element of the method is the number 1.3, which is divided by subsequent
distances. The correctness of the algorithm is not dependent on the value of this coefficient,
but it is a critical factor when it comes to its speed.
                
       Flowchart :
        
![Flowchart](https://user-images.githubusercontent.com/60195641/88062413-1571b700-cb69-11ea-979f-2fbeac658da5.png)
