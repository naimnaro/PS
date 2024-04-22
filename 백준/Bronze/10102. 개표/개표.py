t = int(input())  # 횟수 입력
a = 0
b = 0

array = list(input())
for i in range(t):

    if( array[i] == 'A'):
        a+=1
    if( array[i] == 'B'):
        b+=1

   
       
if ( a > b):
    print("A")
elif ( b > a):
    print("B")
else:
    print("Tie")
 
    
    
 
       
