<?php

function binarySearch(array $S,int $x,int $low,int $high) {


  while ($low <= $high) {
    $mid = (int)($low + ($high - $low) / 2);

    if ($S[$mid] == $x)
      return $mid;

    if ($S[$mid] < $x)
      $low = $mid + 1;

    else
      $high = $mid - 1;
  }

  return -1; // x was not found
}


$array = [1,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59];
$x=37;
$index =  binarySearch($array,$x,0,16);
if($index != -1)
        echo "array[$index]= $x" ;
else
        echo "Not found";
