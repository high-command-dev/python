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
# arr=np.array([[[[[1,2,3]]]]])
# print(arr)
# print(arr.ndim)

"from range"
# arr = np.arange(11,20)
# print(arr)

"from range and reshaping"
# arr = np.arange(1,7).reshape((3,2))
# print(arr)

" making a sparse matrix"
# arr = np.zeros((4,2),dtype=int)
# print(arr)

"opposite of sparse"
# arr = np.ones((4,2),dtype=int)
# print(arr)


"Various Attributes of numpy Array"
"""
(i) ndim
(ii) shape
(iii) size
(iv) dtype
(v) itemsize
"""
"for integer"
# list1 = [1,2,3,4,5]
# arr = np.array(list1)
# print(arr) 
# print(arr.ndim)
# print(arr.shape)
# print(arr.size)
# print(arr.dtype)
# print(arr.itemsize)

"for float"

# list1 = [1.,2.,3.,4.,5.]
# arr = np.array(list1)
# print(arr) 
# print(arr.ndim)
# print(arr.shape)
# print(arr.size)
# print(arr.dtype)
# print(arr.itemsize)

"Indexing"
arr = np.array([1,2,3,4,5])
print(arr[0]) # 1
print(arr[-1]) # 5

