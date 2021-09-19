#!/usr/bin/env python
# -*- coding: utf-8 -*-

import numpy as np
import matplotlib.pyplot as plt

def make_sin(f, sec): # f:周波数(Hz), sec:時間(秒)
    point_per_sec = 1000 # 1秒あたりのサンプル数
    x = np.array([float(i/point_per_sec) for i in range(point_per_sec*sec)])
    sin_x = np.sin(2*np.pi*f*x)

    return x, sin_x

if __name__ == '__main__':
    f = 10
    sec = 1
    x, sin_x = make_sin(f, sec)
    plt.plot(x, sin_x)
    plt.show()
