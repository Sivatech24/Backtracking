def backtrack(elements, current=[]):
    if not elements:
        print(current)
        return
    for i in range(len(elements)):
        chosen=elements[i]
        current.append(chosen)

        next_elements=elements[:i]+elements[i+1:]
        backtrack(next_elements,current)
        current.pop

elements =[1,2,3]
backtrack(elements)