#include <iostream>
using namespace std;

class ele
{
     public:
     int cno,hno,type,type1,type2,x,y,add,hallide1,hallide2,reaction2,hydrogen_hallide,phosphoros_t;
     public:
     void reactant_1();
	void reaction();
};

void ele::reactant_1()
{
    cout<<"Enter the number of carbon atoms in the reactant one : \n";
    cin>>cno;
    cout<<"Whether the first reactant is a Alkane or Alkyl Alcohol ( Enter 1 or 2)\n1.Alkane\n2.Akyl Alcohol??????\n3.Halo Alkane (Wurtz Reaction)(Enter 1 or 2or 3)\n";
    cin>>type;


    switch(type)
    {
    case 1:
    hno=(2*cno)+2;
    cout<<"Your first  reactant   is : C"<<cno<<"H"<<hno;
    break;

    case 2:
    hno=(2*cno)+1;
    cout<<"Your first  reactant  is : C"<<cno<<"H"<<hno<<"OH";
    break;

    case 3:
    cout<<"Your first  reactant  is : C"<<cno<<"C"<<cno;
    break;
    }
}

void ele::reaction()
{
    if(type==1)
    {
    cout<<"The second reactant for the reaction is from 'Hallides'\n";
    cout<<"\nPlease select your  reactant \n (1 ,2 ,3 or 4) \n1.Flourine\n2.Bromine\n3.Chlorine\n4.Iodine\n";
    cin>>type1;

	switch(type1)
	{
        case 1:
		hno=(2*cno)+1;
		cout<<"Your reactant2 is flourine : F2\n";
		cout<<"\nProduct of the reaction is C"<<cno<<"H"<<(2*cno)+1<<"F\n";
		break;

		case 2:
		hno=(2*cno)+1;
		cout<<"Your reactant2 is Bromine : Br2\n";
		cout<<"\nProduct of the reaction is C"<<cno<<"H"<<(2*cno)+1<<"Br\n";
		break;

		case 3:
		hno=(2*cno)+1;
		cout<<"Your reactant2 is Chlorine :Cl2\n";
		cout<<"\nProduct of the reaction is C"<<cno<<"H"<<(2*cno)+1<<"Cl\n";
		break;

		case 4:
		hno=(2*cno)+1;
		cout<<"Your reactant2 is iodine : I2\n";
		cout<<"\nProduct of the reaction is C"<<cno<<"H"<<(2*cno)+1<<"I\n";
		break;
		}

}

    if(type==2)
    {
    cout<<"The type of compound of reactant No.2  is \n1.Hydrogen Hallide\n2.Phosphurous Trihallides\n";
    cin>>type2;

	switch(type2)
        {
		case 1:
		cout<<"your reactant2 is \n1.Hydrogen bromide\n2.Hydrogen chlroide\n3.Hydrogen iodide\n";
		cin>>hydrogen_hallide;

		switch(hydrogen_hallide)
		{
		case 1:
            hno=(2*cno)+1;
	        cout<<"Your second reactant is Bromine : HBr\n";
            cout<<"\nProduct of the reaction is C"<<cno<<"H"<<(2*cno)+1<<"Br + H2O\n";
            break;
		case 2:
            hno=(2*cno)+1;
            cout<<"Your second reactant is Chlorine :HCl\n";
            cout<<"\nProduct of the reaction is C"<<cno<<"H"<<(2*cno)+1<<"Cl + H2O\n";
            break;
		case 3:
            hno=(2*cno)+1;
            cout<<"Your second reactant is Iodine : HI\n";
            cout<<"\nProduct of the reaction is C"<<cno<<"H"<<(2*cno)+1<<"I + H2O\n";
            break;
		}
		break;


		case 2:
        cout<<"your reactant2 is \n1.Phosphoros Bromide\n2.Phosphorous Chlroide\n3.Phosphorous Iodide\n";
        cin>>phosphoros_t;

        switch(phosphoros_t)
        {
		case 1:
		hno=(2*cno)+1;
        cout<<"Your second reactant is Bromine : PBr3\n";
		cout<<"\nProduct of the reaction is C"<<cno<<"H"<<(2*cno)+1<<"Br + H3PO3\n";
		break;
		case 2:
		hno=(2*cno)+1;
		cout<<"Your second reactant is Chlorine :PCl3\n";
		cout<<"\nProduct of the reaction is C"<<cno<<"H"<<(2*cno)+1<<"Cl + H3PO3\n";
		break;
		case 3:
		hno=(2*cno)+1;
		cout<<"Your second reactant is Iodine : PI3\n";
		cout<<"\nProduct of the reaction is C"<<cno<<"H"<<(2*cno)+1<<"I + H3PO3\n";
		break;
		}


}
}
}

int main()
{
ele obj;
obj.reactant_1();
obj.reaction();
}






