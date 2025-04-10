#include <iostream>

using namespace std;

struct Product {
 int id ,quantity, price;
 char name[50];
};

void displayProducts(Product products[], int productCount);
bool isIdAlreadyExist(Product products[],int productCount,int tempId);

main(){
	int numOfProduct, tempId;
	bool isIdDuplicate;
	
	do{
		cout << "Enter number of products : ";
		cin >> numOfProduct;
		
		if(numOfProduct < 1){
			cout  << "Invalid number of product. RE-";
		}
	}while(numOfProduct < 1);
	
	struct Product products[numOfProduct];

	for(int i = 0; i < numOfProduct ; i ++){
		cout << "Enter detail for product " << i + 1 << " :" <<endl;
		cout << "-------------------------------------" << endl;
		
		do{
			cout << "ID : ";
			cin >> tempId;
			if(tempId < 1){
				cout << "Invalid Id. RE-enter ID again." << endl;
			}
			else{
		
				isIdDuplicate = isIdAlreadyExist(products,i ,tempId);
				if(isIdDuplicate){
					cout << "ID Already Exist. RE-enter ID again." << endl;
				}
				else{
					products[i].id = tempId;
				}
			}
		}while(tempId < 1 || isIdDuplicate);

		cin.ignore();
		cout << "Name : ";
		cin.getline(products[i].name,50);
		
		do{
			cout << "Quantity : ";
			cin >> products[i].quantity;
			if(products[i].quantity < 1){
				cout << "Invalid Quantity. Re-enter again." <<endl;
			}
		}while(products[i].quantity < 1);
		
		do{
			cout << "Price : ";
			cin >> products[i].price;
			if(products[i].price < 1){
				cout << "Invalid Price. Re-enter again." <<endl;
			}
		}while(products[i].price < 1);
	}
	
	cout << endl;
	displayProducts(products,numOfProduct);
}

void displayProducts(Product products[],int productCount){
	cout << "All Products Details:" <<endl;
	cout << "-------------------------------------" << endl;
	for(int i = 0 ; i < productCount ; i ++) {
		cout << "ID : " << products[i].id << ", ";
		cout << "Name : " << products[i].name << ", ";
		cout << "Quantity : " << products[i].quantity << ", ";
		cout << "Price : " << products[i].price << endl;
	}
	cout << "-------------------------------------" << endl;
	cout << endl;
	
	int productId, productIndex;
	
	cout << "Enter product ID to update stock : ";
	cin  >> productId;
	cout << "-------------------------------------" << endl;
	
	for(int i = 0; i < productCount ; i ++){
		if(products[i].id == productId){
			productIndex = i;
		}
	}
	
	if(products[productIndex].id == productId){
		cout << "Enter new quantity : " ;
		cin >> products[productIndex].quantity ;
		cout << "Stock updated successfully!" << endl;
	}
	else{
		cout << "Product not Found." <<endl;
	}
	
	cout << endl;
	cout << "Most Expensive Product : " << endl;
	cout << "-------------------------------------" << endl;
	
	for(int i = 0; i < productCount ; i ++){
		if(i == 0){
			productIndex = 0;
		}
		else if(products[i].price > products[i-1].price){
			productIndex = i;
		}
	}

	cout << "ID : " << products[productIndex].id << ", ";
	cout << "Name : " << products[productIndex].name << ", ";
	cout << "Price : " << products[productIndex].price << endl;
}

bool isIdAlreadyExist(Product products[],int productCount,int tempId){
	int productIndex;
	
	if(productCount == 0){
		return false;
	}
	
	for(int i = 0; i < productCount ; i ++){
		if(products[i].id == tempId){
			productIndex = i;
			return true;
		}
	}

	return false;
}

