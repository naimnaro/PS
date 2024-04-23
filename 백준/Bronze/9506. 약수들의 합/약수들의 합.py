while True:
    n = int(input())

    if n == -1:
        exit()

    sum_f = 0

    arr = []
    for i in range(1, n):
        if n % i == 0:
            arr.append(i)

    if sum(arr) == n:
        print(f"{n} = ", end="")
        for i in range(len(arr)):
            if i == len(arr) - 1:
                print(arr[i])
            else:
                print(arr[i], end=" + ")
    else:
        print(f"{n} is NOT perfect.")

    
