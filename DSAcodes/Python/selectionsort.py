import abc
x = [1,5,2,7]
 

for i in range(len(x)):
     
   
    s_indx = i
    for j in range(i+1, len(x)):
        if x[s_indx] > x[j]:
            s_indx = j
             
       
    x[i], x[s_indx] = x[s_indx], x[i]
 

print ("Sorted array")
for i in range(len(x)):
    print("%d" %x[i],end=" ")