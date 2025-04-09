class Solution {
    public List<String> fizzBuzz(int n) {
         List<String> List = new ArrayList<>(n);
        for(int i=1;i<=n;i++)
        {
            if(i%5==0 && i%3==0)
            {
                List.add("FizzBuzz");;
            }
            else if(i%3==0)
            {
                List.add("Fizz");
            }
            else if(i%5==0)
            {
                List.add("Buzz");;
            }
            else
            {
                String str = String.valueOf(i); 
                List.add(str); 
            }
        }    
        return List;    
    }
}