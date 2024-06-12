my_array = [64, 34, 25, 12, 22, 11, 90, 5]
# finding the length of the array
n = len(my_array)
# looping through the array by its length
for i in range(n):
    #settting the minimum index of the array to be equal to the increment
    min_index = i
    #setting the second increment to be in the range of the increment by one up to the length of the array
    for j in range(i+1, n):
        #we compare the value of the array at the second incrementor is less than the value of the array at the minimum index
        if my_array[j] < my_array[min_index]:
            #when the condition is true then we set the minimum index of the  array to be the second incrementtor
            min_index = j 
            # we then swap the array based on the first increment and the minimum index since it is now equal to the second incremetor j 
    my_array[i], my_array[min_index] = my_array[min_index], my_array[i]
#we output the sorted array
print("Sorted array:", my_array)