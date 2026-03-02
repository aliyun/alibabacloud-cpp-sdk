// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMESSAGEBYQUEUENAMERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYMESSAGEBYQUEUENAMERESPONSEBODY_HPP_
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
  class QueryMessageByQueueNameResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMessageByQueueNameResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMessageByQueueNameResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryMessageByQueueNameResponseBody() = default ;
    QueryMessageByQueueNameResponseBody(const QueryMessageByQueueNameResponseBody &) = default ;
    QueryMessageByQueueNameResponseBody(QueryMessageByQueueNameResponseBody &&) = default ;
    QueryMessageByQueueNameResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMessageByQueueNameResponseBody() = default ;
    QueryMessageByQueueNameResponseBody& operator=(const QueryMessageByQueueNameResponseBody &) = default ;
    QueryMessageByQueueNameResponseBody& operator=(QueryMessageByQueueNameResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
        DARABONBA_PTR_TO_JSON(VoList, voList_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
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
          DARABONBA_PTR_TO_JSON(AmqpMessageVO, amqpMessageVO_);
        };
        friend void from_json(const Darabonba::Json& j, VoList& obj) { 
          DARABONBA_PTR_FROM_JSON(AmqpMessageVO, amqpMessageVO_);
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
        class AmqpMessageVO : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AmqpMessageVO& obj) { 
            DARABONBA_PTR_TO_JSON(AppId, appId_);
            DARABONBA_PTR_TO_JSON(Body, body_);
            DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
            DARABONBA_PTR_TO_JSON(ContentEncoding, contentEncoding_);
            DARABONBA_PTR_TO_JSON(ContentType, contentType_);
            DARABONBA_PTR_TO_JSON(CorrelationId, correlationId_);
            DARABONBA_PTR_TO_JSON(DeliveryMode, deliveryMode_);
            DARABONBA_PTR_TO_JSON(ExchangeName, exchangeName_);
            DARABONBA_PTR_TO_JSON(Expiration, expiration_);
            DARABONBA_PTR_TO_JSON(Headers, headers_);
            DARABONBA_PTR_TO_JSON(Immediate, immediate_);
            DARABONBA_PTR_TO_JSON(Mandatory, mandatory_);
            DARABONBA_PTR_TO_JSON(MessageId, messageId_);
            DARABONBA_PTR_TO_JSON(Priority, priority_);
            DARABONBA_PTR_TO_JSON(ProcessToken, processToken_);
            DARABONBA_PTR_TO_JSON(ReconsumeTimes, reconsumeTimes_);
            DARABONBA_PTR_TO_JSON(ReplyTo, replyTo_);
            DARABONBA_PTR_TO_JSON(RoutingKey, routingKey_);
            DARABONBA_PTR_TO_JSON(StoreTimestamp, storeTimestamp_);
            DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
            DARABONBA_PTR_TO_JSON(Type, type_);
            DARABONBA_PTR_TO_JSON(UserId, userId_);
          };
          friend void from_json(const Darabonba::Json& j, AmqpMessageVO& obj) { 
            DARABONBA_PTR_FROM_JSON(AppId, appId_);
            DARABONBA_PTR_FROM_JSON(Body, body_);
            DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
            DARABONBA_PTR_FROM_JSON(ContentEncoding, contentEncoding_);
            DARABONBA_PTR_FROM_JSON(ContentType, contentType_);
            DARABONBA_PTR_FROM_JSON(CorrelationId, correlationId_);
            DARABONBA_PTR_FROM_JSON(DeliveryMode, deliveryMode_);
            DARABONBA_PTR_FROM_JSON(ExchangeName, exchangeName_);
            DARABONBA_PTR_FROM_JSON(Expiration, expiration_);
            DARABONBA_PTR_FROM_JSON(Headers, headers_);
            DARABONBA_PTR_FROM_JSON(Immediate, immediate_);
            DARABONBA_PTR_FROM_JSON(Mandatory, mandatory_);
            DARABONBA_PTR_FROM_JSON(MessageId, messageId_);
            DARABONBA_PTR_FROM_JSON(Priority, priority_);
            DARABONBA_PTR_FROM_JSON(ProcessToken, processToken_);
            DARABONBA_PTR_FROM_JSON(ReconsumeTimes, reconsumeTimes_);
            DARABONBA_PTR_FROM_JSON(ReplyTo, replyTo_);
            DARABONBA_PTR_FROM_JSON(RoutingKey, routingKey_);
            DARABONBA_PTR_FROM_JSON(StoreTimestamp, storeTimestamp_);
            DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
            DARABONBA_PTR_FROM_JSON(UserId, userId_);
          };
          AmqpMessageVO() = default ;
          AmqpMessageVO(const AmqpMessageVO &) = default ;
          AmqpMessageVO(AmqpMessageVO &&) = default ;
          AmqpMessageVO(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AmqpMessageVO() = default ;
          AmqpMessageVO& operator=(const AmqpMessageVO &) = default ;
          AmqpMessageVO& operator=(AmqpMessageVO &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->appId_ == nullptr
        && this->body_ == nullptr && this->clusterId_ == nullptr && this->contentEncoding_ == nullptr && this->contentType_ == nullptr && this->correlationId_ == nullptr
        && this->deliveryMode_ == nullptr && this->exchangeName_ == nullptr && this->expiration_ == nullptr && this->headers_ == nullptr && this->immediate_ == nullptr
        && this->mandatory_ == nullptr && this->messageId_ == nullptr && this->priority_ == nullptr && this->processToken_ == nullptr && this->reconsumeTimes_ == nullptr
        && this->replyTo_ == nullptr && this->routingKey_ == nullptr && this->storeTimestamp_ == nullptr && this->timestamp_ == nullptr && this->type_ == nullptr
        && this->userId_ == nullptr; };
          // appId Field Functions 
          bool hasAppId() const { return this->appId_ != nullptr;};
          void deleteAppId() { this->appId_ = nullptr;};
          inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
          inline AmqpMessageVO& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


          // body Field Functions 
          bool hasBody() const { return this->body_ != nullptr;};
          void deleteBody() { this->body_ = nullptr;};
          inline string getBody() const { DARABONBA_PTR_GET_DEFAULT(body_, "") };
          inline AmqpMessageVO& setBody(string body) { DARABONBA_PTR_SET_VALUE(body_, body) };


          // clusterId Field Functions 
          bool hasClusterId() const { return this->clusterId_ != nullptr;};
          void deleteClusterId() { this->clusterId_ = nullptr;};
          inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
          inline AmqpMessageVO& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


          // contentEncoding Field Functions 
          bool hasContentEncoding() const { return this->contentEncoding_ != nullptr;};
          void deleteContentEncoding() { this->contentEncoding_ = nullptr;};
          inline string getContentEncoding() const { DARABONBA_PTR_GET_DEFAULT(contentEncoding_, "") };
          inline AmqpMessageVO& setContentEncoding(string contentEncoding) { DARABONBA_PTR_SET_VALUE(contentEncoding_, contentEncoding) };


          // contentType Field Functions 
          bool hasContentType() const { return this->contentType_ != nullptr;};
          void deleteContentType() { this->contentType_ = nullptr;};
          inline string getContentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
          inline AmqpMessageVO& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


          // correlationId Field Functions 
          bool hasCorrelationId() const { return this->correlationId_ != nullptr;};
          void deleteCorrelationId() { this->correlationId_ = nullptr;};
          inline string getCorrelationId() const { DARABONBA_PTR_GET_DEFAULT(correlationId_, "") };
          inline AmqpMessageVO& setCorrelationId(string correlationId) { DARABONBA_PTR_SET_VALUE(correlationId_, correlationId) };


          // deliveryMode Field Functions 
          bool hasDeliveryMode() const { return this->deliveryMode_ != nullptr;};
          void deleteDeliveryMode() { this->deliveryMode_ = nullptr;};
          inline int32_t getDeliveryMode() const { DARABONBA_PTR_GET_DEFAULT(deliveryMode_, 0) };
          inline AmqpMessageVO& setDeliveryMode(int32_t deliveryMode) { DARABONBA_PTR_SET_VALUE(deliveryMode_, deliveryMode) };


          // exchangeName Field Functions 
          bool hasExchangeName() const { return this->exchangeName_ != nullptr;};
          void deleteExchangeName() { this->exchangeName_ = nullptr;};
          inline string getExchangeName() const { DARABONBA_PTR_GET_DEFAULT(exchangeName_, "") };
          inline AmqpMessageVO& setExchangeName(string exchangeName) { DARABONBA_PTR_SET_VALUE(exchangeName_, exchangeName) };


          // expiration Field Functions 
          bool hasExpiration() const { return this->expiration_ != nullptr;};
          void deleteExpiration() { this->expiration_ = nullptr;};
          inline string getExpiration() const { DARABONBA_PTR_GET_DEFAULT(expiration_, "") };
          inline AmqpMessageVO& setExpiration(string expiration) { DARABONBA_PTR_SET_VALUE(expiration_, expiration) };


          // headers Field Functions 
          bool hasHeaders() const { return this->headers_ != nullptr;};
          void deleteHeaders() { this->headers_ = nullptr;};
          inline string getHeaders() const { DARABONBA_PTR_GET_DEFAULT(headers_, "") };
          inline AmqpMessageVO& setHeaders(string headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };


          // immediate Field Functions 
          bool hasImmediate() const { return this->immediate_ != nullptr;};
          void deleteImmediate() { this->immediate_ = nullptr;};
          inline bool getImmediate() const { DARABONBA_PTR_GET_DEFAULT(immediate_, false) };
          inline AmqpMessageVO& setImmediate(bool immediate) { DARABONBA_PTR_SET_VALUE(immediate_, immediate) };


          // mandatory Field Functions 
          bool hasMandatory() const { return this->mandatory_ != nullptr;};
          void deleteMandatory() { this->mandatory_ = nullptr;};
          inline bool getMandatory() const { DARABONBA_PTR_GET_DEFAULT(mandatory_, false) };
          inline AmqpMessageVO& setMandatory(bool mandatory) { DARABONBA_PTR_SET_VALUE(mandatory_, mandatory) };


          // messageId Field Functions 
          bool hasMessageId() const { return this->messageId_ != nullptr;};
          void deleteMessageId() { this->messageId_ = nullptr;};
          inline string getMessageId() const { DARABONBA_PTR_GET_DEFAULT(messageId_, "") };
          inline AmqpMessageVO& setMessageId(string messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };


          // priority Field Functions 
          bool hasPriority() const { return this->priority_ != nullptr;};
          void deletePriority() { this->priority_ = nullptr;};
          inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
          inline AmqpMessageVO& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


          // processToken Field Functions 
          bool hasProcessToken() const { return this->processToken_ != nullptr;};
          void deleteProcessToken() { this->processToken_ = nullptr;};
          inline string getProcessToken() const { DARABONBA_PTR_GET_DEFAULT(processToken_, "") };
          inline AmqpMessageVO& setProcessToken(string processToken) { DARABONBA_PTR_SET_VALUE(processToken_, processToken) };


          // reconsumeTimes Field Functions 
          bool hasReconsumeTimes() const { return this->reconsumeTimes_ != nullptr;};
          void deleteReconsumeTimes() { this->reconsumeTimes_ = nullptr;};
          inline int32_t getReconsumeTimes() const { DARABONBA_PTR_GET_DEFAULT(reconsumeTimes_, 0) };
          inline AmqpMessageVO& setReconsumeTimes(int32_t reconsumeTimes) { DARABONBA_PTR_SET_VALUE(reconsumeTimes_, reconsumeTimes) };


          // replyTo Field Functions 
          bool hasReplyTo() const { return this->replyTo_ != nullptr;};
          void deleteReplyTo() { this->replyTo_ = nullptr;};
          inline string getReplyTo() const { DARABONBA_PTR_GET_DEFAULT(replyTo_, "") };
          inline AmqpMessageVO& setReplyTo(string replyTo) { DARABONBA_PTR_SET_VALUE(replyTo_, replyTo) };


          // routingKey Field Functions 
          bool hasRoutingKey() const { return this->routingKey_ != nullptr;};
          void deleteRoutingKey() { this->routingKey_ = nullptr;};
          inline string getRoutingKey() const { DARABONBA_PTR_GET_DEFAULT(routingKey_, "") };
          inline AmqpMessageVO& setRoutingKey(string routingKey) { DARABONBA_PTR_SET_VALUE(routingKey_, routingKey) };


          // storeTimestamp Field Functions 
          bool hasStoreTimestamp() const { return this->storeTimestamp_ != nullptr;};
          void deleteStoreTimestamp() { this->storeTimestamp_ = nullptr;};
          inline int64_t getStoreTimestamp() const { DARABONBA_PTR_GET_DEFAULT(storeTimestamp_, 0L) };
          inline AmqpMessageVO& setStoreTimestamp(int64_t storeTimestamp) { DARABONBA_PTR_SET_VALUE(storeTimestamp_, storeTimestamp) };


          // timestamp Field Functions 
          bool hasTimestamp() const { return this->timestamp_ != nullptr;};
          void deleteTimestamp() { this->timestamp_ = nullptr;};
          inline int64_t getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
          inline AmqpMessageVO& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline AmqpMessageVO& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          // userId Field Functions 
          bool hasUserId() const { return this->userId_ != nullptr;};
          void deleteUserId() { this->userId_ = nullptr;};
          inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
          inline AmqpMessageVO& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


        protected:
          shared_ptr<string> appId_ {};
          shared_ptr<string> body_ {};
          shared_ptr<string> clusterId_ {};
          shared_ptr<string> contentEncoding_ {};
          shared_ptr<string> contentType_ {};
          shared_ptr<string> correlationId_ {};
          shared_ptr<int32_t> deliveryMode_ {};
          shared_ptr<string> exchangeName_ {};
          shared_ptr<string> expiration_ {};
          shared_ptr<string> headers_ {};
          shared_ptr<bool> immediate_ {};
          shared_ptr<bool> mandatory_ {};
          shared_ptr<string> messageId_ {};
          shared_ptr<int32_t> priority_ {};
          shared_ptr<string> processToken_ {};
          shared_ptr<int32_t> reconsumeTimes_ {};
          shared_ptr<string> replyTo_ {};
          shared_ptr<string> routingKey_ {};
          shared_ptr<int64_t> storeTimestamp_ {};
          shared_ptr<int64_t> timestamp_ {};
          shared_ptr<string> type_ {};
          shared_ptr<string> userId_ {};
        };

        virtual bool empty() const override { return this->amqpMessageVO_ == nullptr; };
        // amqpMessageVO Field Functions 
        bool hasAmqpMessageVO() const { return this->amqpMessageVO_ != nullptr;};
        void deleteAmqpMessageVO() { this->amqpMessageVO_ = nullptr;};
        inline const vector<VoList::AmqpMessageVO> & getAmqpMessageVO() const { DARABONBA_PTR_GET_CONST(amqpMessageVO_, vector<VoList::AmqpMessageVO>) };
        inline vector<VoList::AmqpMessageVO> getAmqpMessageVO() { DARABONBA_PTR_GET(amqpMessageVO_, vector<VoList::AmqpMessageVO>) };
        inline VoList& setAmqpMessageVO(const vector<VoList::AmqpMessageVO> & amqpMessageVO) { DARABONBA_PTR_SET_VALUE(amqpMessageVO_, amqpMessageVO) };
        inline VoList& setAmqpMessageVO(vector<VoList::AmqpMessageVO> && amqpMessageVO) { DARABONBA_PTR_SET_RVALUE(amqpMessageVO_, amqpMessageVO) };


      protected:
        shared_ptr<vector<VoList::AmqpMessageVO>> amqpMessageVO_ {};
      };

      virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->pageSize_ == nullptr && this->taskId_ == nullptr && this->totalCount_ == nullptr && this->voList_ == nullptr; };
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


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Data& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline Data& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


      // voList Field Functions 
      bool hasVoList() const { return this->voList_ != nullptr;};
      void deleteVoList() { this->voList_ = nullptr;};
      inline const Data::VoList & getVoList() const { DARABONBA_PTR_GET_CONST(voList_, Data::VoList) };
      inline Data::VoList getVoList() { DARABONBA_PTR_GET(voList_, Data::VoList) };
      inline Data& setVoList(const Data::VoList & voList) { DARABONBA_PTR_SET_VALUE(voList_, voList) };
      inline Data& setVoList(Data::VoList && voList) { DARABONBA_PTR_SET_RVALUE(voList_, voList) };


    protected:
      shared_ptr<int32_t> currentPage_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<string> taskId_ {};
      shared_ptr<int64_t> totalCount_ {};
      shared_ptr<Data::VoList> voList_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline QueryMessageByQueueNameResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryMessageByQueueNameResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryMessageByQueueNameResponseBody::Data) };
    inline QueryMessageByQueueNameResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryMessageByQueueNameResponseBody::Data) };
    inline QueryMessageByQueueNameResponseBody& setData(const QueryMessageByQueueNameResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryMessageByQueueNameResponseBody& setData(QueryMessageByQueueNameResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryMessageByQueueNameResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryMessageByQueueNameResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryMessageByQueueNameResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<int32_t> code_ {};
    shared_ptr<QueryMessageByQueueNameResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
