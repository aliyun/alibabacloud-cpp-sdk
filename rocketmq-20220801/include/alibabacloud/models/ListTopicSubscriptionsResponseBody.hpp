// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTOPICSUBSCRIPTIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTOPICSUBSCRIPTIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class ListTopicSubscriptionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTopicSubscriptionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(dynamicCode, dynamicCode_);
      DARABONBA_PTR_TO_JSON(dynamicMessage, dynamicMessage_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListTopicSubscriptionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(dynamicCode, dynamicCode_);
      DARABONBA_PTR_FROM_JSON(dynamicMessage, dynamicMessage_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    ListTopicSubscriptionsResponseBody() = default ;
    ListTopicSubscriptionsResponseBody(const ListTopicSubscriptionsResponseBody &) = default ;
    ListTopicSubscriptionsResponseBody(ListTopicSubscriptionsResponseBody &&) = default ;
    ListTopicSubscriptionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTopicSubscriptionsResponseBody() = default ;
    ListTopicSubscriptionsResponseBody& operator=(const ListTopicSubscriptionsResponseBody &) = default ;
    ListTopicSubscriptionsResponseBody& operator=(ListTopicSubscriptionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(consistency, consistency_);
        DARABONBA_PTR_TO_JSON(consumerGroupId, consumerGroupId_);
        DARABONBA_PTR_TO_JSON(filterExpression, filterExpression_);
        DARABONBA_PTR_TO_JSON(filterExpressionType, filterExpressionType_);
        DARABONBA_PTR_TO_JSON(messageModel, messageModel_);
        DARABONBA_PTR_TO_JSON(subscriptionStatus, subscriptionStatus_);
        DARABONBA_PTR_TO_JSON(topicName, topicName_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(consistency, consistency_);
        DARABONBA_PTR_FROM_JSON(consumerGroupId, consumerGroupId_);
        DARABONBA_PTR_FROM_JSON(filterExpression, filterExpression_);
        DARABONBA_PTR_FROM_JSON(filterExpressionType, filterExpressionType_);
        DARABONBA_PTR_FROM_JSON(messageModel, messageModel_);
        DARABONBA_PTR_FROM_JSON(subscriptionStatus, subscriptionStatus_);
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
      virtual bool empty() const override { return this->consistency_ == nullptr
        && this->consumerGroupId_ == nullptr && this->filterExpression_ == nullptr && this->filterExpressionType_ == nullptr && this->messageModel_ == nullptr && this->subscriptionStatus_ == nullptr
        && this->topicName_ == nullptr; };
      // consistency Field Functions 
      bool hasConsistency() const { return this->consistency_ != nullptr;};
      void deleteConsistency() { this->consistency_ = nullptr;};
      inline string getConsistency() const { DARABONBA_PTR_GET_DEFAULT(consistency_, "") };
      inline Data& setConsistency(string consistency) { DARABONBA_PTR_SET_VALUE(consistency_, consistency) };


      // consumerGroupId Field Functions 
      bool hasConsumerGroupId() const { return this->consumerGroupId_ != nullptr;};
      void deleteConsumerGroupId() { this->consumerGroupId_ = nullptr;};
      inline string getConsumerGroupId() const { DARABONBA_PTR_GET_DEFAULT(consumerGroupId_, "") };
      inline Data& setConsumerGroupId(string consumerGroupId) { DARABONBA_PTR_SET_VALUE(consumerGroupId_, consumerGroupId) };


      // filterExpression Field Functions 
      bool hasFilterExpression() const { return this->filterExpression_ != nullptr;};
      void deleteFilterExpression() { this->filterExpression_ = nullptr;};
      inline string getFilterExpression() const { DARABONBA_PTR_GET_DEFAULT(filterExpression_, "") };
      inline Data& setFilterExpression(string filterExpression) { DARABONBA_PTR_SET_VALUE(filterExpression_, filterExpression) };


      // filterExpressionType Field Functions 
      bool hasFilterExpressionType() const { return this->filterExpressionType_ != nullptr;};
      void deleteFilterExpressionType() { this->filterExpressionType_ = nullptr;};
      inline string getFilterExpressionType() const { DARABONBA_PTR_GET_DEFAULT(filterExpressionType_, "") };
      inline Data& setFilterExpressionType(string filterExpressionType) { DARABONBA_PTR_SET_VALUE(filterExpressionType_, filterExpressionType) };


      // messageModel Field Functions 
      bool hasMessageModel() const { return this->messageModel_ != nullptr;};
      void deleteMessageModel() { this->messageModel_ = nullptr;};
      inline string getMessageModel() const { DARABONBA_PTR_GET_DEFAULT(messageModel_, "") };
      inline Data& setMessageModel(string messageModel) { DARABONBA_PTR_SET_VALUE(messageModel_, messageModel) };


      // subscriptionStatus Field Functions 
      bool hasSubscriptionStatus() const { return this->subscriptionStatus_ != nullptr;};
      void deleteSubscriptionStatus() { this->subscriptionStatus_ = nullptr;};
      inline string getSubscriptionStatus() const { DARABONBA_PTR_GET_DEFAULT(subscriptionStatus_, "") };
      inline Data& setSubscriptionStatus(string subscriptionStatus) { DARABONBA_PTR_SET_VALUE(subscriptionStatus_, subscriptionStatus) };


      // topicName Field Functions 
      bool hasTopicName() const { return this->topicName_ != nullptr;};
      void deleteTopicName() { this->topicName_ = nullptr;};
      inline string getTopicName() const { DARABONBA_PTR_GET_DEFAULT(topicName_, "") };
      inline Data& setTopicName(string topicName) { DARABONBA_PTR_SET_VALUE(topicName_, topicName) };


    protected:
      // Indicates whether message consumption is consistent. Valid values:
      // 
      // *   false: Unconsumed messages exist in the consumer group.
      // *   true: No unconsumed message exists in the consumer group.
      shared_ptr<string> consistency_ {};
      // The consumer group ID.
      shared_ptr<string> consumerGroupId_ {};
      // The filter expression.
      shared_ptr<string> filterExpression_ {};
      // The type of the filter expression. Valid values: SQL, TAG, and UNSPECIFIED. The value SQL indicates that messages are filtered by using SQL expressions. The value TAG indicates that messages are filtered by using tags. The value UNSPECIFIED indicates that no filter expression type is specified.
      shared_ptr<string> filterExpressionType_ {};
      // The consumption mode. Valid values: BROADCASTING and CLUSTERING.
      shared_ptr<string> messageModel_ {};
      // The subscription status. Valid values: ONLINE and OFFLINE.
      shared_ptr<string> subscriptionStatus_ {};
      // The topic name.
      shared_ptr<string> topicName_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->dynamicCode_ == nullptr && this->dynamicMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListTopicSubscriptionsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListTopicSubscriptionsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListTopicSubscriptionsResponseBody::Data>) };
    inline vector<ListTopicSubscriptionsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListTopicSubscriptionsResponseBody::Data>) };
    inline ListTopicSubscriptionsResponseBody& setData(const vector<ListTopicSubscriptionsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListTopicSubscriptionsResponseBody& setData(vector<ListTopicSubscriptionsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // dynamicCode Field Functions 
    bool hasDynamicCode() const { return this->dynamicCode_ != nullptr;};
    void deleteDynamicCode() { this->dynamicCode_ = nullptr;};
    inline string getDynamicCode() const { DARABONBA_PTR_GET_DEFAULT(dynamicCode_, "") };
    inline ListTopicSubscriptionsResponseBody& setDynamicCode(string dynamicCode) { DARABONBA_PTR_SET_VALUE(dynamicCode_, dynamicCode) };


    // dynamicMessage Field Functions 
    bool hasDynamicMessage() const { return this->dynamicMessage_ != nullptr;};
    void deleteDynamicMessage() { this->dynamicMessage_ = nullptr;};
    inline string getDynamicMessage() const { DARABONBA_PTR_GET_DEFAULT(dynamicMessage_, "") };
    inline ListTopicSubscriptionsResponseBody& setDynamicMessage(string dynamicMessage) { DARABONBA_PTR_SET_VALUE(dynamicMessage_, dynamicMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListTopicSubscriptionsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListTopicSubscriptionsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTopicSubscriptionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListTopicSubscriptionsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code.
    shared_ptr<string> code_ {};
    // The returned data.
    shared_ptr<vector<ListTopicSubscriptionsResponseBody::Data>> data_ {};
    // The dynamic error code.
    shared_ptr<string> dynamicCode_ {};
    // The dynamic error message.
    shared_ptr<string> dynamicMessage_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The error message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
