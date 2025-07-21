# Task 3 - Kiara Bank 🏦

## 🪷 Background story

In a small town known for its beautiful cherry blossoms, a small bank called Kiara Bank is gaining popularity. You’ve been hired as a Jr. Software Engineer to build the first prototype of their internal banking system.

Your job is to build a Terminal-Based Banking System that allow users to manage their bank accounts and perform transactions easily.

# 🎯 Features and Requirements

1. Main Menu (before login):

- Create New Account
  - Kiara Bank's resource is very limited. The database can only store up to 5 user accounts using array.
  - Each account has:
    - name
    - accountNumber
    - pin
    - balance
  - Throw exception if:
    - Account number already exists ❌
    - Max users reached ❌
- Login
  - Users must log in with an account number and 4-digit PIN.
  - If login fails 3 times, go back to the main menu.
  - Only logged-in users can access account features.
- Exit
  - Goodbye message and exit program

2. User Menu (after login):

- Deposit Money
  - To add user balance
- Withdraw Money
  - To deduct user balance
  - Throw exception for over-withdrawal
- Check Balance
  - To display user balanace
- Close account
  - To delete user account
  - Free up the array slot so another user can register
  - After deleted, user will be logged out
- Logout
  - Return to main menu

# Concepts to apply

| Concept                | How it's used                                                      |
| ---------------------- | ------------------------------------------------------------------ |
| **Struct**             | To store account structure                                         |
| **Array**              | To store multiple accounts (max. 5)                                |
| **Pointer**            | To modify data                                                     |
| **Function**           | Every action is a separate function                                |
| **Exception Handling** | Used to catch invalid access, wrong login, or illegal transactions |

# Example

It's up to you on how you want to display the Menus and Success/Fail Messages!

```
====== Welcome to Kiara Bank 🌸 ======

1. Create New Account
2. Login
3. Exit
   Choose an option: 1

Enter name: Clara
Enter new account number: 12345
Enter a 4-digit PIN: 2211
Enter initial deposit: 1000
✅ Account created successfully!

====== Welcome to Kiara Bank 🌸 ======
Choose an option: 2

Enter account number: 12345
Enter PIN: 2211
✅ Login successful. Welcome, Clara!

===== Kiara Bank - User Menu =====

1. Deposit
2. Withdraw
3. Check Balance
4. Close Account
5. Logout

Choose an option: 2
Enter amount to withdraw: 2000
❌ Error: Insufficient balance!

Choose an option: 3
💰 Your current balance is: 1000

Choose an option: 4
🔒 Logged out.

====== Welcome to Kiara Bank 🌸 ======
```

# Scoring

| **Category**                     | **Criteria**                                                                       | **Points** |
| -------------------------------- | ---------------------------------------------------------------------------------- | ---------- |
| **1. Functionality (40 points)** | Create Account works correctly                                                     | 5          |
|                                  | Login authenticates using account number & PIN                                     | 5          |
|                                  | Deposit / Withdraw with correct logic                                              | 5          |
|                                  | Withdrawal throws error when balance is not enough                                 | 5          |
|                                  | Close Account frees up the array and logs out user                                 | 5          |
|                                  | Max 5 account limit is enforced with error                                         | 5          |
|                                  | Account number is unique (no duplicates allowed)                                   | 5          |
|                                  | Login fails after 3 wrong attempts                                                 | 5          |
| **2. Code Quality (30 points)**  | Uses functions for each operation                                                  | 5          |
|                                  | Uses pointer correctly to modify data                                              | 5          |
|                                  | Clean, modular, and readable code                                                  | 5          |
|                                  | Proper indentation, naming, and separation of logic                                | 5          |
|                                  | Uses array properly for account storage                                            | 5          |
|                                  | Uses `struct` for Account with relevant fields                                     | 5          |
| **3. Exception Handling (20)**   | Withdraw throws and catches exception when overdraw                                | 5          |
|                                  | Account creation throws error if account number already exists or limit is reached | 5          |
|                                  | Any additional custom error or validation                                          | 5          |
| **4. Edge Cases / UX (10)**      | Follow best development best practices (branch naming, conventional commits, etc)  | 5          |
|                                  | Bonus: adds confirmation messages or small UI polish (✅ / ❌)                     | 5          |

## Grading Guideline

| Score Range | Grade             | Notes                                                |
| ----------- | ----------------- | ---------------------------------------------------- |
| 90 - 100    | ⭐ Excellent      | Fully functional, clean, polished, good process      |
| 75 - 89     | 👍 Good           | Functional with minor issues in code/process         |
| 60 - 74     | 🆗 Sufficient     | Basic functionality works, some errors or messy code |
| < 60        | ❌ Needs Revision | Incomplete or major issues in both code and process  |

# Good luck and Have fun!

## 🗓️ Due date: 1 Aug 2025
