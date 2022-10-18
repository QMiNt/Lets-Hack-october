#1 aliasing list (1D)
a=['hindi','english','maths','ip']    # list 1  
b=a
print(b)
print(a)
b[0]='sanskrit'
print(b)
print(a)

#2 aliasing list (2D)

a=[('english',80),('hindi',60),('maths',95),('science',90)]    # list 1 
print(a[1])
print(a[1][0])
print(a[1][1])

#3 traversing list
a=['c','o','m','p','u','t','e','r']     # list 1
n=len(a)
for i in range(n):
    print (a[i])
print(n)


#4 appending list 

a=[10,20,30,40]                 # list 1   
b=[40,50,60]                    # list 2
a.append(50)                    #appending
b.append(10)                    #appending
print(a)
print(b)

#5 comparing lists

a=[10,20,30,50]
b=[40,50,60]
if a[0]>b[0]:
    print('true')
else :
    print('false')
if a[3]>b[0]:
    print('true')
else :
    print('false')


#6 concatination

a=[10,20,30,40]                 # list 1      
b=[40,50,60]                    # list 2
c=a+b                           # concatination
print(c)                        # print

#7 extend command

a=[10,20,30,40]                 # list 1      
b=[40,50,60]                    # list 2
a.extend(b)                     # extend function
print(a)

#8 index command

a=[10,20,30,40]                 # list 1      
b=[40,50,60]                    # list 2
a.index(20)                     # index command
b.index(60)                     # index command
print(a)
print(b)

#9 insert command

a=['sam','dev','ram']                 # list 1      
a.insert(2,'tom')                     #insert command
print(a)

#10 length function

a=[10,20,30,40]                 # list 1      
b=[40,50,60]                    # list 2
print(len(a))                   # length function
print(len(b))                   # length function

#11 membership testing

a=[10,20,30,40]                 # list 1      
b=[40,50,60]                    # list 2
print (10 in a)                 #membership testing
print (10 in b)                 #membership testing

#12 revere command

a=[10,20,30,40]                 # list 1      
b=[40,50,60]                    # list 2
a.reverse()                     # revere command
b.reverse()                     # reverse command
print(a)
print(b)

#13 update command 

a=[10,20,30,40]                 # list 1      
a[0]=1
print (a)
b=[a[1:3]]
print(b)

