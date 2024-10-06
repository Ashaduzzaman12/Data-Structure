
graph = {
    'S': [('A', 3), ('B', 5)],
    'A': [('C', 2)],
    'B': [('D', 4)],
    'C': [('G', 1)],
    'D': [],
    'G': []
}

start='S'
goal='G'

def a_star_search(graph,start,goal,ed):
    list=[(ed(start,goal),0,start)]
    closed_set=set()

    while list:
        list.sort()
        current_f,current_g,current_node=list.pop(0)
        if current_node==goal:
            print("Goal reached:",current_node)
            print("path cost:",current_g)
            return
        closed_set.add(current_node)

        for neighbor,cost in graph[current_node]:
            if neighbor in closed_set:
                continue
            neighbor_g=current_g+cost
            neighbor_f=neighbor_g+ed(neighbor,goal)
            list.append((neighbor_f,neighbor_g,neighbor))
        print("visited node:",current_node)
    print("goal not reached")

def euclidian_dis(node,goal):
    return abs(ord(node)-ord(goal))
a_star_search(graph,start,goal,euclidian_dis)