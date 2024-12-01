class Solution(object):
    

    def merger(self, num, l, mid, h):
        s1 = mid - l + 1
        s2 = h - mid
        arr, xrr = num[l:mid+1], num[mid+1:h+1]
        
        i, j, k = 0, 0, l

        while(i < s1 and j < s2):
            if arr[i] < xrr[j]:
                num[k] = arr[i]
                k+=1
                i+=1
            else:
                num[k] = xrr[j]
                k+=1
                j+=1

        while(i <s1):
            num[k] = arr[i]
            k+=1
            i+=1
        
        while(j < s2):
            num[k] = xrr[j]
            k+=1
            j+=1

    def mergeSort(self, num, l, h):
        if l < h:
            mid = (h+l)//2
            self.mergeSort(num, l, mid)
            self.mergeSort(num, mid+1, h)
            self.merger(num, l, mid, h)
    
    def merge(self, nums1, m, nums2, n):
        for i in range(n):
            nums1[m+i] = nums2[i]

        self.mergeSort(nums1, 0, m+n-1)
    
    