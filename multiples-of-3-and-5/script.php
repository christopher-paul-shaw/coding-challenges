<?php
$number = 1;
$max = 10;
$total = 0;
while ( $number < $max) {
        if ($number % 3 == 0 || $number % 5 == 0) {
                $total+= $number;
        }
        $number++;
}
echo "Max Number: {$max} Sum: {$total}".PHP_EOL;
