t = int(input())  # 횟수 입력



for _ in range(t):


     word = input()

     words = word.split()
     number = float(words[0])

     for symbol in words[1:]:
         if symbol == '@':
             number *= 3
         elif symbol == '%':
             number += 5
         elif symbol == '#':
             number -= 7

     print('%.2f'% number)
