list=[3,5,2,6,2]
lengthOfList=len(list)
for i in range(lengthOfList-1):
    swapped=False
    for j in range(lengthOfList-i-1):
      
        if list[j]>list[j+1]:
            list[j],list[j+1]=list[j+1],list[j]
            swapped=True
    if not swapped:
        break
print(" the list is swapped through bubble sort",list)
    