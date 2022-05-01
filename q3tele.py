for x in range(int(input())):
    z = 1000000
    b = []
    for i in range(3):
        b.append([int(_) for _ in input().split()])
    c = 1
    d = [0]*4
    e = [0]*4
    for i in range(4):
        t = min(b[0][i], b[1][i], b[2][i])
        e[i] = t
    if sum(e) > z:
        t = 0
        for i in range(4):
            if t <= 1000000:
                t1 = 1000000 - t
                d[e.index(min(e))] = min(t1, min(e))
                t += min(t1, min(e))
            e[e.index(min(e))] = max(e) + 1
        c = 1
    elif sum(e) < z:
        c = 0
    else:
        d = e
        c = 1
    print('Case #{}:'.format(x+1), end = " ")
    if c:
        for i in d:
            print(i, end = ' ')
        print()
    else:
        print('IMPOSSIBLE')