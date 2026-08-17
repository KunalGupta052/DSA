
# arr = list(map(int, input("enter array elmt: ").split()))
# largest = arr[0]

# for i in range(1, len(arr)):
#     if arr[i]>largest:
#         largest=arr[i]
# print("largest: ",largest)


# second largest:
# arr = list(map(int, input("Enter array elements: ").split()))

# largest = float('-inf')
# second_largest = float('-inf')

# for num in arr:
#     if num > largest:
#         second_largest = largest
#         largest = num
#     elif num > second_largest and num != largest:
#         second_largest = num

# if second_largest == float('-inf'):
#     print("Second largest element dose not exist")
# else:
#     print("Second largest element: ",second_largest)


#Reverse an Array
# arr = list(map(int, input("enter a number").split()))

# left = 0
# right = len(arr) - 1

# while left < right:
#     arr[left], arr[right] = arr[right], arr[left]
    
#     left += 1
#     right -= 1
# print("Reveresed array: ", *arr)


# check the array is sorted :

# arr = list(map(int, input().split()))

# is_sorted = True

# for i in range(1, len(arr)):
#     if arr[i] < arr[i - 1]:
#         is_sorted = False
#         break
# if is_sorted:
#     print("Array is sorted ")
# else:
#     print("Array is not sorted ")
    
#Remove the duplicates from sorted Array
# print("enter the array elemenet: ")

# arr = list(map(int,input().split()))
# arr.sort()
# if len(arr)==0:
#     print("Array is empty")
# else:
#     j = 1
    
    
#     for i in range(1, len(arr)):
#         if arr[i] != arr[i-1]:
#             arr[j] = arr[i]
#             j+=1
            
#     print("Array after removing duplicates:", *arr[:j])
    


# n = int(input("Enter the no. of element: "))
# arr = list(map(int, input().split()))[:n]  # Correct: map(int, iterable)
# arr.sort()
# print(arr)   


# MOve all zeros to the end:
# arr = list(map(int, input().split()))
# n = len(arr)
# arr.sort()
# j = 0 
# for i in  range(0, len(arr)):
#     if arr[i] != 0:
#         arr[i],arr[j] = arr[j],arr[i]
#         j+=1
# print(*arr)


# Find the missing number
# arr = list(map(int , input().split()))
# n = len(arr)
# arr.sort()
# summation  = 0
# Total_sum = n*(n+1)//2
# for i in range(0, n):
#     summation += arr[i]
# missing_number = (Total_sum - summation)

# if missing_number > 0:
#     print(missing_number)
# else:
#     missing_number = -1 * missing_number
#     print(missing_number)

# Find the duplicate element:
arr = list(map(int, input().split()))
arr.sort()

    


    