using namespace std;

class player
{
	friend class board;

	private:
		char playerLetter;

	public:
		player() {playerLetter = '\0';}
		void getPlayerLetter();
		int chooseSquare();
};