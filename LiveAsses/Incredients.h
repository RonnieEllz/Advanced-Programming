#include<iostream>

using namespace std;

enum TypeOfIngredient{
    None,
    Flour,
    Egg,
    Salt,
    BakingPowder,
    Milk

};

class Ingredient{
private:
    TypeOfIngredient None;
    TypeOfIngredient Flour;
    TypeOfIngredient Egg;
    TypeOfIngredient Salt;
    TypeOfIngredient Bakingpowder;
    TypeOfIngredient Milk;
    int Amount;
public:
void SetFlour(TypeOfIngredient wFlour){
    None = wFlour;
}
TypeOfIngredient Ingredient::GetFlour(){
    return None;
}
void SetEgg(TypeOfIngredient wEgg){
    Egg =wEgg;
}
TypeOfIngredient Ingredient::GetEgg(){
    return Egg;
}
void SetSalt(TypeOfIngredient wSalt){
    Egg =wSalt;
}
TypeOfIngredient Ingredient::GetSalt(){
    return Salt;
}void SetBakingpower(TypeOfIngredient wBakingpowder){
    Egg =wBakingpowder;
}
TypeOfIngredient Ingredient::GetBakingpowder(){
    return Bakingpowder;
 void SetEgg(TypeOfIngredient wEgg){
    Egg =wEgg;
}
TypeOfIngredient Ingredient::GetEgg(){
    return Egg;
};
void SetMilk(TypeOfIngredient wMilk){
    Egg =wmilk;
};
TypeOfIngredient Ingredient::GetMilk(){
    return Milk;
};
}
    //Constructors
    Ingredient();
    Ingredient(TypeOfIngredient wFlour, TypeOfIngredient wEgg, TypeOfIngredient wSalt, TypeOfIngredient wBakingPowder, TypeOfIngredient wMilk);
    //Destructor
    ~Ingredient();

    string Ingredient::IngredientName(){
        return None = wFlour;
    } 

};