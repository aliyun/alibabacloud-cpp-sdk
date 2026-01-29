// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYACCOUNTTRANSACTIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYACCOUNTTRANSACTIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QueryAccountTransactionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAccountTransactionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAccountTransactionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryAccountTransactionsResponseBody() = default ;
    QueryAccountTransactionsResponseBody(const QueryAccountTransactionsResponseBody &) = default ;
    QueryAccountTransactionsResponseBody(QueryAccountTransactionsResponseBody &&) = default ;
    QueryAccountTransactionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAccountTransactionsResponseBody() = default ;
    QueryAccountTransactionsResponseBody& operator=(const QueryAccountTransactionsResponseBody &) = default ;
    QueryAccountTransactionsResponseBody& operator=(QueryAccountTransactionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AccountName, accountName_);
        DARABONBA_PTR_TO_JSON(AccountTransactionsList, accountTransactionsList_);
        DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
        DARABONBA_PTR_FROM_JSON(AccountTransactionsList, accountTransactionsList_);
        DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AccountTransactionsList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AccountTransactionsList& obj) { 
          DARABONBA_PTR_TO_JSON(AccountTransactionsList, accountTransactionsList_);
        };
        friend void from_json(const Darabonba::Json& j, AccountTransactionsList& obj) { 
          DARABONBA_PTR_FROM_JSON(AccountTransactionsList, accountTransactionsList_);
        };
        AccountTransactionsList() = default ;
        AccountTransactionsList(const AccountTransactionsList &) = default ;
        AccountTransactionsList(AccountTransactionsList &&) = default ;
        AccountTransactionsList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AccountTransactionsList() = default ;
        AccountTransactionsList& operator=(const AccountTransactionsList &) = default ;
        AccountTransactionsList& operator=(AccountTransactionsList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class AccountTransactionsListItem : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AccountTransactionsListItem& obj) { 
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
          friend void from_json(const Darabonba::Json& j, AccountTransactionsListItem& obj) { 
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
          AccountTransactionsListItem() = default ;
          AccountTransactionsListItem(const AccountTransactionsListItem &) = default ;
          AccountTransactionsListItem(AccountTransactionsListItem &&) = default ;
          AccountTransactionsListItem(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AccountTransactionsListItem() = default ;
          AccountTransactionsListItem& operator=(const AccountTransactionsListItem &) = default ;
          AccountTransactionsListItem& operator=(AccountTransactionsListItem &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->amount_ == nullptr
        && this->balance_ == nullptr && this->billingCycle_ == nullptr && this->fundType_ == nullptr && this->recordID_ == nullptr && this->remarks_ == nullptr
        && this->transactionAccount_ == nullptr && this->transactionChannel_ == nullptr && this->transactionChannelSN_ == nullptr && this->transactionFlow_ == nullptr && this->transactionNumber_ == nullptr
        && this->transactionTime_ == nullptr && this->transactionType_ == nullptr; };
          // amount Field Functions 
          bool hasAmount() const { return this->amount_ != nullptr;};
          void deleteAmount() { this->amount_ = nullptr;};
          inline string getAmount() const { DARABONBA_PTR_GET_DEFAULT(amount_, "") };
          inline AccountTransactionsListItem& setAmount(string amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


          // balance Field Functions 
          bool hasBalance() const { return this->balance_ != nullptr;};
          void deleteBalance() { this->balance_ = nullptr;};
          inline string getBalance() const { DARABONBA_PTR_GET_DEFAULT(balance_, "") };
          inline AccountTransactionsListItem& setBalance(string balance) { DARABONBA_PTR_SET_VALUE(balance_, balance) };


          // billingCycle Field Functions 
          bool hasBillingCycle() const { return this->billingCycle_ != nullptr;};
          void deleteBillingCycle() { this->billingCycle_ = nullptr;};
          inline string getBillingCycle() const { DARABONBA_PTR_GET_DEFAULT(billingCycle_, "") };
          inline AccountTransactionsListItem& setBillingCycle(string billingCycle) { DARABONBA_PTR_SET_VALUE(billingCycle_, billingCycle) };


          // fundType Field Functions 
          bool hasFundType() const { return this->fundType_ != nullptr;};
          void deleteFundType() { this->fundType_ = nullptr;};
          inline string getFundType() const { DARABONBA_PTR_GET_DEFAULT(fundType_, "") };
          inline AccountTransactionsListItem& setFundType(string fundType) { DARABONBA_PTR_SET_VALUE(fundType_, fundType) };


          // recordID Field Functions 
          bool hasRecordID() const { return this->recordID_ != nullptr;};
          void deleteRecordID() { this->recordID_ = nullptr;};
          inline string getRecordID() const { DARABONBA_PTR_GET_DEFAULT(recordID_, "") };
          inline AccountTransactionsListItem& setRecordID(string recordID) { DARABONBA_PTR_SET_VALUE(recordID_, recordID) };


          // remarks Field Functions 
          bool hasRemarks() const { return this->remarks_ != nullptr;};
          void deleteRemarks() { this->remarks_ = nullptr;};
          inline string getRemarks() const { DARABONBA_PTR_GET_DEFAULT(remarks_, "") };
          inline AccountTransactionsListItem& setRemarks(string remarks) { DARABONBA_PTR_SET_VALUE(remarks_, remarks) };


          // transactionAccount Field Functions 
          bool hasTransactionAccount() const { return this->transactionAccount_ != nullptr;};
          void deleteTransactionAccount() { this->transactionAccount_ = nullptr;};
          inline string getTransactionAccount() const { DARABONBA_PTR_GET_DEFAULT(transactionAccount_, "") };
          inline AccountTransactionsListItem& setTransactionAccount(string transactionAccount) { DARABONBA_PTR_SET_VALUE(transactionAccount_, transactionAccount) };


          // transactionChannel Field Functions 
          bool hasTransactionChannel() const { return this->transactionChannel_ != nullptr;};
          void deleteTransactionChannel() { this->transactionChannel_ = nullptr;};
          inline string getTransactionChannel() const { DARABONBA_PTR_GET_DEFAULT(transactionChannel_, "") };
          inline AccountTransactionsListItem& setTransactionChannel(string transactionChannel) { DARABONBA_PTR_SET_VALUE(transactionChannel_, transactionChannel) };


          // transactionChannelSN Field Functions 
          bool hasTransactionChannelSN() const { return this->transactionChannelSN_ != nullptr;};
          void deleteTransactionChannelSN() { this->transactionChannelSN_ = nullptr;};
          inline string getTransactionChannelSN() const { DARABONBA_PTR_GET_DEFAULT(transactionChannelSN_, "") };
          inline AccountTransactionsListItem& setTransactionChannelSN(string transactionChannelSN) { DARABONBA_PTR_SET_VALUE(transactionChannelSN_, transactionChannelSN) };


          // transactionFlow Field Functions 
          bool hasTransactionFlow() const { return this->transactionFlow_ != nullptr;};
          void deleteTransactionFlow() { this->transactionFlow_ = nullptr;};
          inline string getTransactionFlow() const { DARABONBA_PTR_GET_DEFAULT(transactionFlow_, "") };
          inline AccountTransactionsListItem& setTransactionFlow(string transactionFlow) { DARABONBA_PTR_SET_VALUE(transactionFlow_, transactionFlow) };


          // transactionNumber Field Functions 
          bool hasTransactionNumber() const { return this->transactionNumber_ != nullptr;};
          void deleteTransactionNumber() { this->transactionNumber_ = nullptr;};
          inline string getTransactionNumber() const { DARABONBA_PTR_GET_DEFAULT(transactionNumber_, "") };
          inline AccountTransactionsListItem& setTransactionNumber(string transactionNumber) { DARABONBA_PTR_SET_VALUE(transactionNumber_, transactionNumber) };


          // transactionTime Field Functions 
          bool hasTransactionTime() const { return this->transactionTime_ != nullptr;};
          void deleteTransactionTime() { this->transactionTime_ = nullptr;};
          inline string getTransactionTime() const { DARABONBA_PTR_GET_DEFAULT(transactionTime_, "") };
          inline AccountTransactionsListItem& setTransactionTime(string transactionTime) { DARABONBA_PTR_SET_VALUE(transactionTime_, transactionTime) };


          // transactionType Field Functions 
          bool hasTransactionType() const { return this->transactionType_ != nullptr;};
          void deleteTransactionType() { this->transactionType_ = nullptr;};
          inline string getTransactionType() const { DARABONBA_PTR_GET_DEFAULT(transactionType_, "") };
          inline AccountTransactionsListItem& setTransactionType(string transactionType) { DARABONBA_PTR_SET_VALUE(transactionType_, transactionType) };


        protected:
          // The amount.
          shared_ptr<string> amount_ {};
          // The balance of the account.
          shared_ptr<string> balance_ {};
          // The billing cycle. Format: YYYY-MM.
          shared_ptr<string> billingCycle_ {};
          // The type of transaction payment. Valid values:
          // 
          // *   Cash: pay for the transaction in cash.
          // *   Deposit: pay for the transaction with deposit.
          // *   RegularBankCreditRefund: pay for the transaction with credit refund controlled by a bank.
          // *   DirectPay: directly pay for the transaction.
          shared_ptr<string> fundType_ {};
          // The number of the order or bill.
          shared_ptr<string> recordID_ {};
          // The remarks on the transaction.
          shared_ptr<string> remarks_ {};
          // The transaction account. For example, the account is a recharge account in Alipay or a transfer account.
          shared_ptr<string> transactionAccount_ {};
          // The transaction channel.
          // 
          // *   AccountBalance
          // *   BankTransfer
          // *   Alipay
          // *   AntCreditPay
          // *   OfflineRemittance
          // *   RegularBankCreditRefund
          // *   CreditCard
          // *   MyBankCredit
          // *   HuaxiaBankCInstallment
          // *   ApplePay
          shared_ptr<string> transactionChannel_ {};
          // The serial number of the transaction channel.
          shared_ptr<string> transactionChannelSN_ {};
          // The type of the transaction flow.
          // 
          // *   Income
          // *   Expense
          shared_ptr<string> transactionFlow_ {};
          // The number of the transaction.
          shared_ptr<string> transactionNumber_ {};
          // The time when the transaction was made.
          shared_ptr<string> transactionTime_ {};
          // The type of the transaction.
          // 
          // *   Payment
          // *   Withdraw
          // *   Refund
          // *   Consumption
          // *   Transfer
          // *   Adjust
          shared_ptr<string> transactionType_ {};
        };

        virtual bool empty() const override { return this->accountTransactionsList_ == nullptr; };
        // accountTransactionsList Field Functions 
        bool hasAccountTransactionsList() const { return this->accountTransactionsList_ != nullptr;};
        void deleteAccountTransactionsList() { this->accountTransactionsList_ = nullptr;};
        inline const vector<AccountTransactionsList::AccountTransactionsListItem> & getAccountTransactionsList() const { DARABONBA_PTR_GET_CONST(accountTransactionsList_, vector<AccountTransactionsList::AccountTransactionsListItem>) };
        inline vector<AccountTransactionsList::AccountTransactionsListItem> getAccountTransactionsList() { DARABONBA_PTR_GET(accountTransactionsList_, vector<AccountTransactionsList::AccountTransactionsListItem>) };
        inline AccountTransactionsList& setAccountTransactionsList(const vector<AccountTransactionsList::AccountTransactionsListItem> & accountTransactionsList) { DARABONBA_PTR_SET_VALUE(accountTransactionsList_, accountTransactionsList) };
        inline AccountTransactionsList& setAccountTransactionsList(vector<AccountTransactionsList::AccountTransactionsListItem> && accountTransactionsList) { DARABONBA_PTR_SET_RVALUE(accountTransactionsList_, accountTransactionsList) };


      protected:
        shared_ptr<vector<AccountTransactionsList::AccountTransactionsListItem>> accountTransactionsList_ {};
      };

      virtual bool empty() const override { return this->accountName_ == nullptr
        && this->accountTransactionsList_ == nullptr && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // accountName Field Functions 
      bool hasAccountName() const { return this->accountName_ != nullptr;};
      void deleteAccountName() { this->accountName_ = nullptr;};
      inline string getAccountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
      inline Data& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


      // accountTransactionsList Field Functions 
      bool hasAccountTransactionsList() const { return this->accountTransactionsList_ != nullptr;};
      void deleteAccountTransactionsList() { this->accountTransactionsList_ = nullptr;};
      inline const Data::AccountTransactionsList & getAccountTransactionsList() const { DARABONBA_PTR_GET_CONST(accountTransactionsList_, Data::AccountTransactionsList) };
      inline Data::AccountTransactionsList getAccountTransactionsList() { DARABONBA_PTR_GET(accountTransactionsList_, Data::AccountTransactionsList) };
      inline Data& setAccountTransactionsList(const Data::AccountTransactionsList & accountTransactionsList) { DARABONBA_PTR_SET_VALUE(accountTransactionsList_, accountTransactionsList) };
      inline Data& setAccountTransactionsList(Data::AccountTransactionsList && accountTransactionsList) { DARABONBA_PTR_SET_RVALUE(accountTransactionsList_, accountTransactionsList) };


      // pageNum Field Functions 
      bool hasPageNum() const { return this->pageNum_ != nullptr;};
      void deletePageNum() { this->pageNum_ = nullptr;};
      inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
      inline Data& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Data& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The name of your Alibaba Cloud account.
      shared_ptr<string> accountName_ {};
      // The information about transactions.
      shared_ptr<Data::AccountTransactionsList> accountTransactionsList_ {};
      // The page number of the returned page.
      shared_ptr<int32_t> pageNum_ {};
      // The number of entries returned per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of returned entries.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryAccountTransactionsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryAccountTransactionsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryAccountTransactionsResponseBody::Data) };
    inline QueryAccountTransactionsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryAccountTransactionsResponseBody::Data) };
    inline QueryAccountTransactionsResponseBody& setData(const QueryAccountTransactionsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryAccountTransactionsResponseBody& setData(QueryAccountTransactionsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryAccountTransactionsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryAccountTransactionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryAccountTransactionsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code returned.
    shared_ptr<string> code_ {};
    // The data returned.
    shared_ptr<QueryAccountTransactionsResponseBody::Data> data_ {};
    // The message returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
