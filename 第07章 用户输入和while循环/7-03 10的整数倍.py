'''
让用户输入一个数字，并指出这个数字是否是10的整数倍。
'''
number = input('Please input a number:')
if int(number) % 10 == 0:
    print('是10的整数倍')
else:
    print('不是10的整数倍')
