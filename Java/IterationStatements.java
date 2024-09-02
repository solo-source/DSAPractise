class IterartionStatements{
    public static void main(String[] args){
        /*
         * looking at for loops - 
         * 
         *      Logic - for(initialization; condition; incremment/decrement){
         *                  //body
         *              }
         * 
         * control flow in a for loop - 
         *  - initialization        //happens only once throught the lifetime of the loop.
         *  - condition check
         *  - body execution
         *  - condition check
         *  - body execution 
         *  .
         *  .
         *  .
         *  .
         *  until the conditoin evaluates to false.
         *
         */

         for(int i = 1; i <= 5; ++i){
            System.out.println("Hello World!");
         }        
    }           
}