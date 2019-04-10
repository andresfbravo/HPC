#! /bin/bash
hostname
pwd

for j in {1..10}
do
	for i in 10 100 1000
	do
		./mat $i >> tiempos.csv
	done
done
