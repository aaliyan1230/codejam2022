T=int(input())
for i in range(T):
    S=input()
    elements=list()
    combinations=list()
    length=len(S)
    elements_highlighted=[0 for x in range(length)]
    for j in S:
        elements.append(j)
    for j in range(length):
        elements_highlighted=[0 for x in range(length)]
        elements_highlighted[j]=1
        for k in range(length):
            sampleString=""
            elements_highlighted[k]=1
            if(elements_highlighted[k]==1):
                sampleString+=2*elements[k]
            else:
                sampleString+=elements[k]
            combinations.append(sampleString)
    answer=""
    print(combinations)
    for c in combinations:
        if(c<answer):
            answer=c
    print(answer) 
    print("aali">"")       





