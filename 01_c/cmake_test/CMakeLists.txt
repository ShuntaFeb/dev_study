# 1. 最低限必要なCMakeのバージョン
cmake_minimum_required(VERSION 3.10)

# 2. プロジェクト名
project(HelloCMake)

# 3. 実行ファイルを作る命令
# add_executable(作りたい実行ファイル名  ソースファイル1 ソースファイル2...)
add_executable(myapp main.c)
