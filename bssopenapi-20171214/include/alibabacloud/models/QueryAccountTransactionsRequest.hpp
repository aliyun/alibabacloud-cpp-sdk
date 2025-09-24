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
    virtual bool empty() const override { this->createTimeEnd_ != nullptr
        && this->createTimeStart_ != nullptr && this->pageNum_ != nullptr && this->pageSize_ != nullptr && this->recordID_ != nullptr && this->transactionChannel_ != nullptr
        && this->transactionChannelSN_ != nullptr && this->transactionFlow_ != nullptr && this->transactionNumber_ != nullptr && this->transactionType_ != nullptr; };
    // createTimeEnd Field Functions 
    bool hasCreateTimeEnd() const { return this->createTimeEnd_ != nullptr;};
    void deleteCreateTimeEnd() { this->createTimeEnd_ = nullptr;};
    inline string createTimeEnd() const { DARABONBA_PTR_GET_DEFAULT(createTimeEnd_, "") };
    inline QueryAccountTransactionsRequest& setCreateTimeEnd(string createTimeEnd) { DARABONBA_PTR_SET_VALUE(createTimeEnd_, createTimeEnd) };


    // createTimeStart Field Functions 
    bool hasCreateTimeStart() const { return this->createTimeStart_ != nullptr;};
    void deleteCreateTimeStart() { this->createTimeStart_ = nullptr;};
    inline string createTimeStart() const { DARABONBA_PTR_GET_DEFAULT(createTimeStart_, "") };
    inline QueryAccountTransactionsRequest& setCreateTimeStart(string createTimeStart) { DARABONBA_PTR_SET_VALUE(createTimeStart_, createTimeStart) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t pageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline QueryAccountTransactionsRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryAccountTransactionsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // recordID Field Functions 
    bool hasRecordID() const { return this->recordID_ != nullptr;};
    void deleteRecordID() { this->recordID_ = nullptr;};
    inline string recordID() const { DARABONBA_PTR_GET_DEFAULT(recordID_, "") };
    inline QueryAccountTransactionsRequest& setRecordID(string recordID) { DARABONBA_PTR_SET_VALUE(recordID_, recordID) };


    // transactionChannel Field Functions 
    bool hasTransactionChannel() const { return this->transactionChannel_ != nullptr;};
    void deleteTransactionChannel() { this->transactionChannel_ = nullptr;};
    inline string transactionChannel() const { DARABONBA_PTR_GET_DEFAULT(transactionChannel_, "") };
    inline QueryAccountTransactionsRequest& setTransactionChannel(string transactionChannel) { DARABONBA_PTR_SET_VALUE(transactionChannel_, transactionChannel) };


    // transactionChannelSN Field Functions 
    bool hasTransactionChannelSN() const { return this->transactionChannelSN_ != nullptr;};
    void deleteTransactionChannelSN() { this->transactionChannelSN_ = nullptr;};
    inline string transactionChannelSN() const { DARABONBA_PTR_GET_DEFAULT(transactionChannelSN_, "") };
    inline QueryAccountTransactionsRequest& setTransactionChannelSN(string transactionChannelSN) { DARABONBA_PTR_SET_VALUE(transactionChannelSN_, transactionChannelSN) };


    // transactionFlow Field Functions 
    bool hasTransactionFlow() const { return this->transactionFlow_ != nullptr;};
    void deleteTransactionFlow() { this->transactionFlow_ = nullptr;};
    inline string transactionFlow() const { DARABONBA_PTR_GET_DEFAULT(transactionFlow_, "") };
    inline QueryAccountTransactionsRequest& setTransactionFlow(string transactionFlow) { DARABONBA_PTR_SET_VALUE(transactionFlow_, transactionFlow) };


    // transactionNumber Field Functions 
    bool hasTransactionNumber() const { return this->transactionNumber_ != nullptr;};
    void deleteTransactionNumber() { this->transactionNumber_ = nullptr;};
    inline string transactionNumber() const { DARABONBA_PTR_GET_DEFAULT(transactionNumber_, "") };
    inline QueryAccountTransactionsRequest& setTransactionNumber(string transactionNumber) { DARABONBA_PTR_SET_VALUE(transactionNumber_, transactionNumber) };


    // transactionType Field Functions 
    bool hasTransactionType() const { return this->transactionType_ != nullptr;};
    void deleteTransactionType() { this->transactionType_ = nullptr;};
    inline string transactionType() const { DARABONBA_PTR_GET_DEFAULT(transactionType_, "") };
    inline QueryAccountTransactionsRequest& setTransactionType(string transactionType) { DARABONBA_PTR_SET_VALUE(transactionType_, transactionType) };


  protected:
    // The end of the creation time range to query. By default, the transactions in the last month are queried. Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. Example: 2018-01-01T00:00:00Z.
    std::shared_ptr<string> createTimeEnd_ = nullptr;
    // The beginning of the creation time range to query. Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. Example: 2018-01-01T00:00:00Z.
    std::shared_ptr<string> createTimeStart_ = nullptr;
    // The number of the page to return. Default value is 1.
    std::shared_ptr<int32_t> pageNum_ = nullptr;
    // The number of entries to return on each page. Default value is 20.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the order or bill.
    std::shared_ptr<string> recordID_ = nullptr;
    // The transaction channel. If you specify one of the following transaction channels for this parameter, the results for the specified transaction channel are returned. If the transaction channel that you specify does not belong to the following transaction channels, no result is returned. If you leave this parameter empty, the results for all the following transaction channels are returned by default. Valid values:
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
    std::shared_ptr<string> transactionChannel_ = nullptr;
    // The serial number of the transaction channel.
    std::shared_ptr<string> transactionChannelSN_ = nullptr;
    // The type of the transaction flow. If you specify one of the following types for this parameter, the results for the specified type are returned. If the type that you specify does not belong to the following types, no result is returned. If you leave this parameter empty, the results for the following two types are returned by default. Valid values:
    // 
    // *   Income
    // *   Expense
    std::shared_ptr<string> transactionFlow_ = nullptr;
    // The number of the transaction.
    std::shared_ptr<string> transactionNumber_ = nullptr;
    // The type of the transaction. If you specify one of the following transaction types for this parameter, the results for the specified transaction type are returned. If the transaction type that you specify does not belong to the following types, no result is returned. If you leave this parameter empty, the results for all the following transaction types are returned by default. Valid values:
    // 
    // *   Payment
    // *   Withdraw
    // *   Refund
    // *   Consumption
    // *   Transfer
    // *   Adjust
    std::shared_ptr<string> transactionType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
