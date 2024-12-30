# Pandas store tabular data using a DataFrame
# A DataFrame is a two-dimensional labelled data structure like a table in databases.
# Every DataFrame contains rows and columns, and therfore has both a row and column index.
# Each column can have a different type of values.
"""

"""

import pandas as pd

# Manually entering the data 

std_data = [(1, 'varun', 30, 'male', 'chandigrah'),(2,'ravi',31,'male','delhi'),(3,'preeti',29,'female','jaipur'),(4,'amrit',32,'male','mumbai'),(5,'pinki',28,'female','banglore')]
# Giving labels to the data

df = pd.DataFrame(std_data,columns=['student_id','name','age','gender','address'])

"print(df)"

# Reading from a CSV File 

"df = pd.read_csv('student.csv')"
"print(df)"

# df.head()
# df.tail()
# df.shape() #number of rows and columns
# df.columns() #or df.age or df['age']
# df.size()
# df.dtypes()
# df.values()
# df.index()

#selecting multiple colums 
# print(df[['name','address']])


#selecting a single row by index label
# print(df.loc[0])

#selecting multiple rows by index labels
# print(df.loc[[0,2,4]])

#selecting single rows by integer index 
# print(df.iloc[0])

#selecting multiple rows by integer index
# print(df.iloc[[0,2]])

#Filtering rows
# print(df[df['age']>29])

#Adding a New Column to a DataFrame
# df['phone_no']=[10,20,30,40,50]
# print(df)

# To drop labels of the tables

# df = df.drop(columns=['phone_no'])
# print(df)

#Rename the 'old name' column to 'new name'

# df = df.rename(columns={'age':'student_age'})
# print(df)

#Deleting a coumn from a DataFrame
# del df['phone_no']

#Updating the values

df.loc[[0,2],'address'] = ['andaman','nicobar']
print(df)