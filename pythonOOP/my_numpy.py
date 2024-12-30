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
# arr = np.array([1,2,3,4,5])
# print(arr[0]) # 1
# print(arr[-1]) # 5



"Slicing"
"""
-> It is way to extract a subset of data from a numpy array.
"""
# arr = np.array([1,2,3,4,5,6,7])
# print(arr[1:3]) #[2 3]
# print(arr[1:6:2]) # [2 4 6]
# print(arr[-1:-3:-1]) #[7 6]
# print(arr[::]) # [1 2 3 4 5 6 7]
# print(arr[::2]) # [1 3 5 7]
# print(arr[::-1]) # [7 6 5 4 3 2 1]

# arr = np.array([[1,2,3],[4,5,6],[7,8,9],[10,11,12]])
# print(arr[1,]) #[4 5 6]
# print(arr[:,1]) #[ 2  5  8 11]
# print(arr[1:3,1:3]) #[[5 6] [8 9]]
# print(arr[1:3,]) #[[4 5 6] [7 8 9]]
# print(arr[:,1:3])#[[ 2  3] [ 5  6] [ 8  9] [11 12]]
# print(arr[1:3,1]) #[5 8]
# print(arr[1:3,:1]) # [[4] [7]]
# print(arr[:]) #[[ 1  2  3][ 4  5  6][ 7  8  9][10 11 12]]


"Arithmetic operations on numpy arrays"
"""
"Addition"
x = np.array([[1,2],
              [3,4]])
y = np.array([[11,12],
              [13,14]])

z = x + y
print(z)

"Subtraction"
x = np.array([[1,2],
              [3,4]])
y = np.array([[11,12],
              [13,14]])

z = y - x
print(z)

"Multipication"

x = np.array([[1,2],
              [3,4]])
y = np.array([[11,12],
              [13,14]])

z = y * x
print(z)

"Matrix Multipication "
x = np.array([[1,2],
              [3,4]])
y = np.array([[11,12],
              [13,14]])

z = x @ y
print(z)

"Division " 
x = np.array([[1,2],
              [3,4]])
y = np.array([[11,12],
              [13,14]])

z = y / x
print(z)

"Floor division"
x = np.array([[1,2],
              [3,4]])
y = np.array([[11,12],
              [13,14]])

z = y // x
print(z)

"Exponentiation"
x = np.array([[1,2],
              [3,4]])
y = np.array([[11,12],
              [13,14]])

z = y ** x
print(z)

"Modulo"
x = np.array([[1,2],
              [3,4]])
y = np.array([[11,12],
              [13,14]])

z = y % x
print(z)

"Transpose "
x = np.array([[1,2],
              [3,4]])
y = np.array([[11,12],
              [13,14]])

print(x.transpose())
print(y.transpose())

"""


#Sorting in numpy arrays

# np.sort()-> it will returns a sorted copy of an array
"""
#Assending order
arr = np.array([5,6,4,2,8,3])
x = np.sort(arr)
print(x)

#Dessending order
arr = np.array([5,6,4,2,8,3])
x = np.sort(arr)[::-1]
print(x)

"""
# np.argsort() -> will return  the indices that would sort an array
"""
arr = np.array([5,6,4,2,8,3])
x = np.argsort(arr)
print(x)

"""
# ndarray.sort() -> use array name and sort it in place

"""
arr = np.array([5,6,4,2,8,3])
arr.sort()
print(arr)
"""

#Sorting in 2-D numpy array
"""
#Row wise

x = np.array([[12,11,15],[21,25,20],[18,27,16]])
y = np.sort(x)
print(y)

#Coloum wise
x = np.array([[12,11,15],[21,25,20],[18,27,16]])

y = np.sort(x,axis = 0)
print(y)

"Indexed row wise"
x = np.array([[12,11,15],[21,25,20],[18,27,16]])
y = np.argsort(x)
print(y)

"Indexed coloum wise"
x = np.array([[12,11,15],[21,25,20],[18,27,16]])
y = np.argsort(x,axis = 0)
print(y)

"IN place"
x = np.array([[12,11,15],[21,25,20],[18,27,16]])
x.sort()
print(x)

"""

"some useful functions"
"""
1) max()
x = np.array([4, 2, 3, 9, 7])
y = np.max(x)
print(y)

2) min()
x = np.array([4, 2, 3, 9, 7])
y = np.min(x)
print(y)

3) sum()
x = np.array([4, 2, 3, 9, 7])
y = np.sum(x)
print(y)

4) mean()
x = np.array([4, 2, 3, 9, 7])
y = np.mean(x)
print(y)

5) median
x = np.array([4, 2, 3, 9, 7])
y = np.median(x)
print(y)

6) prod()
x = np.array([4, 2, 3, 9, 7])
y = np.prod(x)
print(y)

7) var()
x = np.array([4, 2, 3, 9, 7])
y = np.var(x)
print(y)

8) std()
x = np.array([4, 2, 3, 9, 7])
y = np.std(x)
print(y)

"""


 