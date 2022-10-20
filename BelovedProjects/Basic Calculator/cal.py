for j in range(1,200):
    a= int (input (" enter digit 1 -->"))
    b=int (input("enter digit 2-->"))
    print()
    if a%2==0:
        print ( a,"-->even number")
    else:
        print (a,"-->odd number")
    if b%2==0:
        print ( b,"-->even number")
    else:
        print (b,"-->odd number")
    print()
    c=1
    print('to change digit --> 1','\n','otherwise -->2')
    g=input('selected option ')
    if g==1:
       break
    else:
        c=c+1
    for i in range(1,200):
        j=('addition select --> +')
        c=('subtraction select--> -')
        d=('product select--> *')
        n=('division select--> /')       
        print('choose any one option below','\n',j,'\n',c,'\n',d,'\n',n)
        print()
        e= (input( " select option ->"))
        if   e=='+':
         j=(a+b)
        elif e=='-':
         j=(a-b)
        elif e=='*':
         j=(a*b)
        elif e=='/':
         j=(a/b)
        else:
            j=(" error")
        print()
        print(j," units ")
        print()
       
        
