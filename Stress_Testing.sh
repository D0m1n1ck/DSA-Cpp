for((i = 1; ; ++i)); do
    echo $i   # displays the no. of test cases executed and successfully passed. 
    ./gen $i > int
    diff -w <(./x < int) <(./brute < int) || break
    # x is the name of the file to be checked and brute is the correct brute force solution.
    # make sure both the programs are compiled before running this script.
done
