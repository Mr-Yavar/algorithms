function binarySearch(S,x,low,high) {
//S must be array
//x what you want to search

  while (low <= high) {
    var mid = Math.floor((low + (high - low) / 2));

    if (S[mid] == x)
      return mid;

    if (S[mid] < x)
      low = mid + 1;

    else
      high = mid - 1;
  }

  return -1; // x was not found
}

var array = [1,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59];
var x=37;
var index =  binarySearch(array,x,0,16);
if(index != -1)
        console.log(`array[${index}] = ${x}`) ;
else
        console.log("Not found");
