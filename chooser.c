

/*
 Problem Statement for Chooser


Problem Statement

    	
PROBLEM STATEMENT
When putting together a problem set, a writer must keep in mind the difficulty
and length of a problem.  A good problem set is one with an easy, a middle, and
a hard problem, but doesn't take too much or too little time to complete.

You will be given an input of three int[].  The first int[] consists of easy
problem times, the second consists of middle problem times, and the third
consists of hard problem times.  Return the number of legal problem set
combinations, where a legal set contains exactly 1 easy, 1 middle and 1 hard
problem, and the total time is between 60 and 75 inclusive.

DEFINITION
Class name: Chooser
Method name: numSets
Parameters: int[], int[], int[]
Returns: int
The method signature is:
int numSets(int[] easy, int[] middle, int[] hard)
Be sure your method is public.

TopCoder will ensure the following:
*Each int[] will contain between 0 and 10 elements, inclusive.
*Each element of easy will be an int between 5 and 15, inclusive.
*Each element of middle will be an int between 15 and 45, inclusive.
*Each element of hard will be an int between 30 and 55, inclusive.

EXAMPLES
{5,10,15}
{15,25}
{45}
There are 3*2*1=6 possible sets.  However, since 10+25+45=80 and 15+25+45=85,
two of the sets are illegal, so the method returns 4.

{5,5,5}
{15,15,15}
{45,45,45}
There are 3*3*3=27 possible sets, all legal.  The return value is 27.

{5,5,5}
{15,15,15}
{45,45,35}
There are 27 possible sets again, but for this input any set with the 35 minute
hard problem is too short.  Therefore there are only 3*3*2=18 legal sets, and
the return value is 18.

{}
{15,25}
{30,35,40}
Since there are no easy problems, there are no legal problem sets.  The return
value is 0.
 
Definition

    	
Class:	Chooser
Method:	numSets
Parameters:	int[], int[], int[]
Returns:	int
Method signature:	int numSets(int[] param0, int[] param1, int[] param2)
(be sure your method is public)
    
*/



int numSets(int[] param0, int[] param1, int[] param2)
{
	int count;
        int sum;
	int paramnum[3];
	int i,j,k;
	for( i = 0; i <3; i++)
		paramnum[i] = 0;
	i = 0;
	while(param0[i] >= 5 && param0[i] <= 15)
	{
		i++;
		p0++;
	}
	i = 0;
	while(param1[i] >= 15 && param1[i] <= 45)
	{
		i++;
		p1++;
	}
	i = 0;
	while(param0[i] >= 30 && param0[i] <= 55)
	{
		i++;
		p2++;
	}
	
	if(!(paramnum[0] && paramnum[1] && paramnum[2] ))
		return 0;
	for( i = 0; i < paramnum[0]; i++)
		for( j = 0; j < paramnum[1]; j++)
			for( k = 0; k < paramnum[2]; k++)
			{
				sum = param0[i] + param1[j] + param2[k];
				if(sum <= 75 && sum >= 60 )
					count++;
			}
	return count;
	
}