t = int(input())



for _ in range(t):
    a_point = 0
    b_point = 0
    for _ in range(9):
        a, b = map(int, input().split())
        a_point += a
        b_point += b
    if a_point > b_point:
        print("Yonsei")
    elif b_point > a_point:
        print("Korea")
    else:
        print("Draw")

