#!/usr/bin/env python
# -*- coding: utf-8 -*-

# fft.py
# sin波をFFT(高速フーリエ変換)してプロットする

import numpy as np
import matplotlib.pyplot as plt

# sin波を作る
def make_sin(f, sec, sampling_freq): # f:周波数(Hz), sec:時間(秒)
    x = np.array([float(i/sampling_freq) for i in range(sampling_freq*sec)])
    sin_x = np.sin(2*np.pi*f*x)

    return x, sin_x

if __name__ == '__main__':
    fo = 220 # sin波の周波数 [Hz]
    sec = 1 # sin波の時間 [sec]
    sampling_freq = 1000 # サンプリング周波数 [Hz]

    x, sin_x = make_sin(fo, sec, sampling_freq) # sin波を作成
    F = np.abs(np.fft.fft(sin_x[:sampling_freq])) # FFT

    # 周波数軸でプロット
    plt.plot(range(sampling_freq), F)
    plt.show()
