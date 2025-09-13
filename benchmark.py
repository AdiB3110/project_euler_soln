# -*- coding: utf-8 -*-
"""
Created on Tue Sep  9 22:25:02 2025

@author: balla
"""

import time

def benchmark(func, *args, **kwargs):
    start = time.perf_counter()

    func(*args, **kwargs)

    end = time.perf_counter()
    duration_ms = (end - start) * 1000

    print(f"Execution time of {func.__name__}: {duration_ms:.2f} ms")
