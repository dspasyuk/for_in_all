
Prime Summation Performance Benchmark

This benchmark measures the execution time (in seconds) for computing the sum of all prime numbers up to 10,000,000 in different programming languages.
Results (Lower is Better)  
Language	Average Time (seconds)  
Python 3.10.12	            - 75.97 sec   
JavaScript (Node v22.12.0)	- 9.75  sec   
Rust (1.84.0)	            - 9.88  sec   
C++ (g++ 13.2.0)	        - 9.96  sec   
C (gcc 13.2.0)	            - 9.91  sec   
Go (1.18.1)	             🚀 - 3.29  sec   
Java (OJDK 17.0.14)	        - 9.84  sec   

![prime_sum](https://github.com/user-attachments/assets/16affc00-eb93-41cb-bfae-be48230163d0)

## Running the Code
C -    gcc prime.c -o prime -lm && ./prime (with -O3 or without about the same)  
C++ -  g++ prime.cpp -o prime && ./prime  
go -   go build prim.go && ./prime  
Rust - rustc -O prime.rs -o prime && ./prime  
Node - node prime.js  
Python - python3 prime.py  
Java   - javac ./prime.java && java ./prime.class  


The CPU used for this test is an AMD Ryzen 7 3700X 8-Core Processor. Here are its key specifications:

    Architecture: x86-64 (64-bit)
    Cores: 8 physical cores
    Threads: 16 (2 threads per core)
    Base Frequency: 2200 MHz
    Max Boost Frequency: 4426.17 MHz
    L1 Cache: 256 KiB L1d and 256 KiB L1i (per core)
    L2 Cache: 512 KiB (per core)
    L3 Cache: 32 MiB (shared)
    Socket: AM4 (single socket)
    CPU Family: 23 (Zen 2)
    Virtualization: AMD-V supported
    NUMA: Single NUMA node
