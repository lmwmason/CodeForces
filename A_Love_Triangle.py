N = int(input())
lovingMap = [0] + [int(x) for x in input().split()]

for i in range(1, N+1) :
    if i == lovingMap[lovingMap[lovingMap[i]]] :
        print("YES")
        exit(0)

print("NO")