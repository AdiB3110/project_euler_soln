# -*- coding: utf-8 -*-
"""
Created on Tue Sep  9 22:25:29 2025

@author: balla
"""

import benchmark

def trial():
    cnt = 0
    for  i in range(1000000):
        cnt+=1
    
benchmark.benchmark(trial)