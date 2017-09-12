#include <string>

class Student {
	
	private:
		int		ID;
		string 	name;
		float 	p1;
		float 	p2;
		//float	media;
	public:
		void setID(int ID);
		void setName(string name);
		void setP1(float p1);
		void setP2(float p2);
		int getID();
		string getName();
		float getP1();
		float getP2();
		float getMedia();
};
