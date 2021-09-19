#!/usr/bin/env python
# -*- coding: utf-8 -*-

import numpy as np
import matplotlib.pyplot as plt

point_per_sec = 1000
sec = 1
f = 10

x = np.array([float(i/point_per_sec) for i in range(point_per_sec*sec)])
sin = np.sin(2*np.pi*f*x)

plt.plot(x, sin)
plt.show()
