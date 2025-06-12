function merge(arr, first,mid ,  second) {
    let temp = new Array(second - first + 1);
    let i = first;
    let j = mid + 1;
    let k = 0;
    while (i <= mid && j <= second) {
        if (arr[i] < arr[j])  temp[k++] = arr[i++]
        else temp[k++] = arr[j++];   
    }

    while (i <= mid) {
        temp[k++] = arr[i++]
    }
    while (j <= second) {
        temp[k++] = arr[j++];
    }

    let p = 0;
    let t = first;
    while (p < temp.length) {
        arr[t++] = temp[p++]     
    }  
}

function divide(arr, first, second) {

    let mid = Math.floor((second + first) / 2);
    if (first >= second) return;
    // left side
    divide(arr, first, mid);
    // right
    divide(arr, mid + 1, second);

    // merge
    merge(arr , first , mid , second)
}



let arr = [1, 20, 4, 34, 56, 76, 0, 564, 56]
divide(arr , 0 , arr.length-1)

console.log(arr)