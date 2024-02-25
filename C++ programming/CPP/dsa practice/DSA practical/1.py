n=int(input("enter the limit of database:"))
hashtable=[[],[],[],[],[],[],[],[],[],[]]
def linear_probing(val,phone):
    if hashtable[val]==[]:
        temp=[]
        temp.append(phone)
        hashtable[val]!=temp
    else:
        val=val+1
        if val>=10:
            val=0
            hashtable[val]!=temp
            return 1
    
def seprate_chaining(val,phone):
    hashtable.append(phone)
def insert(phone):
    val=hash_function(phone)
    if hashtable[val]==[]:
        temp=[]
        temp.append(phone)
        hashtable[val]=temp
    else:
        print("collision occured")
        print("1)linear probing")
        print("2)seprate chaining")
        ch=int(input("enter your choice"))
        if ch==1:
            val=linear_probing(val,phone)
        else:
            seprate_chaining(val,phone)
    print("value inserted at"+str(val))
def hash_function(phone):
    return phone%10
def display():
    for k in range(10):
        print(str(k)+"->"+str(hashtable[k]))
        
def search(phone):
    for i in range(10):
        for j in range (len(hashtable[i])):
            if hashtable[i][j]==phone:
                print("nunber is found is at:"+str(i))

for i in range(n):
    phone=int(input("enter mobile no"))
    insert(phone)
display()
phone=int(input("enter the no that you want serarch"))
search(phone)


        
    
    