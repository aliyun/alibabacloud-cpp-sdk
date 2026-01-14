// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONSUMERGROUPSUBSCRIPTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCONSUMERGROUPSUBSCRIPTIONRESPONSEBODY_HPP_
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
  class GetConsumerGroupSubscriptionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetConsumerGroupSubscriptionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(dynamicCode, dynamicCode_);
      DARABONBA_PTR_TO_JSON(dynamicMessage, dynamicMessage_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetConsumerGroupSubscriptionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(dynamicCode, dynamicCode_);
      DARABONBA_PTR_FROM_JSON(dynamicMessage, dynamicMessage_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    GetConsumerGroupSubscriptionResponseBody() = default ;
    GetConsumerGroupSubscriptionResponseBody(const GetConsumerGroupSubscriptionResponseBody &) = default ;
    GetConsumerGroupSubscriptionResponseBody(GetConsumerGroupSubscriptionResponseBody &&) = default ;
    GetConsumerGroupSubscriptionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetConsumerGroupSubscriptionResponseBody() = default ;
    GetConsumerGroupSubscriptionResponseBody& operator=(const GetConsumerGroupSubscriptionResponseBody &) = default ;
    GetConsumerGroupSubscriptionResponseBody& operator=(GetConsumerGroupSubscriptionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(connectionDTO, connectionDTO_);
        DARABONBA_PTR_TO_JSON(subscriptionDTO, subscriptionDTO_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(connectionDTO, connectionDTO_);
        DARABONBA_PTR_FROM_JSON(subscriptionDTO, subscriptionDTO_);
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
      class SubscriptionDTO : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SubscriptionDTO& obj) { 
          DARABONBA_PTR_TO_JSON(consumerGroupId, consumerGroupId_);
          DARABONBA_PTR_TO_JSON(filterExpression, filterExpression_);
          DARABONBA_PTR_TO_JSON(filterExpressionType, filterExpressionType_);
          DARABONBA_PTR_TO_JSON(messageModel, messageModel_);
          DARABONBA_PTR_TO_JSON(subscriptionStatus, subscriptionStatus_);
          DARABONBA_PTR_TO_JSON(topicName, topicName_);
        };
        friend void from_json(const Darabonba::Json& j, SubscriptionDTO& obj) { 
          DARABONBA_PTR_FROM_JSON(consumerGroupId, consumerGroupId_);
          DARABONBA_PTR_FROM_JSON(filterExpression, filterExpression_);
          DARABONBA_PTR_FROM_JSON(filterExpressionType, filterExpressionType_);
          DARABONBA_PTR_FROM_JSON(messageModel, messageModel_);
          DARABONBA_PTR_FROM_JSON(subscriptionStatus, subscriptionStatus_);
          DARABONBA_PTR_FROM_JSON(topicName, topicName_);
        };
        SubscriptionDTO() = default ;
        SubscriptionDTO(const SubscriptionDTO &) = default ;
        SubscriptionDTO(SubscriptionDTO &&) = default ;
        SubscriptionDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SubscriptionDTO() = default ;
        SubscriptionDTO& operator=(const SubscriptionDTO &) = default ;
        SubscriptionDTO& operator=(SubscriptionDTO &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->consumerGroupId_ == nullptr
        && this->filterExpression_ == nullptr && this->filterExpressionType_ == nullptr && this->messageModel_ == nullptr && this->subscriptionStatus_ == nullptr && this->topicName_ == nullptr; };
        // consumerGroupId Field Functions 
        bool hasConsumerGroupId() const { return this->consumerGroupId_ != nullptr;};
        void deleteConsumerGroupId() { this->consumerGroupId_ = nullptr;};
        inline string getConsumerGroupId() const { DARABONBA_PTR_GET_DEFAULT(consumerGroupId_, "") };
        inline SubscriptionDTO& setConsumerGroupId(string consumerGroupId) { DARABONBA_PTR_SET_VALUE(consumerGroupId_, consumerGroupId) };


        // filterExpression Field Functions 
        bool hasFilterExpression() const { return this->filterExpression_ != nullptr;};
        void deleteFilterExpression() { this->filterExpression_ = nullptr;};
        inline string getFilterExpression() const { DARABONBA_PTR_GET_DEFAULT(filterExpression_, "") };
        inline SubscriptionDTO& setFilterExpression(string filterExpression) { DARABONBA_PTR_SET_VALUE(filterExpression_, filterExpression) };


        // filterExpressionType Field Functions 
        bool hasFilterExpressionType() const { return this->filterExpressionType_ != nullptr;};
        void deleteFilterExpressionType() { this->filterExpressionType_ = nullptr;};
        inline string getFilterExpressionType() const { DARABONBA_PTR_GET_DEFAULT(filterExpressionType_, "") };
        inline SubscriptionDTO& setFilterExpressionType(string filterExpressionType) { DARABONBA_PTR_SET_VALUE(filterExpressionType_, filterExpressionType) };


        // messageModel Field Functions 
        bool hasMessageModel() const { return this->messageModel_ != nullptr;};
        void deleteMessageModel() { this->messageModel_ = nullptr;};
        inline string getMessageModel() const { DARABONBA_PTR_GET_DEFAULT(messageModel_, "") };
        inline SubscriptionDTO& setMessageModel(string messageModel) { DARABONBA_PTR_SET_VALUE(messageModel_, messageModel) };


        // subscriptionStatus Field Functions 
        bool hasSubscriptionStatus() const { return this->subscriptionStatus_ != nullptr;};
        void deleteSubscriptionStatus() { this->subscriptionStatus_ = nullptr;};
        inline string getSubscriptionStatus() const { DARABONBA_PTR_GET_DEFAULT(subscriptionStatus_, "") };
        inline SubscriptionDTO& setSubscriptionStatus(string subscriptionStatus) { DARABONBA_PTR_SET_VALUE(subscriptionStatus_, subscriptionStatus) };


        // topicName Field Functions 
        bool hasTopicName() const { return this->topicName_ != nullptr;};
        void deleteTopicName() { this->topicName_ = nullptr;};
        inline string getTopicName() const { DARABONBA_PTR_GET_DEFAULT(topicName_, "") };
        inline SubscriptionDTO& setTopicName(string topicName) { DARABONBA_PTR_SET_VALUE(topicName_, topicName) };


      protected:
        // The consumer group ID.
        shared_ptr<string> consumerGroupId_ {};
        // The filter expression.
        shared_ptr<string> filterExpression_ {};
        // The type of the filter expression. Valid values:
        // 
        // *   SQL: filters messages by using SQL expressions.
        // *   TAG: filters messages by using tags.
        shared_ptr<string> filterExpressionType_ {};
        // The consumption mode of the consumer group. Valid values:
        // 
        // *   BROADCASTING: broadcasting consumption
        // *   CLUSTERING: clustering consumption
        shared_ptr<string> messageModel_ {};
        // The subscription status. Valid values:
        // 
        // *   ONLINE: The consumer group is online. If the consumer group contains multiple consumers, this value is returned if at least one of the consumers is online.
        // *   OFFLINE: The consumer group is offline. If the consumer group contains multiple consumers, this value is returned only if all consumers are offline.
        shared_ptr<string> subscriptionStatus_ {};
        // The topic to which the consumer group subscribes.
        shared_ptr<string> topicName_ {};
      };

      class ConnectionDTO : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ConnectionDTO& obj) { 
          DARABONBA_PTR_TO_JSON(clientId, clientId_);
          DARABONBA_PTR_TO_JSON(egressIp, egressIp_);
          DARABONBA_PTR_TO_JSON(hostname, hostname_);
          DARABONBA_PTR_TO_JSON(language, language_);
          DARABONBA_PTR_TO_JSON(messageModel, messageModel_);
          DARABONBA_PTR_TO_JSON(version, version_);
        };
        friend void from_json(const Darabonba::Json& j, ConnectionDTO& obj) { 
          DARABONBA_PTR_FROM_JSON(clientId, clientId_);
          DARABONBA_PTR_FROM_JSON(egressIp, egressIp_);
          DARABONBA_PTR_FROM_JSON(hostname, hostname_);
          DARABONBA_PTR_FROM_JSON(language, language_);
          DARABONBA_PTR_FROM_JSON(messageModel, messageModel_);
          DARABONBA_PTR_FROM_JSON(version, version_);
        };
        ConnectionDTO() = default ;
        ConnectionDTO(const ConnectionDTO &) = default ;
        ConnectionDTO(ConnectionDTO &&) = default ;
        ConnectionDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ConnectionDTO() = default ;
        ConnectionDTO& operator=(const ConnectionDTO &) = default ;
        ConnectionDTO& operator=(ConnectionDTO &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->clientId_ == nullptr
        && this->egressIp_ == nullptr && this->hostname_ == nullptr && this->language_ == nullptr && this->messageModel_ == nullptr && this->version_ == nullptr; };
        // clientId Field Functions 
        bool hasClientId() const { return this->clientId_ != nullptr;};
        void deleteClientId() { this->clientId_ = nullptr;};
        inline string getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
        inline ConnectionDTO& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


        // egressIp Field Functions 
        bool hasEgressIp() const { return this->egressIp_ != nullptr;};
        void deleteEgressIp() { this->egressIp_ = nullptr;};
        inline string getEgressIp() const { DARABONBA_PTR_GET_DEFAULT(egressIp_, "") };
        inline ConnectionDTO& setEgressIp(string egressIp) { DARABONBA_PTR_SET_VALUE(egressIp_, egressIp) };


        // hostname Field Functions 
        bool hasHostname() const { return this->hostname_ != nullptr;};
        void deleteHostname() { this->hostname_ = nullptr;};
        inline string getHostname() const { DARABONBA_PTR_GET_DEFAULT(hostname_, "") };
        inline ConnectionDTO& setHostname(string hostname) { DARABONBA_PTR_SET_VALUE(hostname_, hostname) };


        // language Field Functions 
        bool hasLanguage() const { return this->language_ != nullptr;};
        void deleteLanguage() { this->language_ = nullptr;};
        inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
        inline ConnectionDTO& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


        // messageModel Field Functions 
        bool hasMessageModel() const { return this->messageModel_ != nullptr;};
        void deleteMessageModel() { this->messageModel_ = nullptr;};
        inline string getMessageModel() const { DARABONBA_PTR_GET_DEFAULT(messageModel_, "") };
        inline ConnectionDTO& setMessageModel(string messageModel) { DARABONBA_PTR_SET_VALUE(messageModel_, messageModel) };


        // version Field Functions 
        bool hasVersion() const { return this->version_ != nullptr;};
        void deleteVersion() { this->version_ = nullptr;};
        inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
        inline ConnectionDTO& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      protected:
        // The client ID.
        shared_ptr<string> clientId_ {};
        // The public IP address of the host.
        shared_ptr<string> egressIp_ {};
        // The host name.
        shared_ptr<string> hostname_ {};
        // The language used by the client.
        shared_ptr<string> language_ {};
        // The consumption mode of the consumer group. Valid values:
        // 
        // *   BROADCASTING: broadcasting consumption
        // *   CLUSTERING: clustering consumption
        shared_ptr<string> messageModel_ {};
        // The client version.
        shared_ptr<string> version_ {};
      };

      virtual bool empty() const override { return this->connectionDTO_ == nullptr
        && this->subscriptionDTO_ == nullptr; };
      // connectionDTO Field Functions 
      bool hasConnectionDTO() const { return this->connectionDTO_ != nullptr;};
      void deleteConnectionDTO() { this->connectionDTO_ = nullptr;};
      inline const Data::ConnectionDTO & getConnectionDTO() const { DARABONBA_PTR_GET_CONST(connectionDTO_, Data::ConnectionDTO) };
      inline Data::ConnectionDTO getConnectionDTO() { DARABONBA_PTR_GET(connectionDTO_, Data::ConnectionDTO) };
      inline Data& setConnectionDTO(const Data::ConnectionDTO & connectionDTO) { DARABONBA_PTR_SET_VALUE(connectionDTO_, connectionDTO) };
      inline Data& setConnectionDTO(Data::ConnectionDTO && connectionDTO) { DARABONBA_PTR_SET_RVALUE(connectionDTO_, connectionDTO) };


      // subscriptionDTO Field Functions 
      bool hasSubscriptionDTO() const { return this->subscriptionDTO_ != nullptr;};
      void deleteSubscriptionDTO() { this->subscriptionDTO_ = nullptr;};
      inline const Data::SubscriptionDTO & getSubscriptionDTO() const { DARABONBA_PTR_GET_CONST(subscriptionDTO_, Data::SubscriptionDTO) };
      inline Data::SubscriptionDTO getSubscriptionDTO() { DARABONBA_PTR_GET(subscriptionDTO_, Data::SubscriptionDTO) };
      inline Data& setSubscriptionDTO(const Data::SubscriptionDTO & subscriptionDTO) { DARABONBA_PTR_SET_VALUE(subscriptionDTO_, subscriptionDTO) };
      inline Data& setSubscriptionDTO(Data::SubscriptionDTO && subscriptionDTO) { DARABONBA_PTR_SET_RVALUE(subscriptionDTO_, subscriptionDTO) };


    protected:
      // The connection details.
      shared_ptr<Data::ConnectionDTO> connectionDTO_ {};
      // The subscription details.
      shared_ptr<Data::SubscriptionDTO> subscriptionDTO_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->dynamicCode_ == nullptr && this->dynamicMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetConsumerGroupSubscriptionResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetConsumerGroupSubscriptionResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<GetConsumerGroupSubscriptionResponseBody::Data>) };
    inline vector<GetConsumerGroupSubscriptionResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<GetConsumerGroupSubscriptionResponseBody::Data>) };
    inline GetConsumerGroupSubscriptionResponseBody& setData(const vector<GetConsumerGroupSubscriptionResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetConsumerGroupSubscriptionResponseBody& setData(vector<GetConsumerGroupSubscriptionResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // dynamicCode Field Functions 
    bool hasDynamicCode() const { return this->dynamicCode_ != nullptr;};
    void deleteDynamicCode() { this->dynamicCode_ = nullptr;};
    inline string getDynamicCode() const { DARABONBA_PTR_GET_DEFAULT(dynamicCode_, "") };
    inline GetConsumerGroupSubscriptionResponseBody& setDynamicCode(string dynamicCode) { DARABONBA_PTR_SET_VALUE(dynamicCode_, dynamicCode) };


    // dynamicMessage Field Functions 
    bool hasDynamicMessage() const { return this->dynamicMessage_ != nullptr;};
    void deleteDynamicMessage() { this->dynamicMessage_ = nullptr;};
    inline string getDynamicMessage() const { DARABONBA_PTR_GET_DEFAULT(dynamicMessage_, "") };
    inline GetConsumerGroupSubscriptionResponseBody& setDynamicMessage(string dynamicMessage) { DARABONBA_PTR_SET_VALUE(dynamicMessage_, dynamicMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetConsumerGroupSubscriptionResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetConsumerGroupSubscriptionResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetConsumerGroupSubscriptionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetConsumerGroupSubscriptionResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code.
    shared_ptr<string> code_ {};
    // The data returned.
    shared_ptr<vector<GetConsumerGroupSubscriptionResponseBody::Data>> data_ {};
    // The dynamic error code.
    shared_ptr<string> dynamicCode_ {};
    // The dynamic error message.
    shared_ptr<string> dynamicMessage_ {};
    // The response code.
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
