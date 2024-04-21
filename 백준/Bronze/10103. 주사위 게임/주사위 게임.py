t = int(input()) 

a = 100
b = 100

for _ in range(t):
    c = 0
    d = 0
    c, d = map(int, input().split())
    
    if ( c > d): 
        b -= c
    elif ( d > c):
        a -= d
  
       
print(a)
print(b)
   
      
        
