
Bubble Sort Implementation
python
def bubble_sort(arr):
    n = len(arr)
    indices = list(range(n))
    
    for i in range(n):
        for j in range(n - i - 1):
            if arr[indices[j]] > arr[indices[j + 1]]:
                indices[j], indices[j + 1] = indices[j + 1], indices[j]
    return indices
Merge Sort Implementation
python
def merge_sort(arr, indices):
    if len(indices) > 1:
        mid = len(indices) // 2
        left_indices = indices[:mid]
        right_indices = indices[mid:]
        
        merge_sort(arr, left_indices)
        merge_sort(arr, right_indices)
        
        merge(arr, indices, left_indices, right_indices)

def merge(arr, indices, left_indices, right_indices):
    i = j = k = 0
    while i < len(left_indices) and j < len(right_indices):
        if arr[left_indices[i]] <= arr[right_indices[j]]:
            indices[k] = left_indices[i]
            i += 1
        else:
            indices[k] = right_indices[j]
            j += 1
        k += 1
    
    while i < len(left_indices):
        indices[k] = left_indices[i]
        i += 1
        k += 1
    
    while j < len(right_indices):
        indices[k] = right_indices[j]
        j += 1
        k += 1
Quick Sort Implementation
python
def quick_sort(arr, indices, low, high):
    if low < high:
        pivot_index = partition(arr, indices, low, high)
        quick_sort(arr, indices, low, pivot_index - 1)
        quick_sort(arr, indices, pivot_index + 1, high)

def partition(arr, indices, low, high):
    pivot = arr[indices[high]]
    i = low - 1
    
    for j in range(low, high):
        if arr[indices[j]] <= pivot:
            i += 1
            indices[i], indices[j] = indices[j], indices[i]
    indices[i + 1], indices[high] = indices[high], indices[i + 1]
    return i + 1
nt the Pointer Sorting algorithm and apply three classic sorting algorithms: Bubble Sort, Merge Sort, and Quick Sort. Each technique sorts the elements indirectly by manipulating pointers or indices rather than directly rearranging elements. Below is the code:

Bubble Sort Implementation
python
def bubble_sort(arr):
    n = len(arr)
    indices = list(range(n))
    
    for i in range(n):
        for j in range(n - i - 1):
            if arr[indices[j]] > arr[indices[j + 1]]:
                indices[j], indices[j + 1] = indices[j + 1], indices[j]
    return indices
Merge Sort Implementation
python
def merge_sort(arr, indices):
    if len(indices) > 1:
        mid = len(indices) // 2
        left_indices = indices[:mid]
        right_indices = indices[mid:]
        
        merge_sort(arr, left_indices)
        merge_sort(arr, right_indices)
        
        merge(arr, indices, left_indices, right_indices)

def merge(arr, indices, left_indices, right_indices):
    i = j = k = 0
    while i < len(left_indices) and j < len(right_indices):
        if arr[left_indices[i]] <= arr[right_indices[j]]:
            indices[k] = left_indices[i]
            i += 1
        else:
            indices[k] = right_indices[j]
            j += 1
        k += 1
    
    while i < len(left_indices):
        indices[k] = left_indices[i]
        i += 1
        k += 1
    
    while j < len(right_indices):
        indices[k] = right_indices[j]
        j += 1
        k += 1
Quick Sort Implementation
python
def quick_sort(arr, indices, low, high):
    if low < high:
        pivot_index = partition(arr, indices, low, high)
        quick_sort(arr, indices, low, pivot_index - 1)
        quick_sort(arr, indices, pivot_index + 1, high)

def partition(arr, indices, low, high):
    pivot = arr[indices[high]]
    i = low - 1
    
    for j in range(low, high):
        if arr[indices[j]] <= pivot:
            i += 1
            indices[i], indices[j] = indices[j], indices[i]
    indices[i + 1], indices[high] = indices[high], indices[i + 1]
    return i + 1

python
def bubble_sort(arr):
    n = len(arr)
    indices = list(range(n))
    
    for i in range(n):
        for j in range(n - i - 1):
            if arr[indices[j]] > arr[indices[j + 1]]:
                indices[j], indices[j + 1] = indices[j + 1], indices[j]
    return indices
Merge Sort Implementation
python
def merge_sort(arr, indices):
    if len(indices) > 1:
        mid = len(indices) // 2
        left_indices = indices[:mid]
        right_indices = indices[mid:]
        
        merge_sort(arr, left_indices)
        merge_sort(arr, right_indices)
        
        merge(arr, indices, left_indices, right_indices)

def merge(arr, indices, left_indices, right_indices):
    i = j = k = 0
    while i < len(left_indices) and j < len(right_indices):
        if arr[left_indices[i]] <= arr[right_indices[j]]:
            indices[k] = left_indices[i]
            i += 1
        else:
            indices[k] = right_indices[j]
            j += 1
        k += 1
    
    while i < len(left_indices):
        indices[k] = left_indices[i]
        i += 1
        k += 1
    
    while j < len(right_indices):
        indices[k] = right_indices[j]
        j += 1
        k += 1
Quick Sort Implementation
python
def quick_sort(arr, indices, low, high):
    if low < high:
        pivot_index = partition(arr, indices, low, high)
        quick_sort(arr, indices, low, pivot_index - 1)
        quick_sort(arr, indices, pivot_index + 1, high)

def partition(arr, indices, low, high):
    pivot = arr[indices[high]]
    i = low - 1
    
    for j in range(low, high):
        if arr[indices[j]] <= pivot:
            i += 1
            indices[i], indices[j] = indices[j], indices[i]
    indices[i + 1], indices[high] = indices[high], indices[i + 1]
    return i + 1