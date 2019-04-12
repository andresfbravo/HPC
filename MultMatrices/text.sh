#! /bin/bash
#hostname
#pwd

k = "\n"
for j in {1..10}
do
	for i in 10 100 500
	do
		./mat $i #>> tiempos.csv
	done
	echo $k 
done
