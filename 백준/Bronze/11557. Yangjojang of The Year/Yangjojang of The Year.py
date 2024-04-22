t = int(input())



for _ in range(t):

    t2 = int(input())

    max_b = 0

    for _ in range(t2):
        a , b = input().split()
        b = int(b)

        if b > max_b:
            team = a
            max_b = b

    print(team)
        
   

