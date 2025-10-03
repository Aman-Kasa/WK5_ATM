![ATM_Simulator_C](https://imgs.search.brave.com/VARPtIwe4_YE1m2_Wb8a_Y1uIfhDdfFfbK-e7luKNio/rs:fit:860:0:0:0/g:ce/aHR0cHM6Ly9pbWFn/ZXMudW5zcGxhc2gu/Y29tL3Bob3RvLTE2/MTE2MDU4NjI2NTEt/YzkxYjg3NzhjZTAx/P2ZtPWpwZyZxPTYw/Jnc9MzAwMCZpeGxp/Yj1yYi00LjEuMCZp/eGlkPU0zd3hNakEz/ZkRCOE1IeHpaV0Z5/WTJoOE1ueDhZWFJ0/SlRJd2JXRmphR2x1/Wlh4bGJud3dmSHd3/Zkh4OE1BPT0)

-------------------------------------------------------------------------------------

# 💳 WK5 ATM Simulator in C

> **Week 5 Group Assignment** – Low-Level Programming (C)  
> Developed as part of ALU coursework.  
> This project contributes **6%** to the total grade.

-------------------------------------------------------------------------------------

## 📌 Problem Statement
This project is a **text-based ATM simulator written in C**.  
It mimics real ATM operations and demonstrates how arrays, strings, loops, and modular functions can be used to manage multiple user accounts.

The system supports:

- User authentication (username + 4-digit PIN)  
- Checking account balances  
- Depositing and withdrawing money  
- Viewing recent transactions (up to 10 per user)  
- Logging out and switching between multiple users  

--------------------------------------------------------------------------------------

## 🔑 Predefined Users
| Username | PIN  | Initial Balance |
|----------|------|----------------|
| aman     | 1234 | 1000.00        |
| joseph   | 5678 | 500.00         |
| thadee   | 9012 | 1200.00        |

> **Note:** Use these credentials to log in when testing the program.

--------------------------------------------------------------------------------------

## 🖥️ System Overview
1. The user enters their **username** and **4-digit PIN**.  
2. Upon successful login, the user sees a menu:




3. Functionalities:  
   - **Check Balance**: Shows current user balance.  
   - **Deposit Money**: Adds money to the balance (minimum 1 unit).  
   - **Withdraw Money**: Subtracts money if funds are sufficient.  
   - **View Transaction Log**: Displays last 10 transactions in a table.  
   - **Log Out**: Returns to login prompt for a different user.  
   - **Exit**: Closes the program.

---------------------------------------------------------------------------------------

## ⚙️ Compilation & Execution

### 1. Clone the Repository
```bash
>>>>>git clone https://github.com/Aman-Kasa/WK5_ATM.git
>>>>>cd WK5_ATM

----------------------------------------------------------------------------------
  2. Compile
>>>>> gcc atm.c functions.c login.c -o atm

----------------------------------------------------------------------------------
3. Run
>>>>>./atm

----------------------------------------------------------------------------------

***Repository Structure***

WK5_ATM/
│── atm.c           # Main program with menu
│── login.c         # User login logic
│── login.h         # Login header
│── functions.c     # Core ATM operations (deposit, withdraw, check balance, transaction log)
│── functions.h     # Functions header
│── README.md       # Project documentation
│── atm             # Compiled executable (after build)
