word = list(input())

h = 10


for i in range(len(word)):  
    if i > 0 :
        if word[i-1] == '(' and  word[i] == ')':
            h += 10

      
        elif word[i-1] == '('and word[i] == '(':

            h += 5
        if word[i-1] == ')' and  word[i] == ')':
            h += 5

      
        elif word[i-1] == ')'and word[i] == '(':

            h += 10


print(h)

