# 校园物品租借管理示例
角色分工：组长负责集成，组员甲负责录入，组员乙负责统计。

本项目用于软件工程实验六 GIT 分支及标签管理，使用 GitHub 远程仓库。
同一位操作者使用 leader、member-a、member-b 三个独立克隆模拟协作角色，所有角色均为同一 GitHub 账号。

| 角色 | 工作副本 | 任务 |
| --- | --- | --- |
| 组长 | leader | 项目初始化、dev/master 集成、发布标签 |
| 组员甲 | member-a | 物品录入模块、协作更新 |
| 组员乙 | member-b | 统计模块、冲突解决 |

## 编译与运行
```sh
gcc -std=c11 -Wall -Wextra -Werror main.c item_io.c item_stats.c -o rental_demo
./rental_demo
```
Windows 可将输出文件命名为 rental_demo.exe。

## 分支约定
master 为稳定主干，dev 为集成分支，feature/input 与 feature/stat 分别开发录入和统计。
