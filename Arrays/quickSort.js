function findPivot(arr, first, last) {
    let pivot = arr[first];
    let i = first + 1;
    let j = last;
    while (i <= j) {
        while (arr[i] <= pivot && i <= last) {
            i++
        }
        while (j >= first && arr[j] > pivot) j--;

        if (i < j) {
            swap(arr, i, j);
        }
    }

    swap(arr, j, first)
    return j

}


function quickSort(arr, first, last) {
    if (first >= last) return
    
    index = findPivot(arr, first, last);

    // left
    quickSort(arr, first, index)
    // right
    quickSort(arr, index + 1, last)
    
}

function swap(arr, i, j) {
    let temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

let arr = [-199, -2, 323, 4, 23, 56, 34]
quickSort(arr, 0, arr.length-1)
console.log(arr)