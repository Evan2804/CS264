class Container{
private:
	std::string datastruct_;
	double data;
public:
	virtual void store(double x)=0;
	virtual bool get(int index, double &data)=0;
	Container(std::string a){datastruct_=a;};
	//~Container();
};