t = int(input())
for tc in range(t):
    n = int(input())
    matrix = []
    f=0
    g=0
    for i in range(n):
        s = input()
        tmp = list(s)
        matrix.append(tmp)
    for i in range(n):
        j = n-i-1
        for p in range(n):
            if matrix[i][p] != matrix[j][p]:
                f=1
    for i in range(n):
        j = n-i-1
        for p in range(n):
            if matrix[p][i] != matrix[p][j]:
                g=1
    if f==1 or g==1:
        print("NO")
    else:
        print("YES")
