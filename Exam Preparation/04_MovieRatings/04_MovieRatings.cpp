#include <iostream>
#include <climits>
#include <string>

using namespace std;

int main()
{
	string movieName;
	double movieRaiting;

	int movieCount;
	cin >> movieCount;
	cin.ignore();

	string minRatingMovie;
	string maxRatingMovie;

	double minRating = INT_MAX;
	double maxRating = INT_MIN;
	double ratingSum = 0;

	for (int movie = 1; movie <= movieCount; movie++)
	{
		getline(cin, movieName);
		cin >> movieRaiting;
		cin.ignore();

		if (movieRaiting < minRating)
		{
			minRatingMovie = movieName;
			minRating = movieRaiting;
		}

		if (movieRaiting > maxRating)
		{
			maxRatingMovie = movieName;
			maxRating = movieRaiting;
		}

		ratingSum += movieRaiting;
	}

	cout.setf(ios::fixed);
	cout.precision(1);

	cout << maxRatingMovie << " is with highest rating: " << maxRating << endl;
	cout << minRatingMovie << " is with lowest rating: " << minRating << endl;
	cout << "Average rating: " << ratingSum / movieCount << endl;
	return 0;
}