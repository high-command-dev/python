"""
numpy -> numerical python 
#It is a open source libaray to work with numerical data
"""
import numpy as np

# arr = np.array([1,2,5,3,4])
# print(arr)
# print(type(arr))

# arr = np.array((1,2,3,4,5))
# print(arr)
# print(type (arr))

"Dimensions in array"

"1D array"
# arr = np.array((20,2,3))
# print(arr)
# print(arr.ndim)

"2D array"
# arr = np.array([[20,2,3],[20,3,2]])
# print(arr)
# print(arr.ndim)
 
"3D array"
# arr=np.array([[[1,2,3], [4,5,6]],[[1,2,3], [4,5,6]]])
# print(arr)
# print(arr.ndim)

"5D array"
arr=np.array([[[[[1,2,3]]]]])
print(arr)
print(arr.ndim)