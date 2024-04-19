count = int(input())  
array = list(map(int, input().split())) 
find = int(input()) 

answer = 0  


for num in array:
    if num == find:
        answer += 1

print(answer)
