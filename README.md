# Bank Management System

This is a simple Bank Management System project implemented in C++. The system provides basic functionalities such as account management, ATM services, and bank policies. This project was created as part of my coursework at COMSATS University.

## Key Functionalities

### Account Management
- **Display All Accounts**: Lists all accounts, grouped by branches (HBL, UBL, ABL).
  - Displays accounts in HBL.
  - Displays accounts in UBL.
  - Displays accounts in ABL.
  - Displays accounts with balance less than 1000.
  - Displays accounts with balance greater than 100,000.
  
- **Add Account**: Allows the addition of a new account by entering the name, account number, and initial balance.

- **Delete Account**: Deletes an account based on the account holder's name.

### ATM Services
- **Balance Inquiry**: Provides the balance of a specific account holder.
- **Deposit Amount**: Allows depositing an amount to a specific account.
- **Withdraw Amount**: Allows withdrawing an amount from a specific account, ensuring the balance does not go below 1000.
- **Transfer Amount**: Transfers an amount from one account to another, ensuring the balance does not go below 1000 for the sender.

### Bank Policies
- Displays the bank's policies such as no shouting, social distancing, wearing facemasks, no eating, waiting for your turn, no weapons, and avoiding talking.

## Project Files
- `main.cpp`: The main source file containing the implementation of the bank management system.
- `names.txt`: Stores the names of the account holders.
- `accountnum.txt`: Stores the account numbers.
- `balance.txt`: Stores the account balances.

## How to Run
1. Compile the `main.cpp` file using a C++ compiler.
   ```sh
   g++ -o bank_management main.cpp
