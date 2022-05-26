# List

a = [1,2,3,"Hello"]

print(a)

print(a[1])

a[1] = 2.44
print(a)

# use of for loops
'''
for i in range(1, 6):
    print(i)

for i in a:
    print(i)

'''
def fun_test(para):
    x = para * 2
    return(x)

fun_test(2)

# use of data frames (2D structures)

import pandas as pd

data = [[1,'a'],[2,'b'],[3,'c'],[4,'d'],[5,'e']]

df = pd.DataFrame(data)

print(df)

print(data)

# read an excel file 

from google.colab import files
import pandas
from pandas import ExcelWriter
from pandas import ExcelFile

uploaded = files.upload()
filename = list(uploaded.keys())[0]

dfe = pd.read_excel("data.xlsx")
print(dfe)
print(dfe.size)
print(dfe.shape)