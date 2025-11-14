#include "H3a.h"
#include "Chef.h"
#include "ItalianChef.h"

using namespace std;

int main()
{
	{
		// Luo Chef-olio
		Chef gordonRamsay("Gordon Ramsay");
		gordonRamsay.makeSalad();
		gordonRamsay.makeSoup();
	} // Gordon Ramsay destruktori kutsutaan tässä

	// Luo ItalianChef-olio
	ItalianChef anthonyBourdain("Anthony Bourdain");
	anthonyBourdain.makeSalad();
	anthonyBourdain.makeSoup();
	anthonyBourdain.makePasta();
	cout << "name of the Italian Chef is " << anthonyBourdain.getName() << endl;

	return 0;
}
