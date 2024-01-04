#!/usr/bin/env python3
# set input parameter 1 as int, 2 as file path
# benchmark run time is allowed to expand less than 3%

import sys


def main():
    benchmark_bars = {"sift_1": 2255.7, "sift_4": 869230.0}
    benchmark_id = sys.argv[1]
    standard = benchmark_bars[benchmark_id]
    file_path = sys.argv[2]
    with open(file_path, 'r') as f:
        last_line = f.readlines()[-1]
    print()
    print("last line from log:", last_line)
    result = float(last_line.split(' ')[-1])
    print("average time:", result)
    print("required time:", standard)
    print()
    difference_percentage = (result - standard) / standard
    print("difference percentage: {:.2f}%".format(100 * difference_percentage))
    print()
    if difference_percentage < 0.03:
        print("benchmark result is acceptable")
        sys.exit(0)
    else:
        print("benchmark result is unacceptable")
        sys.exit(1)


if __name__ == '__main__':
    main()
