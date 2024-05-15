# 引入必要的库
import sys

def process_file(input_file_path, output_file_path):
    # 打开输入文件和输出文件
    with open(input_file_path, 'r') as input_file, open(output_file_path, 'w') as output_file:
        # 逐行读取输入文件
        for line in input_file:
            # 去除行尾的换行符
            stripped_line = line.strip()
            # 格式化字符串并写入到输出文件
            output_file.write(f'Z3_enable_trace("{stripped_line}");\n')

# 主函数
if __name__ == "__main__":
    # 从命令行参数获取输入和输出文件路径
    if len(sys.argv) != 3:
        print("Usage: python script.py <input_file_path> <output_file_path>")
        sys.exit(1)

    input_file_path = sys.argv[1]
    output_file_path = sys.argv[2]
    process_file(input_file_path, output_file_path)
