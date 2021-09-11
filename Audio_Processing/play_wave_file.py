#!/usr/bin/env python
# -*- coding: utf-8 -*-

# play_wave_file.py
# wave fileを再生する
# 参考：https://people.csail.mit.edu/hubert/pyaudio/docs/

import pyaudio
import wave
import sys

CHUNK = 1024

file_name = 'hoge.wav'

try:
    wave_file = wave.open(file_name, 'rb')
except FileNotFoundError:
    print('ファイル名が間違っているかも？')
    exit()

# wave fileの基本情報
print('channnle:', wave_file.getnchannels())
print('frame rate:', wave_file.getframerate(), '[Hz]')

# pyaudioのインスタンス
p = pyaudio.PyAudio()

# open stream
stream = p.open(format=p.get_format_from_width(wave_file.getsampwidth()),
                channels=wave_file.getnchannels(),
                rate=wave_file.getframerate(),
                output=True)

# read data
data = wave_file.readframes(CHUNK)

# play stream
while len(data) > 0:
    stream.write(data)
    data = wave_file.readframes(CHUNK)

# stop stream
stream.stop_stream()
stream.close()

# close PyAudio
p.terminate()
