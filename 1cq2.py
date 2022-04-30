from math import floor, sqrt


test = int(input())
for t in range(test):
    n, k= input().split()
    n=int(n)
    k=int(k)
    numbers=input().split()
    #numbers=[int(i) for i in numbers]
    squares=0
    for i in range(n):
        numbers[i]=int(numbers[i])
        squares+=numbers[i]**2
    sum_square=sum(numbers)
    sum_square=sum_square**2
    diff=sum_square-squares
    #print(diff)
    answer=None
    if(diff==0):
        answer=0
    elif(diff<0):
        #positive add
        diff=-diff
        v=sqrt(diff)
        v=floor(v)
        for j in range(v,0,-1):
            #print(j)
            sum_square=(sum(numbers)+j)**2
            #print(sum_square)
            tsquares=squares
            tsquares+=j**2
            tdiff=sum_square-tsquares
            #print(tdiff)
            if(tdiff==0):
                answer=j
                break
    else:
        #negative add
        v=sqrt(diff)
        v=floor(v)
        for j in range(v,0,-1):
            sum_square=(sum(numbers)-j)**2
            squares+=j**2
            tdiff=sum_square-squares
            if(tdiff==0):
                answer=j
    if(answer==None):
        answer="IMPOSSIBLE"
    print(f"Case #{t+1}: {answer}")