def sortcheck(L):
    for i in range(len(L) - 1):
        for j in range(i + 1, len(L)):
            if L[j] < L[i]:
                return False
        return True


A = [12, 4, 5, 10, 2]
print(A, "is sorted: ", sortcheck(A))
B = [2, 4, 6, 8, 12, 45]
print(B, "is sorted: ", sortcheck(B))
