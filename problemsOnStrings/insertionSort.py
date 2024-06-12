#creating the array to be sorted
my_array = [64, 34, 25, 12, 22, 11, 90, 5]
#finding the length of the array
n = len(my_array)
#using a loop from the range of 1 to the length of the array
for i in range(1,n):
    #setting the insertion index to the increment i
    insert_index = i
   #setting the current value to an incrementing value of the array 
    current_value = my_array[i]
#setting the range of the second loop
    for j in range(i-1, -1, -1):
        #we check whether the array looped through the second index is greater than the current value 
        if my_array[j] > current_value:
            #we move to the next index and equate the value to the previous value
            my_array[j+1] = my_array[j]
            #we set the insert_index to the current value
            insert_index = j
        else:
            break
    my_array[insert_index] = current_value

print("Sorted array:", my_array)