def Nth_term(a,b, d, N) :
 
    return a +( (N - 1) * d)     

a = int(input("Enter a number : ")) 
b = int(input("Enter a number : "))   
N = int(input("Enter a number : "))  
d=b-a
  

print( "The ", N ,"th term of the series is : ",
       Nth_term(a,b, d, N))