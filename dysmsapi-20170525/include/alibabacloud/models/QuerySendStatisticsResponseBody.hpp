// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSENDSTATISTICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYSENDSTATISTICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class QuerySendStatisticsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySendStatisticsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySendStatisticsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QuerySendStatisticsResponseBody() = default ;
    QuerySendStatisticsResponseBody(const QuerySendStatisticsResponseBody &) = default ;
    QuerySendStatisticsResponseBody(QuerySendStatisticsResponseBody &&) = default ;
    QuerySendStatisticsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySendStatisticsResponseBody() = default ;
    QuerySendStatisticsResponseBody& operator=(const QuerySendStatisticsResponseBody &) = default ;
    QuerySendStatisticsResponseBody& operator=(QuerySendStatisticsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(TargetList, targetList_);
        DARABONBA_PTR_TO_JSON(TotalSize, totalSize_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(TargetList, targetList_);
        DARABONBA_PTR_FROM_JSON(TotalSize, totalSize_);
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
      class TargetList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TargetList& obj) { 
          DARABONBA_PTR_TO_JSON(NoRespondedCount, noRespondedCount_);
          DARABONBA_PTR_TO_JSON(RespondedFailCount, respondedFailCount_);
          DARABONBA_PTR_TO_JSON(RespondedSuccessCount, respondedSuccessCount_);
          DARABONBA_PTR_TO_JSON(SendDate, sendDate_);
          DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
        };
        friend void from_json(const Darabonba::Json& j, TargetList& obj) { 
          DARABONBA_PTR_FROM_JSON(NoRespondedCount, noRespondedCount_);
          DARABONBA_PTR_FROM_JSON(RespondedFailCount, respondedFailCount_);
          DARABONBA_PTR_FROM_JSON(RespondedSuccessCount, respondedSuccessCount_);
          DARABONBA_PTR_FROM_JSON(SendDate, sendDate_);
          DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
        };
        TargetList() = default ;
        TargetList(const TargetList &) = default ;
        TargetList(TargetList &&) = default ;
        TargetList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TargetList() = default ;
        TargetList& operator=(const TargetList &) = default ;
        TargetList& operator=(TargetList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->noRespondedCount_ == nullptr
        && this->respondedFailCount_ == nullptr && this->respondedSuccessCount_ == nullptr && this->sendDate_ == nullptr && this->totalCount_ == nullptr; };
        // noRespondedCount Field Functions 
        bool hasNoRespondedCount() const { return this->noRespondedCount_ != nullptr;};
        void deleteNoRespondedCount() { this->noRespondedCount_ = nullptr;};
        inline int64_t getNoRespondedCount() const { DARABONBA_PTR_GET_DEFAULT(noRespondedCount_, 0L) };
        inline TargetList& setNoRespondedCount(int64_t noRespondedCount) { DARABONBA_PTR_SET_VALUE(noRespondedCount_, noRespondedCount) };


        // respondedFailCount Field Functions 
        bool hasRespondedFailCount() const { return this->respondedFailCount_ != nullptr;};
        void deleteRespondedFailCount() { this->respondedFailCount_ = nullptr;};
        inline int64_t getRespondedFailCount() const { DARABONBA_PTR_GET_DEFAULT(respondedFailCount_, 0L) };
        inline TargetList& setRespondedFailCount(int64_t respondedFailCount) { DARABONBA_PTR_SET_VALUE(respondedFailCount_, respondedFailCount) };


        // respondedSuccessCount Field Functions 
        bool hasRespondedSuccessCount() const { return this->respondedSuccessCount_ != nullptr;};
        void deleteRespondedSuccessCount() { this->respondedSuccessCount_ = nullptr;};
        inline int64_t getRespondedSuccessCount() const { DARABONBA_PTR_GET_DEFAULT(respondedSuccessCount_, 0L) };
        inline TargetList& setRespondedSuccessCount(int64_t respondedSuccessCount) { DARABONBA_PTR_SET_VALUE(respondedSuccessCount_, respondedSuccessCount) };


        // sendDate Field Functions 
        bool hasSendDate() const { return this->sendDate_ != nullptr;};
        void deleteSendDate() { this->sendDate_ = nullptr;};
        inline string getSendDate() const { DARABONBA_PTR_GET_DEFAULT(sendDate_, "") };
        inline TargetList& setSendDate(string sendDate) { DARABONBA_PTR_SET_VALUE(sendDate_, sendDate) };


        // totalCount Field Functions 
        bool hasTotalCount() const { return this->totalCount_ != nullptr;};
        void deleteTotalCount() { this->totalCount_ = nullptr;};
        inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
        inline TargetList& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


      protected:
        // The number of messages without a delivery receipt.
        shared_ptr<int64_t> noRespondedCount_ {};
        // The number of messages with a delivery receipt that indicates a failure.
        shared_ptr<int64_t> respondedFailCount_ {};
        // The number of messages with a delivery receipt that indicates a success.
        shared_ptr<int64_t> respondedSuccessCount_ {};
        // The date when the message is sent. Format: yyyyMMdd. Example: 20181225.
        shared_ptr<string> sendDate_ {};
        // The number of delivered messages.
        shared_ptr<int64_t> totalCount_ {};
      };

      virtual bool empty() const override { return this->targetList_ == nullptr
        && this->totalSize_ == nullptr; };
      // targetList Field Functions 
      bool hasTargetList() const { return this->targetList_ != nullptr;};
      void deleteTargetList() { this->targetList_ = nullptr;};
      inline const vector<Data::TargetList> & getTargetList() const { DARABONBA_PTR_GET_CONST(targetList_, vector<Data::TargetList>) };
      inline vector<Data::TargetList> getTargetList() { DARABONBA_PTR_GET(targetList_, vector<Data::TargetList>) };
      inline Data& setTargetList(const vector<Data::TargetList> & targetList) { DARABONBA_PTR_SET_VALUE(targetList_, targetList) };
      inline Data& setTargetList(vector<Data::TargetList> && targetList) { DARABONBA_PTR_SET_RVALUE(targetList_, targetList) };


      // totalSize Field Functions 
      bool hasTotalSize() const { return this->totalSize_ != nullptr;};
      void deleteTotalSize() { this->totalSize_ = nullptr;};
      inline int64_t getTotalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0L) };
      inline Data& setTotalSize(int64_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


    protected:
      // The details of the data returned.
      shared_ptr<vector<Data::TargetList>> targetList_ {};
      // The total number of entries returned.
      shared_ptr<int64_t> totalSize_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QuerySendStatisticsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QuerySendStatisticsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QuerySendStatisticsResponseBody::Data) };
    inline QuerySendStatisticsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QuerySendStatisticsResponseBody::Data) };
    inline QuerySendStatisticsResponseBody& setData(const QuerySendStatisticsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QuerySendStatisticsResponseBody& setData(QuerySendStatisticsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QuerySendStatisticsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QuerySendStatisticsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response code.
    // 
    // *   If OK is returned, the request is successful.
    // *   Other values indicate that the request fails. For more information, see [Error codes](https://help.aliyun.com/document_detail/101346.html).
    shared_ptr<string> code_ {};
    // The data returned.
    shared_ptr<QuerySendStatisticsResponseBody::Data> data_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
