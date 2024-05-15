import os

def list_files_to_txt(dir_path, output_file):
    """
    将给定目录下的所有文件路径写入到一个文本文件中。
    参数:
    dir_path -- 要遍历的目录路径
    output_file -- 输出文本文件的路径
    """
    with open(output_file, 'w') as file:
        for root, dirs, files in os.walk(dir_path):
            for name in files:
                file_path = os.path.join(root, name)
                file.write(file_path + '\n')

# 使用示例
directory_path = '/home/mok/work_space/random_z3/random_assign/16_bench'  # 将这里替换为你的目录路径
output_text_file = 'benchmark_list.txt'  # 将这里替换为你的输出文件路径
list_files_to_txt(directory_path, output_text_file)
