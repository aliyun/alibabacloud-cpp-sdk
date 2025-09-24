// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYACCOUNTTRANSACTIONDETAILSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYACCOUNTTRANSACTIONDETAILSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QueryAccountTransactionDetailsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAccountTransactionDetailsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTimeEnd, createTimeEnd_);
      DARABONBA_PTR_TO_JSON(CreateTimeStart, createTimeStart_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RecordID, recordID_);
      DARABONBA_PTR_TO_JSON(TransactionChannel, transactionChannel_);
      DARABONBA_PTR_TO_JSON(TransactionChannelSN, transactionChannelSN_);
      DARABONBA_PTR_TO_JSON(TransactionNumber, transactionNumber_);
      DARABONBA_PTR_TO_JSON(TransactionType, transactionType_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAccountTransactionDetailsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTimeEnd, createTimeEnd_);
      DARABONBA_PTR_FROM_JSON(CreateTimeStart, createTimeStart_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RecordID, recordID_);
      DARABONBA_PTR_FROM_JSON(TransactionChannel, transactionChannel_);
      DARABONBA_PTR_FROM_JSON(TransactionChannelSN, transactionChannelSN_);
      DARABONBA_PTR_FROM_JSON(TransactionNumber, transactionNumber_);
      DARABONBA_PTR_FROM_JSON(TransactionType, transactionType_);
    };
    QueryAccountTransactionDetailsRequest() = default ;
    QueryAccountTransactionDetailsRequest(const QueryAccountTransactionDetailsRequest &) = default ;
    QueryAccountTransactionDetailsRequest(QueryAccountTransactionDetailsRequest &&) = default ;
    QueryAccountTransactionDetailsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAccountTransactionDetailsRequest() = default ;
    QueryAccountTransactionDetailsRequest& operator=(const QueryAccountTransactionDetailsRequest &) = default ;
    QueryAccountTransactionDetailsRequest& operator=(QueryAccountTransactionDetailsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTimeEnd_ != nullptr
        && this->createTimeStart_ != nullptr && this->maxResults_ != nullptr && this->nextToken_ != nullptr && this->recordID_ != nullptr && this->transactionChannel_ != nullptr
        && this->transactionChannelSN_ != nullptr && this->transactionNumber_ != nullptr && this->transactionType_ != nullptr; };
    // createTimeEnd Field Functions 
    bool hasCreateTimeEnd() const { return this->createTimeEnd_ != nullptr;};
    void deleteCreateTimeEnd() { this->createTimeEnd_ = nullptr;};
    inline string createTimeEnd() const { DARABONBA_PTR_GET_DEFAULT(createTimeEnd_, "") };
    inline QueryAccountTransactionDetailsRequest& setCreateTimeEnd(string createTimeEnd) { DARABONBA_PTR_SET_VALUE(createTimeEnd_, createTimeEnd) };


    // createTimeStart Field Functions 
    bool hasCreateTimeStart() const { return this->createTimeStart_ != nullptr;};
    void deleteCreateTimeStart() { this->createTimeStart_ = nullptr;};
    inline string createTimeStart() const { DARABONBA_PTR_GET_DEFAULT(createTimeStart_, "") };
    inline QueryAccountTransactionDetailsRequest& setCreateTimeStart(string createTimeStart) { DARABONBA_PTR_SET_VALUE(createTimeStart_, createTimeStart) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline QueryAccountTransactionDetailsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline QueryAccountTransactionDetailsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // recordID Field Functions 
    bool hasRecordID() const { return this->recordID_ != nullptr;};
    void deleteRecordID() { this->recordID_ = nullptr;};
    inline string recordID() const { DARABONBA_PTR_GET_DEFAULT(recordID_, "") };
    inline QueryAccountTransactionDetailsRequest& setRecordID(string recordID) { DARABONBA_PTR_SET_VALUE(recordID_, recordID) };


    // transactionChannel Field Functions 
    bool hasTransactionChannel() const { return this->transactionChannel_ != nullptr;};
    void deleteTransactionChannel() { this->transactionChannel_ = nullptr;};
    inline string transactionChannel() const { DARABONBA_PTR_GET_DEFAULT(transactionChannel_, "") };
    inline QueryAccountTransactionDetailsRequest& setTransactionChannel(string transactionChannel) { DARABONBA_PTR_SET_VALUE(transactionChannel_, transactionChannel) };


    // transactionChannelSN Field Functions 
    bool hasTransactionChannelSN() const { return this->transactionChannelSN_ != nullptr;};
    void deleteTransactionChannelSN() { this->transactionChannelSN_ = nullptr;};
    inline string transactionChannelSN() const { DARABONBA_PTR_GET_DEFAULT(transactionChannelSN_, "") };
    inline QueryAccountTransactionDetailsRequest& setTransactionChannelSN(string transactionChannelSN) { DARABONBA_PTR_SET_VALUE(transactionChannelSN_, transactionChannelSN) };


    // transactionNumber Field Functions 
    bool hasTransactionNumber() const { return this->transactionNumber_ != nullptr;};
    void deleteTransactionNumber() { this->transactionNumber_ = nullptr;};
    inline string transactionNumber() const { DARABONBA_PTR_GET_DEFAULT(transactionNumber_, "") };
    inline QueryAccountTransactionDetailsRequest& setTransactionNumber(string transactionNumber) { DARABONBA_PTR_SET_VALUE(transactionNumber_, transactionNumber) };


    // transactionType Field Functions 
    bool hasTransactionType() const { return this->transactionType_ != nullptr;};
    void deleteTransactionType() { this->transactionType_ = nullptr;};
    inline string transactionType() const { DARABONBA_PTR_GET_DEFAULT(transactionType_, "") };
    inline QueryAccountTransactionDetailsRequest& setTransactionType(string transactionType) { DARABONBA_PTR_SET_VALUE(transactionType_, transactionType) };


  protected:
    // The end of the creation time range to query.
    std::shared_ptr<string> createTimeEnd_ = nullptr;
    // The beginning of the creation time range to query.
    std::shared_ptr<string> createTimeStart_ = nullptr;
    // This parameter is invalid.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The token that is used for paging.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The ID of the order or bill.
    std::shared_ptr<string> recordID_ = nullptr;
    // The transaction channel.
    std::shared_ptr<string> transactionChannel_ = nullptr;
    // The serial number of the transaction channel.
    std::shared_ptr<string> transactionChannelSN_ = nullptr;
    // The number of the transaction.
    std::shared_ptr<string> transactionNumber_ = nullptr;
    // The type of the transaction.
    std::shared_ptr<string> transactionType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
