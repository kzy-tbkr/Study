#!/usr/bin/env python
# -*- coding: utf-8 -*-

# fft.py
# sin波を作ってプロットする

import numpy as np
import matplotlib.pyplot as plt

def make_sin(f, sec, sampling_freq): # f:周波数(Hz), sec:時間(秒)
    x = np.array([float(i/sampling_freq) for i in range(sampling_freq*sec)])
    sin_x = np.sin(2*np.pi*f*x)

    return x, sin_x

if __name__ == '__main__':
    f = 220
    sec = 1
    sampling_freq = 1000

    x, sin_x = make_sin(f, sec, sampling_freq)
    plt.plot(range(sampling_freq), np.abs(np.fft.fft(sin_x[:sampling_freq])))
    plt.show()
