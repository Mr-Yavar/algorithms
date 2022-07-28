<?php
function merge($p,$m,$A,$B,&$S){
$i=0;
$j=0;
$k=0;
    while($i < $p && $j < $m){
        if($A[$i] < $B[$j]){
            $S[$k]=$A[$i];
            $i++;
        }
        else{
            $S[$k]=$B[$j];
            $j++;
        }
        $k++;
    }
    if($i >= $p)
        while($j < $m){
            $S[$k]=$B[$j];
            $k++;
            $j++;
        }
    else if($j >= $m)
        while($i < $p){
            $S[$k]=$A[$i];
            $k++;
            $i++;
        }
}
function mergesort($n,&$S){
    $p = (int)($n/2) ;
	$m = $n-$p;
    $A=[];
	$B=[];
    if($n > 1){
        for($k=0;$k<$p;$k++)
         $A[$k]=$S[$k];
        
        for($k=$p;$k<($m+$p);$k++)
         $B[$k-$p]=$S[$k];
            
     mergesort($p,$A);
     mergesort($m,$B);
     merge($p,$m,$A,$B,$S);
        
    }
    
}


    
$S = [25,100,1000,14,23,1,2,8,3,9,7,22,44,55];
mergesort(14,$S);

for($k=0;$k<14;$k++)
    echo $S[$k].PHP_EOL;
