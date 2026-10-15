// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYACCOUNTTRANSACTIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYACCOUNTTRANSACTIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QueryAccountTransactionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAccountTransactionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTimeEnd, createTimeEnd_);
      DARABONBA_PTR_TO_JSON(CreateTimeStart, createTimeStart_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RecordID, recordID_);
      DARABONBA_PTR_TO_JSON(TransactionChannel, transactionChannel_);
      DARABONBA_PTR_TO_JSON(TransactionChannelSN, transactionChannelSN_);
      DARABONBA_PTR_TO_JSON(TransactionFlow, transactionFlow_);
      DARABONBA_PTR_TO_JSON(TransactionNumber, transactionNumber_);
      DARABONBA_PTR_TO_JSON(TransactionType, transactionType_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAccountTransactionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTimeEnd, createTimeEnd_);
      DARABONBA_PTR_FROM_JSON(CreateTimeStart, createTimeStart_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RecordID, recordID_);
      DARABONBA_PTR_FROM_JSON(TransactionChannel, transactionChannel_);
      DARABONBA_PTR_FROM_JSON(TransactionChannelSN, transactionChannelSN_);
      DARABONBA_PTR_FROM_JSON(TransactionFlow, transactionFlow_);
      DARABONBA_PTR_FROM_JSON(TransactionNumber, transactionNumber_);
      DARABONBA_PTR_FROM_JSON(TransactionType, transactionType_);
    };
    QueryAccountTransactionsRequest() = default ;
    QueryAccountTransactionsRequest(const QueryAccountTransactionsRequest &) = default ;
    QueryAccountTransactionsRequest(QueryAccountTransactionsRequest &&) = default ;
    QueryAccountTransactionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAccountTransactionsRequest() = default ;
    QueryAccountTransactionsRequest& operator=(const QueryAccountTransactionsRequest &) = default ;
    QueryAccountTransactionsRequest& operator=(QueryAccountTransactionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTimeEnd_ == nullptr
        && this->createTimeStart_ == nullptr && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->recordID_ == nullptr && this->transactionChannel_ == nullptr
        && this->transactionChannelSN_ == nullptr && this->transactionFlow_ == nullptr && this->transactionNumber_ == nullptr && this->transactionType_ == nullptr; };
    // createTimeEnd Field Functions 
    bool hasCreateTimeEnd() const { return this->createTimeEnd_ != nullptr;};
    void deleteCreateTimeEnd() { this->createTimeEnd_ = nullptr;};
    inline string getCreateTimeEnd() const { DARABONBA_PTR_GET_DEFAULT(createTimeEnd_, "") };
    inline QueryAccountTransactionsRequest& setCreateTimeEnd(string createTimeEnd) { DARABONBA_PTR_SET_VALUE(createTimeEnd_, createTimeEnd) };


    // createTimeStart Field Functions 
    bool hasCreateTimeStart() const { return this->createTimeStart_ != nullptr;};
    void deleteCreateTimeStart() { this->createTimeStart_ = nullptr;};
    inline string getCreateTimeStart() const { DARABONBA_PTR_GET_DEFAULT(createTimeStart_, "") };
    inline QueryAccountTransactionsRequest& setCreateTimeStart(string createTimeStart) { DARABONBA_PTR_SET_VALUE(createTimeStart_, createTimeStart) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline QueryAccountTransactionsRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryAccountTransactionsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // recordID Field Functions 
    bool hasRecordID() const { return this->recordID_ != nullptr;};
    void deleteRecordID() { this->recordID_ = nullptr;};
    inline string getRecordID() const { DARABONBA_PTR_GET_DEFAULT(recordID_, "") };
    inline QueryAccountTransactionsRequest& setRecordID(string recordID) { DARABONBA_PTR_SET_VALUE(recordID_, recordID) };


    // transactionChannel Field Functions 
    bool hasTransactionChannel() const { return this->transactionChannel_ != nullptr;};
    void deleteTransactionChannel() { this->transactionChannel_ = nullptr;};
    inline string getTransactionChannel() const { DARABONBA_PTR_GET_DEFAULT(transactionChannel_, "") };
    inline QueryAccountTransactionsRequest& setTransactionChannel(string transactionChannel) { DARABONBA_PTR_SET_VALUE(transactionChannel_, transactionChannel) };


    // transactionChannelSN Field Functions 
    bool hasTransactionChannelSN() const { return this->transactionChannelSN_ != nullptr;};
    void deleteTransactionChannelSN() { this->transactionChannelSN_ = nullptr;};
    inline string getTransactionChannelSN() const { DARABONBA_PTR_GET_DEFAULT(transactionChannelSN_, "") };
    inline QueryAccountTransactionsRequest& setTransactionChannelSN(string transactionChannelSN) { DARABONBA_PTR_SET_VALUE(transactionChannelSN_, transactionChannelSN) };


    // transactionFlow Field Functions 
    bool hasTransactionFlow() const { return this->transactionFlow_ != nullptr;};
    void deleteTransactionFlow() { this->transactionFlow_ = nullptr;};
    inline string getTransactionFlow() const { DARABONBA_PTR_GET_DEFAULT(transactionFlow_, "") };
    inline QueryAccountTransactionsRequest& setTransactionFlow(string transactionFlow) { DARABONBA_PTR_SET_VALUE(transactionFlow_, transactionFlow) };


    // transactionNumber Field Functions 
    bool hasTransactionNumber() const { return this->transactionNumber_ != nullptr;};
    void deleteTransactionNumber() { this->transactionNumber_ = nullptr;};
    inline string getTransactionNumber() const { DARABONBA_PTR_GET_DEFAULT(transactionNumber_, "") };
    inline QueryAccountTransactionsRequest& setTransactionNumber(string transactionNumber) { DARABONBA_PTR_SET_VALUE(transactionNumber_, transactionNumber) };


    // transactionType Field Functions 
    bool hasTransactionType() const { return this->transactionType_ != nullptr;};
    void deleteTransactionType() { this->transactionType_ = nullptr;};
    inline string getTransactionType() const { DARABONBA_PTR_GET_DEFAULT(transactionType_, "") };
    inline QueryAccountTransactionsRequest& setTransactionType(string transactionType) { DARABONBA_PTR_SET_VALUE(transactionType_, transactionType) };


  protected:
    // The end time of the creation time range. If not specified, the default value is the current time. Example: 2018-01-01T00:00:00Z.
    shared_ptr<string> createTimeEnd_ {};
    // The start time of the creation time range. If not specified, the default value is one month before the current time. Example: 2018-01-01T00:00:00Z.
    shared_ptr<string> createTimeStart_ {};
    // The page number. Default value: 1.
    shared_ptr<int32_t> pageNum_ {};
    // The number of entries per page. Default value: 20.
    shared_ptr<int32_t> pageSize_ {};
    // The order or bill number.
    shared_ptr<string> recordID_ {};
    // The transaction channel. If you specify a transaction channel, the query returns results of the corresponding type. If no results exist, an empty result is returned. If you do not specify this parameter, all types are returned by default. Valid values:
    // - AccountBalance: Account balance.
    // - BankTransfer: Bank transfer.
    // - Alipay: Alipay.
    // - AntCreditPay: Ant Credit Pay.
    // - OfflineRemittance: Offline remittance.
    // - RegularBankCreditRefund: Credit-based payment refund.
    // - CreditCard: Credit card.
    // - MyBankCredit: MYbank Credit.
    // - HuaxiaBankCInstallment: Huaxia Bank installment.
    // - ApplePay: Apple Pay.
    shared_ptr<string> transactionChannel_ {};
    // The payment reference No.
    shared_ptr<string> transactionChannelSN_ {};
    // The income and expense type. If you specify an income and expense type, the query returns results of the corresponding type. If no results exist, an empty result is returned. If you do not specify this parameter, all types are returned by default. Valid values:
    // - Income: Income.
    // - Expense: Expense.
    shared_ptr<string> transactionFlow_ {};
    // The transaction number.
    shared_ptr<string> transactionNumber_ {};
    // The transaction type. If you specify a transaction type, the query returns results of the corresponding type. If no results exist, an empty result is returned. If you do not specify this parameter, all types are returned by default. Valid values:
    // - Payment: Top-up.
    // - Withdraw: Withdrawal.
    // - Refund: Refund.
    // - Consumption: Consumption.
    // - Transfer: Transfer.
    // - Adjust: Adjustment.
    shared_ptr<string> transactionType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
