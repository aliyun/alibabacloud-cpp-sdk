// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYACCOUNTTRANSACTIONDETAILSRESPONSEBODYDATAACCOUNTTRANSACTIONSLISTACCOUNTTRANSACTIONSLIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYACCOUNTTRANSACTIONDETAILSRESPONSEBODYDATAACCOUNTTRANSACTIONSLISTACCOUNTTRANSACTIONSLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QueryAccountTransactionDetailsResponseBodyDataAccountTransactionsListAccountTransactionsList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAccountTransactionDetailsResponseBodyDataAccountTransactionsListAccountTransactionsList& obj) { 
      DARABONBA_PTR_TO_JSON(Amount, amount_);
      DARABONBA_PTR_TO_JSON(Balance, balance_);
      DARABONBA_PTR_TO_JSON(BillingCycle, billingCycle_);
      DARABONBA_PTR_TO_JSON(FundType, fundType_);
      DARABONBA_PTR_TO_JSON(RecordID, recordID_);
      DARABONBA_PTR_TO_JSON(Remarks, remarks_);
      DARABONBA_PTR_TO_JSON(TransactionAccount, transactionAccount_);
      DARABONBA_PTR_TO_JSON(TransactionChannel, transactionChannel_);
      DARABONBA_PTR_TO_JSON(TransactionChannelSN, transactionChannelSN_);
      DARABONBA_PTR_TO_JSON(TransactionFlow, transactionFlow_);
      DARABONBA_PTR_TO_JSON(TransactionNumber, transactionNumber_);
      DARABONBA_PTR_TO_JSON(TransactionTime, transactionTime_);
      DARABONBA_PTR_TO_JSON(TransactionType, transactionType_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAccountTransactionDetailsResponseBodyDataAccountTransactionsListAccountTransactionsList& obj) { 
      DARABONBA_PTR_FROM_JSON(Amount, amount_);
      DARABONBA_PTR_FROM_JSON(Balance, balance_);
      DARABONBA_PTR_FROM_JSON(BillingCycle, billingCycle_);
      DARABONBA_PTR_FROM_JSON(FundType, fundType_);
      DARABONBA_PTR_FROM_JSON(RecordID, recordID_);
      DARABONBA_PTR_FROM_JSON(Remarks, remarks_);
      DARABONBA_PTR_FROM_JSON(TransactionAccount, transactionAccount_);
      DARABONBA_PTR_FROM_JSON(TransactionChannel, transactionChannel_);
      DARABONBA_PTR_FROM_JSON(TransactionChannelSN, transactionChannelSN_);
      DARABONBA_PTR_FROM_JSON(TransactionFlow, transactionFlow_);
      DARABONBA_PTR_FROM_JSON(TransactionNumber, transactionNumber_);
      DARABONBA_PTR_FROM_JSON(TransactionTime, transactionTime_);
      DARABONBA_PTR_FROM_JSON(TransactionType, transactionType_);
    };
    QueryAccountTransactionDetailsResponseBodyDataAccountTransactionsListAccountTransactionsList() = default ;
    QueryAccountTransactionDetailsResponseBodyDataAccountTransactionsListAccountTransactionsList(const QueryAccountTransactionDetailsResponseBodyDataAccountTransactionsListAccountTransactionsList &) = default ;
    QueryAccountTransactionDetailsResponseBodyDataAccountTransactionsListAccountTransactionsList(QueryAccountTransactionDetailsResponseBodyDataAccountTransactionsListAccountTransactionsList &&) = default ;
    QueryAccountTransactionDetailsResponseBodyDataAccountTransactionsListAccountTransactionsList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAccountTransactionDetailsResponseBodyDataAccountTransactionsListAccountTransactionsList() = default ;
    QueryAccountTransactionDetailsResponseBodyDataAccountTransactionsListAccountTransactionsList& operator=(const QueryAccountTransactionDetailsResponseBodyDataAccountTransactionsListAccountTransactionsList &) = default ;
    QueryAccountTransactionDetailsResponseBodyDataAccountTransactionsListAccountTransactionsList& operator=(QueryAccountTransactionDetailsResponseBodyDataAccountTransactionsListAccountTransactionsList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->amount_ != nullptr
        && this->balance_ != nullptr && this->billingCycle_ != nullptr && this->fundType_ != nullptr && this->recordID_ != nullptr && this->remarks_ != nullptr
        && this->transactionAccount_ != nullptr && this->transactionChannel_ != nullptr && this->transactionChannelSN_ != nullptr && this->transactionFlow_ != nullptr && this->transactionNumber_ != nullptr
        && this->transactionTime_ != nullptr && this->transactionType_ != nullptr; };
    // amount Field Functions 
    bool hasAmount() const { return this->amount_ != nullptr;};
    void deleteAmount() { this->amount_ = nullptr;};
    inline string amount() const { DARABONBA_PTR_GET_DEFAULT(amount_, "") };
    inline QueryAccountTransactionDetailsResponseBodyDataAccountTransactionsListAccountTransactionsList& setAmount(string amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


    // balance Field Functions 
    bool hasBalance() const { return this->balance_ != nullptr;};
    void deleteBalance() { this->balance_ = nullptr;};
    inline string balance() const { DARABONBA_PTR_GET_DEFAULT(balance_, "") };
    inline QueryAccountTransactionDetailsResponseBodyDataAccountTransactionsListAccountTransactionsList& setBalance(string balance) { DARABONBA_PTR_SET_VALUE(balance_, balance) };


    // billingCycle Field Functions 
    bool hasBillingCycle() const { return this->billingCycle_ != nullptr;};
    void deleteBillingCycle() { this->billingCycle_ = nullptr;};
    inline string billingCycle() const { DARABONBA_PTR_GET_DEFAULT(billingCycle_, "") };
    inline QueryAccountTransactionDetailsResponseBodyDataAccountTransactionsListAccountTransactionsList& setBillingCycle(string billingCycle) { DARABONBA_PTR_SET_VALUE(billingCycle_, billingCycle) };


    // fundType Field Functions 
    bool hasFundType() const { return this->fundType_ != nullptr;};
    void deleteFundType() { this->fundType_ = nullptr;};
    inline string fundType() const { DARABONBA_PTR_GET_DEFAULT(fundType_, "") };
    inline QueryAccountTransactionDetailsResponseBodyDataAccountTransactionsListAccountTransactionsList& setFundType(string fundType) { DARABONBA_PTR_SET_VALUE(fundType_, fundType) };


    // recordID Field Functions 
    bool hasRecordID() const { return this->recordID_ != nullptr;};
    void deleteRecordID() { this->recordID_ = nullptr;};
    inline string recordID() const { DARABONBA_PTR_GET_DEFAULT(recordID_, "") };
    inline QueryAccountTransactionDetailsResponseBodyDataAccountTransactionsListAccountTransactionsList& setRecordID(string recordID) { DARABONBA_PTR_SET_VALUE(recordID_, recordID) };


    // remarks Field Functions 
    bool hasRemarks() const { return this->remarks_ != nullptr;};
    void deleteRemarks() { this->remarks_ = nullptr;};
    inline string remarks() const { DARABONBA_PTR_GET_DEFAULT(remarks_, "") };
    inline QueryAccountTransactionDetailsResponseBodyDataAccountTransactionsListAccountTransactionsList& setRemarks(string remarks) { DARABONBA_PTR_SET_VALUE(remarks_, remarks) };


    // transactionAccount Field Functions 
    bool hasTransactionAccount() const { return this->transactionAccount_ != nullptr;};
    void deleteTransactionAccount() { this->transactionAccount_ = nullptr;};
    inline string transactionAccount() const { DARABONBA_PTR_GET_DEFAULT(transactionAccount_, "") };
    inline QueryAccountTransactionDetailsResponseBodyDataAccountTransactionsListAccountTransactionsList& setTransactionAccount(string transactionAccount) { DARABONBA_PTR_SET_VALUE(transactionAccount_, transactionAccount) };


    // transactionChannel Field Functions 
    bool hasTransactionChannel() const { return this->transactionChannel_ != nullptr;};
    void deleteTransactionChannel() { this->transactionChannel_ = nullptr;};
    inline string transactionChannel() const { DARABONBA_PTR_GET_DEFAULT(transactionChannel_, "") };
    inline QueryAccountTransactionDetailsResponseBodyDataAccountTransactionsListAccountTransactionsList& setTransactionChannel(string transactionChannel) { DARABONBA_PTR_SET_VALUE(transactionChannel_, transactionChannel) };


    // transactionChannelSN Field Functions 
    bool hasTransactionChannelSN() const { return this->transactionChannelSN_ != nullptr;};
    void deleteTransactionChannelSN() { this->transactionChannelSN_ = nullptr;};
    inline string transactionChannelSN() const { DARABONBA_PTR_GET_DEFAULT(transactionChannelSN_, "") };
    inline QueryAccountTransactionDetailsResponseBodyDataAccountTransactionsListAccountTransactionsList& setTransactionChannelSN(string transactionChannelSN) { DARABONBA_PTR_SET_VALUE(transactionChannelSN_, transactionChannelSN) };


    // transactionFlow Field Functions 
    bool hasTransactionFlow() const { return this->transactionFlow_ != nullptr;};
    void deleteTransactionFlow() { this->transactionFlow_ = nullptr;};
    inline string transactionFlow() const { DARABONBA_PTR_GET_DEFAULT(transactionFlow_, "") };
    inline QueryAccountTransactionDetailsResponseBodyDataAccountTransactionsListAccountTransactionsList& setTransactionFlow(string transactionFlow) { DARABONBA_PTR_SET_VALUE(transactionFlow_, transactionFlow) };


    // transactionNumber Field Functions 
    bool hasTransactionNumber() const { return this->transactionNumber_ != nullptr;};
    void deleteTransactionNumber() { this->transactionNumber_ = nullptr;};
    inline string transactionNumber() const { DARABONBA_PTR_GET_DEFAULT(transactionNumber_, "") };
    inline QueryAccountTransactionDetailsResponseBodyDataAccountTransactionsListAccountTransactionsList& setTransactionNumber(string transactionNumber) { DARABONBA_PTR_SET_VALUE(transactionNumber_, transactionNumber) };


    // transactionTime Field Functions 
    bool hasTransactionTime() const { return this->transactionTime_ != nullptr;};
    void deleteTransactionTime() { this->transactionTime_ = nullptr;};
    inline string transactionTime() const { DARABONBA_PTR_GET_DEFAULT(transactionTime_, "") };
    inline QueryAccountTransactionDetailsResponseBodyDataAccountTransactionsListAccountTransactionsList& setTransactionTime(string transactionTime) { DARABONBA_PTR_SET_VALUE(transactionTime_, transactionTime) };


    // transactionType Field Functions 
    bool hasTransactionType() const { return this->transactionType_ != nullptr;};
    void deleteTransactionType() { this->transactionType_ = nullptr;};
    inline string transactionType() const { DARABONBA_PTR_GET_DEFAULT(transactionType_, "") };
    inline QueryAccountTransactionDetailsResponseBodyDataAccountTransactionsListAccountTransactionsList& setTransactionType(string transactionType) { DARABONBA_PTR_SET_VALUE(transactionType_, transactionType) };


  protected:
    // The amount of the transaction.
    std::shared_ptr<string> amount_ = nullptr;
    // The balance of the account.
    std::shared_ptr<string> balance_ = nullptr;
    // The billing cycle.
    std::shared_ptr<string> billingCycle_ = nullptr;
    // The type of transaction payment. Valid values:
    // 
    // Cash: pay for the transaction in cash. Deposit: pay for the transaction with deposit. RegularBankCreditRefund: pay for the transaction with credit refund controlled by a bank. DirectPay: directly pay for the transaction.
    std::shared_ptr<string> fundType_ = nullptr;
    // The ID of the order or bill.
    std::shared_ptr<string> recordID_ = nullptr;
    // The remarks.
    std::shared_ptr<string> remarks_ = nullptr;
    // The transaction account.
    std::shared_ptr<string> transactionAccount_ = nullptr;
    // The transaction channel.
    std::shared_ptr<string> transactionChannel_ = nullptr;
    // The serial number of the transaction channel.
    std::shared_ptr<string> transactionChannelSN_ = nullptr;
    // Indicates whether the transaction is of the income type or the expenditure type. If one of the following types is specified, results for the specific type are returned. If the type that you specified for the parameter does not belong to the following types, no result is returned. If the parameter is left empty, results for transactions of the income and expenditure types are all returned. Valid values:
    // 
    // Income and Expense.
    std::shared_ptr<string> transactionFlow_ = nullptr;
    // The number of the transaction.
    std::shared_ptr<string> transactionNumber_ = nullptr;
    // The time when the transaction was made.
    std::shared_ptr<string> transactionTime_ = nullptr;
    // The type of the transaction. If one of the following transaction types is specified, results for the specified transaction type are returned. If the transaction type that you specified does not belong to the following transaction types, no result is returned. If the parameter is left empty, results for all transaction types are returned. Valid values:
    // 
    // Payment, Withdraw, Refund, Consumption, Transfer, and Adjust.
    std::shared_ptr<string> transactionType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
