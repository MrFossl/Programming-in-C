#include <stdio.h>

int main(void)
{
	int ratingCoutners[11], i, response;

	//set ratingCounters to zero
	for (i = 1; i <= 10; ++i)
	{
		ratingCoutners[i] = 0;
	}

	printf("Enter your response:\n");

	//get responses with ratings
	for (i = 1; i <=20; ++i)
	{
		gatint("%i", &response);

		if (response<1 || response>10)
		{
			printf("Bad response: %i\n", response);
		}
		else
		{
			++ratingCoutners[response];
		}
	}

	//print ratings and responses
	printf("\n\nRating    Number of Responses\n");
	printf("------ --------------------\n");

	for (i=1; i<=10 ; ++i)
	{
		printf("%4i%14i\n", i, ratingCoutners);
	}

	return 0;
}