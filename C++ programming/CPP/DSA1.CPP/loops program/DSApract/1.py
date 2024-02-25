n = int(input("Enter the limit of the database: "))
hashtable=[[],[],[],[],[],[],[],[],[],[]]
def linear_probing(val,phone):
	temp=[]
	temp.append(phone)
	if hashtable[val]!=[]:
		val=val+1
		if val>=10:
			val=0
	hashtable.insert(val,temp)
	return val

def separate_chaining(val,phone):
	hashtable[val].append(phone)

def insert_val(phone):
	val=hash_fun(phone)
	if hashtable[val]==[]:
		temp=[]
		temp.append(phone)
		hashtable.insert(val,temp)
	else:
		val1=int(input("\n**Collision Occured**\n1.Linear Probing\n2.Separate Chaining"))
		if val1==1:
			val=linear_probing(val,phone)
		if val1==2:
			separate_chaining(val,phone)
	print("\nInserted at hash value: "+str(val))
	
def hash_fun(phone):
	return phone%10

def display_hashtable():
        for k in range(10):
            print(str(k) + "->" + str(hashtable[k]))
	
def search_num(phone):
	for i in range(10):
		for j in range(len(hashtable[i])):
			if hashtable[i][j]==phone:
				return i

for i in range(n):
	pval=int(input("\nEnter phone number: "))
	insert_val(pval)
print("\nHash Table: ")
display_hashtable()
phone=int(input("\nEnter phone number to be searched:"))
print("\nFound at position: ",search_num(phone))