#include <iostream>
using namespace std;

// Інтерфейс для додавання, редагування та видалення товарів
class WarehouseOperatorInterface {
public:
    virtual void addProduct() abstract;
};

// Інтерфейс для перегляду та управління запасами товарів
class WarehouseManagerInterface {
public:
    virtual void viewStock() abstract;
};

// Інтерфейс для збирання товарів
class WarehousePickerInterface {
public:
    virtual void pickProducts() abstract;
};

// Інтерфейс для зберігання даних
class DataStorageInterface {
public:
    virtual void saveData() abstract;
};

// Інтерфейс для завантаження даних
class DataLoadingInterface {
public:
    virtual void loadData() abstract;
};

// Клас оператора складу, який реалізує інтерфейси WarehouseOperatorInterface та DataStorageInterface
class WarehouseOperator : public WarehouseOperatorInterface, public DataStorageInterface {
public:
    void addProduct() override {
        cout << "Adding a product to the warehouse...\n";
        // Реалізація функціоналу додавання товару
    }

    void saveData() override {
        cout << "Saving data...\n";
    }
};

// Клас менеджера складу, який реалізує інтерфейси WarehouseManagerInterface та DataLoadingInterface
class WarehouseManager : public WarehouseManagerInterface, public DataLoadingInterface {
public:
    void viewStock() override {
        cout << "Viewing stock...\n";
    }

    void loadData() override {
        cout << "Loading data...\n";
    }
};

// Клас збирача товарів, який реалізує інтерфейс WarehousePickerInterface
class WarehousePicker : public WarehousePickerInterface {
public:
    void pickProducts() override {
        cout << "Picking products...\n";
    }
};

int main() {
    // Приклад використання
    WarehouseOperator operator1;
    WarehouseManager manager1;
    WarehousePicker picker1;

    operator1.addProduct();
    operator1.saveData();

    manager1.viewStock();
    manager1.loadData();

    picker1.pickProducts();

    return 0;
}
