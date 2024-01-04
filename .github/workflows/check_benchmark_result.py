#!/usr/bin/env python3
# set input parameter 1 as int, 2 as file path
# if the benchmark result is better than the standard, return 0, else return 1

import sys


def main():
    benchmark_bars = {"sift_1": 1000, "sift_4": 1000}
    benchmark_id = sys.argv[1]
    standard = benchmark_bars[benchmark_id]
    file_path = sys.argv[2]
    with open(file_path, 'r') as f:
        last_line = f.readlines()[-1]
    print()
    print("last line from log:", last_line)
    result = int(last_line.split(' ')[-1])
    print("average time:", result)
    print("required time:", standard)
    print()
    print("difference percentage: {:.2f}%".format(100 * (result - standard) / standard))
    print()
    if result < standard:
        print("benchmark result is better than standard")
        sys.exit(0)
    else:
        print("benchmark result is worse than standard")
        sys.exit(1)


if __name__ == '__main__':
    main()
