using namespace std;

class IIdentifiable
{
	public:
	virtual string getId() =0;
	virtual string getType() =0;
};
