// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONSUMETIMESPANRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCONSUMETIMESPANRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class GetConsumeTimespanResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetConsumeTimespanResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(dynamicCode, dynamicCode_);
      DARABONBA_PTR_TO_JSON(dynamicMessage, dynamicMessage_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetConsumeTimespanResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(dynamicCode, dynamicCode_);
      DARABONBA_PTR_FROM_JSON(dynamicMessage, dynamicMessage_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    GetConsumeTimespanResponseBody() = default ;
    GetConsumeTimespanResponseBody(const GetConsumeTimespanResponseBody &) = default ;
    GetConsumeTimespanResponseBody(GetConsumeTimespanResponseBody &&) = default ;
    GetConsumeTimespanResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetConsumeTimespanResponseBody() = default ;
    GetConsumeTimespanResponseBody& operator=(const GetConsumeTimespanResponseBody &) = default ;
    GetConsumeTimespanResponseBody& operator=(GetConsumeTimespanResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(consumeTimestamp, consumeTimestamp_);
        DARABONBA_PTR_TO_JSON(consumerGroupId, consumerGroupId_);
        DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(maxTimestamp, maxTimestamp_);
        DARABONBA_PTR_TO_JSON(minTimestamp, minTimestamp_);
        DARABONBA_PTR_TO_JSON(topicName, topicName_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(consumeTimestamp, consumeTimestamp_);
        DARABONBA_PTR_FROM_JSON(consumerGroupId, consumerGroupId_);
        DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(maxTimestamp, maxTimestamp_);
        DARABONBA_PTR_FROM_JSON(minTimestamp, minTimestamp_);
        DARABONBA_PTR_FROM_JSON(topicName, topicName_);
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
      virtual bool empty() const override { return this->consumeTimestamp_ == nullptr
        && this->consumerGroupId_ == nullptr && this->instanceId_ == nullptr && this->maxTimestamp_ == nullptr && this->minTimestamp_ == nullptr && this->topicName_ == nullptr; };
      // consumeTimestamp Field Functions 
      bool hasConsumeTimestamp() const { return this->consumeTimestamp_ != nullptr;};
      void deleteConsumeTimestamp() { this->consumeTimestamp_ = nullptr;};
      inline int64_t getConsumeTimestamp() const { DARABONBA_PTR_GET_DEFAULT(consumeTimestamp_, 0L) };
      inline Data& setConsumeTimestamp(int64_t consumeTimestamp) { DARABONBA_PTR_SET_VALUE(consumeTimestamp_, consumeTimestamp) };


      // consumerGroupId Field Functions 
      bool hasConsumerGroupId() const { return this->consumerGroupId_ != nullptr;};
      void deleteConsumerGroupId() { this->consumerGroupId_ = nullptr;};
      inline string getConsumerGroupId() const { DARABONBA_PTR_GET_DEFAULT(consumerGroupId_, "") };
      inline Data& setConsumerGroupId(string consumerGroupId) { DARABONBA_PTR_SET_VALUE(consumerGroupId_, consumerGroupId) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Data& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // maxTimestamp Field Functions 
      bool hasMaxTimestamp() const { return this->maxTimestamp_ != nullptr;};
      void deleteMaxTimestamp() { this->maxTimestamp_ = nullptr;};
      inline int64_t getMaxTimestamp() const { DARABONBA_PTR_GET_DEFAULT(maxTimestamp_, 0L) };
      inline Data& setMaxTimestamp(int64_t maxTimestamp) { DARABONBA_PTR_SET_VALUE(maxTimestamp_, maxTimestamp) };


      // minTimestamp Field Functions 
      bool hasMinTimestamp() const { return this->minTimestamp_ != nullptr;};
      void deleteMinTimestamp() { this->minTimestamp_ = nullptr;};
      inline int64_t getMinTimestamp() const { DARABONBA_PTR_GET_DEFAULT(minTimestamp_, 0L) };
      inline Data& setMinTimestamp(int64_t minTimestamp) { DARABONBA_PTR_SET_VALUE(minTimestamp_, minTimestamp) };


      // topicName Field Functions 
      bool hasTopicName() const { return this->topicName_ != nullptr;};
      void deleteTopicName() { this->topicName_ = nullptr;};
      inline string getTopicName() const { DARABONBA_PTR_GET_DEFAULT(topicName_, "") };
      inline Data& setTopicName(string topicName) { DARABONBA_PTR_SET_VALUE(topicName_, topicName) };


    protected:
      shared_ptr<int64_t> consumeTimestamp_ {};
      shared_ptr<string> consumerGroupId_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<int64_t> maxTimestamp_ {};
      shared_ptr<int64_t> minTimestamp_ {};
      shared_ptr<string> topicName_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->dynamicCode_ == nullptr && this->dynamicMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetConsumeTimespanResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetConsumeTimespanResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetConsumeTimespanResponseBody::Data) };
    inline GetConsumeTimespanResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetConsumeTimespanResponseBody::Data) };
    inline GetConsumeTimespanResponseBody& setData(const GetConsumeTimespanResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetConsumeTimespanResponseBody& setData(GetConsumeTimespanResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // dynamicCode Field Functions 
    bool hasDynamicCode() const { return this->dynamicCode_ != nullptr;};
    void deleteDynamicCode() { this->dynamicCode_ = nullptr;};
    inline string getDynamicCode() const { DARABONBA_PTR_GET_DEFAULT(dynamicCode_, "") };
    inline GetConsumeTimespanResponseBody& setDynamicCode(string dynamicCode) { DARABONBA_PTR_SET_VALUE(dynamicCode_, dynamicCode) };


    // dynamicMessage Field Functions 
    bool hasDynamicMessage() const { return this->dynamicMessage_ != nullptr;};
    void deleteDynamicMessage() { this->dynamicMessage_ = nullptr;};
    inline string getDynamicMessage() const { DARABONBA_PTR_GET_DEFAULT(dynamicMessage_, "") };
    inline GetConsumeTimespanResponseBody& setDynamicMessage(string dynamicMessage) { DARABONBA_PTR_SET_VALUE(dynamicMessage_, dynamicMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetConsumeTimespanResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetConsumeTimespanResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetConsumeTimespanResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetConsumeTimespanResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetConsumeTimespanResponseBody::Data> data_ {};
    shared_ptr<string> dynamicCode_ {};
    shared_ptr<string> dynamicMessage_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
