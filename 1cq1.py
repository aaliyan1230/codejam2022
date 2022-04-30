test=int(input())
for t in range(test):
    answer=None
    n=int(input())
    words=input().split()
    firsts=[]
    lasts=[]
    for f in range(n):
        firsts.append(words[f][0])
        lasts.append(words[f][-1])
    for l in lasts:
        if(l in firsts):
            

    print(f"Case #{t+1}: {answer}")