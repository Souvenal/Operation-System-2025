# Generated by GPT-4-turbo.

import subprocess
import time
import numpy as np
import matplotlib.pyplot as plt

# 可执行文件列表
executables = ['atomic', 'mutex', 'spin']
# 参数列表
args = [1, 2, 4, 8, 16]
# 存储结果的字典
results = {exe: {arg: [] for arg in args} for exe in executables}

# 运行可执行文件并记录时间
for exe in executables:
    for arg in args:
        print(f'Run: {exe}, {arg} threads')
        times = []
        for r in range(5):  # 对每个参数运行5次
            start = time.time()
            o = subprocess.check_output([f"./{exe}", str(arg)])
            end = time.time()
            times.append(end - start)
            print(f'#{r+1} {o.decode().strip()}')
        results[exe][arg] = times
        print()

# 计算中位数和标准差
medians = {exe: [] for exe in executables}
errors = {exe: [] for exe in executables}
for exe in executables:
    for arg in args:
        medians[exe].append(np.median(results[exe][arg]))
        errors[exe].append(np.std(results[exe][arg]))

# 绘图
plt.figure(figsize=(10, 6))
for exe in executables:
    plt.errorbar(args, medians[exe], yerr=errors[exe], capsize=5, label=exe)

plt.xlabel('Argument Value')
plt.ylabel('Time (s)')
plt.title('Execution Time Comparison')
plt.xticks(args)
plt.legend()
plt.grid(True)
plt.show()
