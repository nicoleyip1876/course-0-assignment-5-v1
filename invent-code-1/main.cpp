#include <iostream>
#include <string>
using namespace std;

// Uncomment and fill out this function for Part 2.
float CostOfIngredient(const string ingredient) {

  float total_cost = 0;

  if (ingredient == "avocado") {
    int num_avocados;
    cout << "How many avocados are in the recipe: ";
    cin >> num_avocados;
    if (num_avocados > 0) {
      int price_avocado;
      cout << "What is the price of an avocado: ";
      cin >> price_avocado;
      int price_of_all_avocados = num_avocados * price_avocado;
      total_cost = total_cost + price_of_all_avocados;
    }
  }

if (ingredient == "tomato") {
  int num_tomatos;
  cout << "How many tomatoes are in the recipe: ";
  cin >> num_tomatos;
  if (num_tomatos > 0) {
    int price_tomato;
    cout << "What is the price of a tomato: ";
    cin >> price_tomato;
    int price_of_all_tomatoes = num_tomatos * price_tomato;
    total_cost = total_cost + price_of_all_tomatoes;
  }
}

if (ingredient == "onion") {
  int num_onions;
  cout << "How many onions are in the recipe: ";
  cin >> num_onions;
  if (num_onions > 0) {
    int price_onion;
    cout << "What is the price of an onion: ";
    cin >> price_onion;
    int price_of_all_onions = num_onions * price_onion;
    total_cost = total_cost + price_of_all_onions;
  }
}

if (ingredient == "jalepeno peppers") {
  int num_pepper;
  cout << "How many jalepeno peppers are in the recipe: ";
  cin >> num_pepper;
  if (num_pepper > 0) {
    int price_pepper;
    cout << "What is the price of an jalepeno peppers: ";
    cin >> price_pepper;
    int price_of_all_pepper = num_pepper * price_pepper;
    total_cost = total_cost + price_of_all_pepper;
  }
}

  return total_cost;

}

int main() {
  string ingredient = "avocado";
  float total_avocado_cost = CostOfIngredient(ingredient);

  ingredient = "tomato";
  float total_tomato_cost = CostOfIngredient(ingredient);

  ingredient = "onion";
  float total_onion_cost = CostOfIngredient(ingredient);

  ingredient = "jalepeno peppers";
  float total_jalapeno_cost = CostOfIngredient(ingredient);

  cout << "The total cost of the recipe will be: $" << total_tomato_cost + total_avocado_cost + total_onion_cost + total_jalapeno_cost << endl;
}
