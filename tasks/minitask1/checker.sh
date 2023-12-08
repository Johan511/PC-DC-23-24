g++ -std=c++17 minitask1-tcgen.cpp -o _tcgen
g++ -std=c++17 minitask1.cpp -o _soln

for n in {1..100};
do
    ./_tcgen > _tc
    ./_soln < _tc > _outputted
    python3 minitask1.py < _tc > _expected
    cmp --silent _outputted _expected || (echo "files are different" && exit)
    echo "Test $n Passed"
done
rm _tc _outputted _expected _tcgen _soln
