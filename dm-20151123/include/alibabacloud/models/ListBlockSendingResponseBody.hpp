// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBLOCKSENDINGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTBLOCKSENDINGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class ListBlockSendingResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBlockSendingResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListBlockSendingResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListBlockSendingResponseBody() = default ;
    ListBlockSendingResponseBody(const ListBlockSendingResponseBody &) = default ;
    ListBlockSendingResponseBody(ListBlockSendingResponseBody &&) = default ;
    ListBlockSendingResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBlockSendingResponseBody() = default ;
    ListBlockSendingResponseBody& operator=(const ListBlockSendingResponseBody &) = default ;
    ListBlockSendingResponseBody& operator=(ListBlockSendingResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(BlockEmail, blockEmail_);
        DARABONBA_PTR_TO_JSON(BlockTime, blockTime_);
        DARABONBA_PTR_TO_JSON(Reason, reason_);
        DARABONBA_PTR_TO_JSON(SendTime, sendTime_);
        DARABONBA_PTR_TO_JSON(SenderEmail, senderEmail_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(BlockEmail, blockEmail_);
        DARABONBA_PTR_FROM_JSON(BlockTime, blockTime_);
        DARABONBA_PTR_FROM_JSON(Reason, reason_);
        DARABONBA_PTR_FROM_JSON(SendTime, sendTime_);
        DARABONBA_PTR_FROM_JSON(SenderEmail, senderEmail_);
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
      virtual bool empty() const override { return this->blockEmail_ == nullptr
        && this->blockTime_ == nullptr && this->reason_ == nullptr && this->sendTime_ == nullptr && this->senderEmail_ == nullptr; };
      // blockEmail Field Functions 
      bool hasBlockEmail() const { return this->blockEmail_ != nullptr;};
      void deleteBlockEmail() { this->blockEmail_ = nullptr;};
      inline string getBlockEmail() const { DARABONBA_PTR_GET_DEFAULT(blockEmail_, "") };
      inline Data& setBlockEmail(string blockEmail) { DARABONBA_PTR_SET_VALUE(blockEmail_, blockEmail) };


      // blockTime Field Functions 
      bool hasBlockTime() const { return this->blockTime_ != nullptr;};
      void deleteBlockTime() { this->blockTime_ = nullptr;};
      inline int32_t getBlockTime() const { DARABONBA_PTR_GET_DEFAULT(blockTime_, 0) };
      inline Data& setBlockTime(int32_t blockTime) { DARABONBA_PTR_SET_VALUE(blockTime_, blockTime) };


      // reason Field Functions 
      bool hasReason() const { return this->reason_ != nullptr;};
      void deleteReason() { this->reason_ = nullptr;};
      inline int32_t getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, 0) };
      inline Data& setReason(int32_t reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


      // sendTime Field Functions 
      bool hasSendTime() const { return this->sendTime_ != nullptr;};
      void deleteSendTime() { this->sendTime_ = nullptr;};
      inline int32_t getSendTime() const { DARABONBA_PTR_GET_DEFAULT(sendTime_, 0) };
      inline Data& setSendTime(int32_t sendTime) { DARABONBA_PTR_SET_VALUE(sendTime_, sendTime) };


      // senderEmail Field Functions 
      bool hasSenderEmail() const { return this->senderEmail_ != nullptr;};
      void deleteSenderEmail() { this->senderEmail_ = nullptr;};
      inline string getSenderEmail() const { DARABONBA_PTR_GET_DEFAULT(senderEmail_, "") };
      inline Data& setSenderEmail(string senderEmail) { DARABONBA_PTR_SET_VALUE(senderEmail_, senderEmail) };


    protected:
      shared_ptr<string> blockEmail_ {};
      shared_ptr<int32_t> blockTime_ {};
      shared_ptr<int32_t> reason_ {};
      shared_ptr<int32_t> sendTime_ {};
      shared_ptr<string> senderEmail_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListBlockSendingResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListBlockSendingResponseBody::Data>) };
    inline vector<ListBlockSendingResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListBlockSendingResponseBody::Data>) };
    inline ListBlockSendingResponseBody& setData(const vector<ListBlockSendingResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListBlockSendingResponseBody& setData(vector<ListBlockSendingResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListBlockSendingResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListBlockSendingResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListBlockSendingResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<ListBlockSendingResponseBody::Data>> data_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
