def next_move(path_plan):
    path_index=[0]
    for i in range(1,15):
        if (((2**(i-1))&path_plan) > 0):
            path_index.append(path_index[i-1]+1)
        else:
            path_index.append(path_index[i-1])
    return path_index


def path_sum(triangle,path_index):
    sum = 0
    for i in range(0,len(triangle)):
        sum+=triangle[i][path_index[i]]
    return sum

triangle=[[75],
[95,64],
[17,47,82],
[18,35,87,10],
[20,4,82,47,65],
[19,1,23,75,3,34],
[88,2,77,73,7,63,67],
[99,65,4,28,6,16,70,92],
[41,41,26,56,83,40,80,70,33],
[41,48,72,33,47,32,37,16,94,29],
[53,71,44,65,25,43,91,52,97,51,14],
[70,11,33,28,77,73,17,78,39,68,17,57],
[91,71,52,38,17,14,91,43,58,50,27,29,48],
[63,66,4,68,89,53,67,30,73,16,69,87,40,31],
[04,62,98,27,23,9,70,98,73,93,38,53,60,4,23]]

path_plan=0
path_index=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0]
high_path=0

while (path_plan < (2**16)):
    #print "%d : %d" % (path_plan,path_sum(triangle,path_index))
    if (path_sum(triangle,path_index) > high_path):
        high_path = path_sum(triangle,path_index)
    #print bin(path_plan)
    path_plan+=1
    path_index=next_move(path_plan)
    #print path_index
print high_path
