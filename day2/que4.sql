CREATE TABLE Users(
    UserID INT,
    Username VARCHAR(50),
    Email VARCHAR(100),
    Password VARCHAR(255),
    JoinDate DATE
);

CREATE TABLE Wallets(
    WalletID INT,
    UserID INT,
    Currency VARCHAR(50),
    Balance DECIMAL(15,2),
    LastTransactionDate DATE
);

CREATE TABLE Transactions(
    TransactionID INT,
    WalletID INT,
    Amount DECIMAL(15,2),
    TransactionType VARCHAR(50),
    Timestamp DATETIME
);

ALTER TABLE Users RENAME TO ExchangeUsers;

TRUNCATE TABLE Transactions;