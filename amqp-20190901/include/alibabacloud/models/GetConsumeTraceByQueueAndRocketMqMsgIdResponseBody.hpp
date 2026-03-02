// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONSUMETRACEBYQUEUEANDROCKETMQMSGIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCONSUMETRACEBYQUEUEANDROCKETMQMSGIDRESPONSEBODY_HPP_
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
  class GetConsumeTraceByQueueAndRocketMqMsgIdResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetConsumeTraceByQueueAndRocketMqMsgIdResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetConsumeTraceByQueueAndRocketMqMsgIdResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetConsumeTraceByQueueAndRocketMqMsgIdResponseBody() = default ;
    GetConsumeTraceByQueueAndRocketMqMsgIdResponseBody(const GetConsumeTraceByQueueAndRocketMqMsgIdResponseBody &) = default ;
    GetConsumeTraceByQueueAndRocketMqMsgIdResponseBody(GetConsumeTraceByQueueAndRocketMqMsgIdResponseBody &&) = default ;
    GetConsumeTraceByQueueAndRocketMqMsgIdResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetConsumeTraceByQueueAndRocketMqMsgIdResponseBody() = default ;
    GetConsumeTraceByQueueAndRocketMqMsgIdResponseBody& operator=(const GetConsumeTraceByQueueAndRocketMqMsgIdResponseBody &) = default ;
    GetConsumeTraceByQueueAndRocketMqMsgIdResponseBody& operator=(GetConsumeTraceByQueueAndRocketMqMsgIdResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AutoAckTag, autoAckTag_);
        DARABONBA_PTR_TO_JSON(ClientAddress, clientAddress_);
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(ConsumeType, consumeType_);
        DARABONBA_PTR_TO_JSON(ConsumerTag, consumerTag_);
        DARABONBA_PTR_TO_JSON(CurrentStatus, currentStatus_);
        DARABONBA_PTR_TO_JSON(DeliveryErrorInfo, deliveryErrorInfo_);
        DARABONBA_PTR_TO_JSON(DeliveryTag, deliveryTag_);
        DARABONBA_ANY_TO_JSON(DlqQueueMsgIdMap, dlqQueueMsgIdMap_);
        DARABONBA_PTR_TO_JSON(Reason, reason_);
        DARABONBA_PTR_TO_JSON(ShowAckIcon, showAckIcon_);
        DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AutoAckTag, autoAckTag_);
        DARABONBA_PTR_FROM_JSON(ClientAddress, clientAddress_);
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(ConsumeType, consumeType_);
        DARABONBA_PTR_FROM_JSON(ConsumerTag, consumerTag_);
        DARABONBA_PTR_FROM_JSON(CurrentStatus, currentStatus_);
        DARABONBA_PTR_FROM_JSON(DeliveryErrorInfo, deliveryErrorInfo_);
        DARABONBA_PTR_FROM_JSON(DeliveryTag, deliveryTag_);
        DARABONBA_ANY_FROM_JSON(DlqQueueMsgIdMap, dlqQueueMsgIdMap_);
        DARABONBA_PTR_FROM_JSON(Reason, reason_);
        DARABONBA_PTR_FROM_JSON(ShowAckIcon, showAckIcon_);
        DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
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
      virtual bool empty() const override { return this->autoAckTag_ == nullptr
        && this->clientAddress_ == nullptr && this->code_ == nullptr && this->consumeType_ == nullptr && this->consumerTag_ == nullptr && this->currentStatus_ == nullptr
        && this->deliveryErrorInfo_ == nullptr && this->deliveryTag_ == nullptr && this->dlqQueueMsgIdMap_ == nullptr && this->reason_ == nullptr && this->showAckIcon_ == nullptr
        && this->timeStamp_ == nullptr && this->userId_ == nullptr; };
      // autoAckTag Field Functions 
      bool hasAutoAckTag() const { return this->autoAckTag_ != nullptr;};
      void deleteAutoAckTag() { this->autoAckTag_ = nullptr;};
      inline string getAutoAckTag() const { DARABONBA_PTR_GET_DEFAULT(autoAckTag_, "") };
      inline Data& setAutoAckTag(string autoAckTag) { DARABONBA_PTR_SET_VALUE(autoAckTag_, autoAckTag) };


      // clientAddress Field Functions 
      bool hasClientAddress() const { return this->clientAddress_ != nullptr;};
      void deleteClientAddress() { this->clientAddress_ = nullptr;};
      inline string getClientAddress() const { DARABONBA_PTR_GET_DEFAULT(clientAddress_, "") };
      inline Data& setClientAddress(string clientAddress) { DARABONBA_PTR_SET_VALUE(clientAddress_, clientAddress) };


      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline Data& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // consumeType Field Functions 
      bool hasConsumeType() const { return this->consumeType_ != nullptr;};
      void deleteConsumeType() { this->consumeType_ = nullptr;};
      inline string getConsumeType() const { DARABONBA_PTR_GET_DEFAULT(consumeType_, "") };
      inline Data& setConsumeType(string consumeType) { DARABONBA_PTR_SET_VALUE(consumeType_, consumeType) };


      // consumerTag Field Functions 
      bool hasConsumerTag() const { return this->consumerTag_ != nullptr;};
      void deleteConsumerTag() { this->consumerTag_ = nullptr;};
      inline string getConsumerTag() const { DARABONBA_PTR_GET_DEFAULT(consumerTag_, "") };
      inline Data& setConsumerTag(string consumerTag) { DARABONBA_PTR_SET_VALUE(consumerTag_, consumerTag) };


      // currentStatus Field Functions 
      bool hasCurrentStatus() const { return this->currentStatus_ != nullptr;};
      void deleteCurrentStatus() { this->currentStatus_ = nullptr;};
      inline string getCurrentStatus() const { DARABONBA_PTR_GET_DEFAULT(currentStatus_, "") };
      inline Data& setCurrentStatus(string currentStatus) { DARABONBA_PTR_SET_VALUE(currentStatus_, currentStatus) };


      // deliveryErrorInfo Field Functions 
      bool hasDeliveryErrorInfo() const { return this->deliveryErrorInfo_ != nullptr;};
      void deleteDeliveryErrorInfo() { this->deliveryErrorInfo_ = nullptr;};
      inline string getDeliveryErrorInfo() const { DARABONBA_PTR_GET_DEFAULT(deliveryErrorInfo_, "") };
      inline Data& setDeliveryErrorInfo(string deliveryErrorInfo) { DARABONBA_PTR_SET_VALUE(deliveryErrorInfo_, deliveryErrorInfo) };


      // deliveryTag Field Functions 
      bool hasDeliveryTag() const { return this->deliveryTag_ != nullptr;};
      void deleteDeliveryTag() { this->deliveryTag_ = nullptr;};
      inline string getDeliveryTag() const { DARABONBA_PTR_GET_DEFAULT(deliveryTag_, "") };
      inline Data& setDeliveryTag(string deliveryTag) { DARABONBA_PTR_SET_VALUE(deliveryTag_, deliveryTag) };


      // dlqQueueMsgIdMap Field Functions 
      bool hasDlqQueueMsgIdMap() const { return this->dlqQueueMsgIdMap_ != nullptr;};
      void deleteDlqQueueMsgIdMap() { this->dlqQueueMsgIdMap_ = nullptr;};
      inline       const Darabonba::Json & getDlqQueueMsgIdMap() const { DARABONBA_GET(dlqQueueMsgIdMap_) };
      Darabonba::Json & getDlqQueueMsgIdMap() { DARABONBA_GET(dlqQueueMsgIdMap_) };
      inline Data& setDlqQueueMsgIdMap(const Darabonba::Json & dlqQueueMsgIdMap) { DARABONBA_SET_VALUE(dlqQueueMsgIdMap_, dlqQueueMsgIdMap) };
      inline Data& setDlqQueueMsgIdMap(Darabonba::Json && dlqQueueMsgIdMap) { DARABONBA_SET_RVALUE(dlqQueueMsgIdMap_, dlqQueueMsgIdMap) };


      // reason Field Functions 
      bool hasReason() const { return this->reason_ != nullptr;};
      void deleteReason() { this->reason_ = nullptr;};
      inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
      inline Data& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


      // showAckIcon Field Functions 
      bool hasShowAckIcon() const { return this->showAckIcon_ != nullptr;};
      void deleteShowAckIcon() { this->showAckIcon_ = nullptr;};
      inline bool getShowAckIcon() const { DARABONBA_PTR_GET_DEFAULT(showAckIcon_, false) };
      inline Data& setShowAckIcon(bool showAckIcon) { DARABONBA_PTR_SET_VALUE(showAckIcon_, showAckIcon) };


      // timeStamp Field Functions 
      bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
      void deleteTimeStamp() { this->timeStamp_ = nullptr;};
      inline string getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
      inline Data& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline Data& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      shared_ptr<string> autoAckTag_ {};
      shared_ptr<string> clientAddress_ {};
      shared_ptr<string> code_ {};
      shared_ptr<string> consumeType_ {};
      shared_ptr<string> consumerTag_ {};
      shared_ptr<string> currentStatus_ {};
      shared_ptr<string> deliveryErrorInfo_ {};
      shared_ptr<string> deliveryTag_ {};
      Darabonba::Json dlqQueueMsgIdMap_ {};
      shared_ptr<string> reason_ {};
      shared_ptr<bool> showAckIcon_ {};
      shared_ptr<string> timeStamp_ {};
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetConsumeTraceByQueueAndRocketMqMsgIdResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetConsumeTraceByQueueAndRocketMqMsgIdResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<GetConsumeTraceByQueueAndRocketMqMsgIdResponseBody::Data>) };
    inline vector<GetConsumeTraceByQueueAndRocketMqMsgIdResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<GetConsumeTraceByQueueAndRocketMqMsgIdResponseBody::Data>) };
    inline GetConsumeTraceByQueueAndRocketMqMsgIdResponseBody& setData(const vector<GetConsumeTraceByQueueAndRocketMqMsgIdResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetConsumeTraceByQueueAndRocketMqMsgIdResponseBody& setData(vector<GetConsumeTraceByQueueAndRocketMqMsgIdResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetConsumeTraceByQueueAndRocketMqMsgIdResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetConsumeTraceByQueueAndRocketMqMsgIdResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetConsumeTraceByQueueAndRocketMqMsgIdResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<int32_t> code_ {};
    shared_ptr<vector<GetConsumeTraceByQueueAndRocketMqMsgIdResponseBody::Data>> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
