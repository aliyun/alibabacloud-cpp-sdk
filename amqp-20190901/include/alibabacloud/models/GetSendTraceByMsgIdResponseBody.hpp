// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSENDTRACEBYMSGIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSENDTRACEBYMSGIDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Amqp20190901
{
namespace Models
{
  class GetSendTraceByMsgIdResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSendTraceByMsgIdResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetSendTraceByMsgIdResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetSendTraceByMsgIdResponseBody() = default ;
    GetSendTraceByMsgIdResponseBody(const GetSendTraceByMsgIdResponseBody &) = default ;
    GetSendTraceByMsgIdResponseBody(GetSendTraceByMsgIdResponseBody &&) = default ;
    GetSendTraceByMsgIdResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSendTraceByMsgIdResponseBody() = default ;
    GetSendTraceByMsgIdResponseBody& operator=(const GetSendTraceByMsgIdResponseBody &) = default ;
    GetSendTraceByMsgIdResponseBody& operator=(GetSendTraceByMsgIdResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
        DARABONBA_PTR_TO_JSON(VoList, voList_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
        DARABONBA_PTR_FROM_JSON(VoList, voList_);
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
      class VoList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VoList& obj) { 
          DARABONBA_PTR_TO_JSON(Code, code_);
          DARABONBA_PTR_TO_JSON(Exchange, exchange_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(MessageBodyLength, messageBodyLength_);
          DARABONBA_ANY_TO_JSON(MessagePropertiesMap, messagePropertiesMap_);
          DARABONBA_ANY_TO_JSON(QueueMsgIdMap, queueMsgIdMap_);
          DARABONBA_PTR_TO_JSON(RemoteAddress, remoteAddress_);
          DARABONBA_PTR_TO_JSON(RoutingKey, routingKey_);
          DARABONBA_PTR_TO_JSON(SendErrorInfo, sendErrorInfo_);
          DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
          DARABONBA_PTR_TO_JSON(UserId, userId_);
          DARABONBA_PTR_TO_JSON(Vhost, vhost_);
        };
        friend void from_json(const Darabonba::Json& j, VoList& obj) { 
          DARABONBA_PTR_FROM_JSON(Code, code_);
          DARABONBA_PTR_FROM_JSON(Exchange, exchange_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(MessageBodyLength, messageBodyLength_);
          DARABONBA_ANY_FROM_JSON(MessagePropertiesMap, messagePropertiesMap_);
          DARABONBA_ANY_FROM_JSON(QueueMsgIdMap, queueMsgIdMap_);
          DARABONBA_PTR_FROM_JSON(RemoteAddress, remoteAddress_);
          DARABONBA_PTR_FROM_JSON(RoutingKey, routingKey_);
          DARABONBA_PTR_FROM_JSON(SendErrorInfo, sendErrorInfo_);
          DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
          DARABONBA_PTR_FROM_JSON(Vhost, vhost_);
        };
        VoList() = default ;
        VoList(const VoList &) = default ;
        VoList(VoList &&) = default ;
        VoList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~VoList() = default ;
        VoList& operator=(const VoList &) = default ;
        VoList& operator=(VoList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->code_ == nullptr
        && this->exchange_ == nullptr && this->instanceId_ == nullptr && this->messageBodyLength_ == nullptr && this->messagePropertiesMap_ == nullptr && this->queueMsgIdMap_ == nullptr
        && this->remoteAddress_ == nullptr && this->routingKey_ == nullptr && this->sendErrorInfo_ == nullptr && this->timeStamp_ == nullptr && this->userId_ == nullptr
        && this->vhost_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline VoList& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // exchange Field Functions 
        bool hasExchange() const { return this->exchange_ != nullptr;};
        void deleteExchange() { this->exchange_ = nullptr;};
        inline string getExchange() const { DARABONBA_PTR_GET_DEFAULT(exchange_, "") };
        inline VoList& setExchange(string exchange) { DARABONBA_PTR_SET_VALUE(exchange_, exchange) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline VoList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // messageBodyLength Field Functions 
        bool hasMessageBodyLength() const { return this->messageBodyLength_ != nullptr;};
        void deleteMessageBodyLength() { this->messageBodyLength_ = nullptr;};
        inline string getMessageBodyLength() const { DARABONBA_PTR_GET_DEFAULT(messageBodyLength_, "") };
        inline VoList& setMessageBodyLength(string messageBodyLength) { DARABONBA_PTR_SET_VALUE(messageBodyLength_, messageBodyLength) };


        // messagePropertiesMap Field Functions 
        bool hasMessagePropertiesMap() const { return this->messagePropertiesMap_ != nullptr;};
        void deleteMessagePropertiesMap() { this->messagePropertiesMap_ = nullptr;};
        inline         const Darabonba::Json & getMessagePropertiesMap() const { DARABONBA_GET(messagePropertiesMap_) };
        Darabonba::Json & getMessagePropertiesMap() { DARABONBA_GET(messagePropertiesMap_) };
        inline VoList& setMessagePropertiesMap(const Darabonba::Json & messagePropertiesMap) { DARABONBA_SET_VALUE(messagePropertiesMap_, messagePropertiesMap) };
        inline VoList& setMessagePropertiesMap(Darabonba::Json && messagePropertiesMap) { DARABONBA_SET_RVALUE(messagePropertiesMap_, messagePropertiesMap) };


        // queueMsgIdMap Field Functions 
        bool hasQueueMsgIdMap() const { return this->queueMsgIdMap_ != nullptr;};
        void deleteQueueMsgIdMap() { this->queueMsgIdMap_ = nullptr;};
        inline         const Darabonba::Json & getQueueMsgIdMap() const { DARABONBA_GET(queueMsgIdMap_) };
        Darabonba::Json & getQueueMsgIdMap() { DARABONBA_GET(queueMsgIdMap_) };
        inline VoList& setQueueMsgIdMap(const Darabonba::Json & queueMsgIdMap) { DARABONBA_SET_VALUE(queueMsgIdMap_, queueMsgIdMap) };
        inline VoList& setQueueMsgIdMap(Darabonba::Json && queueMsgIdMap) { DARABONBA_SET_RVALUE(queueMsgIdMap_, queueMsgIdMap) };


        // remoteAddress Field Functions 
        bool hasRemoteAddress() const { return this->remoteAddress_ != nullptr;};
        void deleteRemoteAddress() { this->remoteAddress_ = nullptr;};
        inline string getRemoteAddress() const { DARABONBA_PTR_GET_DEFAULT(remoteAddress_, "") };
        inline VoList& setRemoteAddress(string remoteAddress) { DARABONBA_PTR_SET_VALUE(remoteAddress_, remoteAddress) };


        // routingKey Field Functions 
        bool hasRoutingKey() const { return this->routingKey_ != nullptr;};
        void deleteRoutingKey() { this->routingKey_ = nullptr;};
        inline string getRoutingKey() const { DARABONBA_PTR_GET_DEFAULT(routingKey_, "") };
        inline VoList& setRoutingKey(string routingKey) { DARABONBA_PTR_SET_VALUE(routingKey_, routingKey) };


        // sendErrorInfo Field Functions 
        bool hasSendErrorInfo() const { return this->sendErrorInfo_ != nullptr;};
        void deleteSendErrorInfo() { this->sendErrorInfo_ = nullptr;};
        inline string getSendErrorInfo() const { DARABONBA_PTR_GET_DEFAULT(sendErrorInfo_, "") };
        inline VoList& setSendErrorInfo(string sendErrorInfo) { DARABONBA_PTR_SET_VALUE(sendErrorInfo_, sendErrorInfo) };


        // timeStamp Field Functions 
        bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
        void deleteTimeStamp() { this->timeStamp_ = nullptr;};
        inline string getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
        inline VoList& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline VoList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


        // vhost Field Functions 
        bool hasVhost() const { return this->vhost_ != nullptr;};
        void deleteVhost() { this->vhost_ = nullptr;};
        inline string getVhost() const { DARABONBA_PTR_GET_DEFAULT(vhost_, "") };
        inline VoList& setVhost(string vhost) { DARABONBA_PTR_SET_VALUE(vhost_, vhost) };


      protected:
        shared_ptr<string> code_ {};
        shared_ptr<string> exchange_ {};
        shared_ptr<string> instanceId_ {};
        shared_ptr<string> messageBodyLength_ {};
        Darabonba::Json messagePropertiesMap_ {};
        Darabonba::Json queueMsgIdMap_ {};
        shared_ptr<string> remoteAddress_ {};
        shared_ptr<string> routingKey_ {};
        shared_ptr<string> sendErrorInfo_ {};
        shared_ptr<string> timeStamp_ {};
        shared_ptr<string> userId_ {};
        shared_ptr<string> vhost_ {};
      };

      virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->pageSize_ == nullptr && this->totalCount_ == nullptr && this->voList_ == nullptr; };
      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
      inline Data& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


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


      // voList Field Functions 
      bool hasVoList() const { return this->voList_ != nullptr;};
      void deleteVoList() { this->voList_ = nullptr;};
      inline const vector<Data::VoList> & getVoList() const { DARABONBA_PTR_GET_CONST(voList_, vector<Data::VoList>) };
      inline vector<Data::VoList> getVoList() { DARABONBA_PTR_GET(voList_, vector<Data::VoList>) };
      inline Data& setVoList(const vector<Data::VoList> & voList) { DARABONBA_PTR_SET_VALUE(voList_, voList) };
      inline Data& setVoList(vector<Data::VoList> && voList) { DARABONBA_PTR_SET_RVALUE(voList_, voList) };


    protected:
      shared_ptr<int32_t> currentPage_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<int32_t> totalCount_ {};
      shared_ptr<vector<Data::VoList>> voList_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetSendTraceByMsgIdResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetSendTraceByMsgIdResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetSendTraceByMsgIdResponseBody::Data) };
    inline GetSendTraceByMsgIdResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetSendTraceByMsgIdResponseBody::Data) };
    inline GetSendTraceByMsgIdResponseBody& setData(const GetSendTraceByMsgIdResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetSendTraceByMsgIdResponseBody& setData(GetSendTraceByMsgIdResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetSendTraceByMsgIdResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSendTraceByMsgIdResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetSendTraceByMsgIdResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<int32_t> code_ {};
    shared_ptr<GetSendTraceByMsgIdResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
