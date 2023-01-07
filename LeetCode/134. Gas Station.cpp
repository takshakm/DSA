class Solution {
public:
    // a function to add elements of vectors is created
    int sum(vector<int> name_of_vector){
        int result=0;
        for(int j=0; j<name_of_vector.size(); j++){
            result= result+name_of_vector[j];
        }
        return result;
    }
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        //edge case
        if(sum(gas)<sum(cost)){
            return -1;
        }
        // variable total declared
        int total =0;
        // variable result declared
        int res=0;

        // loop iterates over gas vector
        for(int i=0; i<gas.size(); i++){
            // total adds up with the difference of gas at i and cost at i
            total+=(gas[i]-cost[i]);

            // as total becomes 0
            if(total<0){
                total=0;
                res=i+1;    // result becomes the next place where the loop breaks
            }
        }
        // returns resultant place
        return res;
    }
};