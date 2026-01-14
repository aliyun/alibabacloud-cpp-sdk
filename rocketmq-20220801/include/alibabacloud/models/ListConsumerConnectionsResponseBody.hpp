// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONSUMERCONNECTIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCONSUMERCONNECTIONSRESPONSEBODY_HPP_
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
  class ListConsumerConnectionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListConsumerConnectionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(dynamicCode, dynamicCode_);
      DARABONBA_PTR_TO_JSON(dynamicMessage, dynamicMessage_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListConsumerConnectionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(dynamicCode, dynamicCode_);
      DARABONBA_PTR_FROM_JSON(dynamicMessage, dynamicMessage_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    ListConsumerConnectionsResponseBody() = default ;
    ListConsumerConnectionsResponseBody(const ListConsumerConnectionsResponseBody &) = default ;
    ListConsumerConnectionsResponseBody(ListConsumerConnectionsResponseBody &&) = default ;
    ListConsumerConnectionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListConsumerConnectionsResponseBody() = default ;
    ListConsumerConnectionsResponseBody& operator=(const ListConsumerConnectionsResponseBody &) = default ;
    ListConsumerConnectionsResponseBody& operator=(ListConsumerConnectionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(connections, connections_);
        DARABONBA_PTR_TO_JSON(consumerGroupId, consumerGroupId_);
        DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(regionId, regionId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(connections, connections_);
        DARABONBA_PTR_FROM_JSON(consumerGroupId, consumerGroupId_);
        DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(regionId, regionId_);
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
      class Connections : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Connections& obj) { 
          DARABONBA_PTR_TO_JSON(clientId, clientId_);
          DARABONBA_PTR_TO_JSON(egressIp, egressIp_);
          DARABONBA_PTR_TO_JSON(hostname, hostname_);
          DARABONBA_PTR_TO_JSON(language, language_);
          DARABONBA_PTR_TO_JSON(messageModel, messageModel_);
          DARABONBA_PTR_TO_JSON(version, version_);
        };
        friend void from_json(const Darabonba::Json& j, Connections& obj) { 
          DARABONBA_PTR_FROM_JSON(clientId, clientId_);
          DARABONBA_PTR_FROM_JSON(egressIp, egressIp_);
          DARABONBA_PTR_FROM_JSON(hostname, hostname_);
          DARABONBA_PTR_FROM_JSON(language, language_);
          DARABONBA_PTR_FROM_JSON(messageModel, messageModel_);
          DARABONBA_PTR_FROM_JSON(version, version_);
        };
        Connections() = default ;
        Connections(const Connections &) = default ;
        Connections(Connections &&) = default ;
        Connections(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Connections() = default ;
        Connections& operator=(const Connections &) = default ;
        Connections& operator=(Connections &&) = default ;
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
        inline Connections& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


        // egressIp Field Functions 
        bool hasEgressIp() const { return this->egressIp_ != nullptr;};
        void deleteEgressIp() { this->egressIp_ = nullptr;};
        inline string getEgressIp() const { DARABONBA_PTR_GET_DEFAULT(egressIp_, "") };
        inline Connections& setEgressIp(string egressIp) { DARABONBA_PTR_SET_VALUE(egressIp_, egressIp) };


        // hostname Field Functions 
        bool hasHostname() const { return this->hostname_ != nullptr;};
        void deleteHostname() { this->hostname_ = nullptr;};
        inline string getHostname() const { DARABONBA_PTR_GET_DEFAULT(hostname_, "") };
        inline Connections& setHostname(string hostname) { DARABONBA_PTR_SET_VALUE(hostname_, hostname) };


        // language Field Functions 
        bool hasLanguage() const { return this->language_ != nullptr;};
        void deleteLanguage() { this->language_ = nullptr;};
        inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
        inline Connections& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


        // messageModel Field Functions 
        bool hasMessageModel() const { return this->messageModel_ != nullptr;};
        void deleteMessageModel() { this->messageModel_ = nullptr;};
        inline string getMessageModel() const { DARABONBA_PTR_GET_DEFAULT(messageModel_, "") };
        inline Connections& setMessageModel(string messageModel) { DARABONBA_PTR_SET_VALUE(messageModel_, messageModel) };


        // version Field Functions 
        bool hasVersion() const { return this->version_ != nullptr;};
        void deleteVersion() { this->version_ = nullptr;};
        inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
        inline Connections& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      protected:
        // The ID of the client.
        shared_ptr<string> clientId_ {};
        // Host IP/Public IP
        shared_ptr<string> egressIp_ {};
        // The `hostname` of the cloud-native box.
        shared_ptr<string> hostname_ {};
        // The language of the client.
        shared_ptr<string> language_ {};
        // Consumption Mode
        // - BROADCASTING
        // - CLUSTERING
        shared_ptr<string> messageModel_ {};
        // The version of the client.
        shared_ptr<string> version_ {};
      };

      virtual bool empty() const override { return this->connections_ == nullptr
        && this->consumerGroupId_ == nullptr && this->instanceId_ == nullptr && this->regionId_ == nullptr; };
      // connections Field Functions 
      bool hasConnections() const { return this->connections_ != nullptr;};
      void deleteConnections() { this->connections_ = nullptr;};
      inline const vector<Data::Connections> & getConnections() const { DARABONBA_PTR_GET_CONST(connections_, vector<Data::Connections>) };
      inline vector<Data::Connections> getConnections() { DARABONBA_PTR_GET(connections_, vector<Data::Connections>) };
      inline Data& setConnections(const vector<Data::Connections> & connections) { DARABONBA_PTR_SET_VALUE(connections_, connections) };
      inline Data& setConnections(vector<Data::Connections> && connections) { DARABONBA_PTR_SET_RVALUE(connections_, connections) };


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


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Data& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    protected:
      // The client connection list
      shared_ptr<vector<Data::Connections>> connections_ {};
      // The consumer group ID.
      shared_ptr<string> consumerGroupId_ {};
      // The instance ID.
      shared_ptr<string> instanceId_ {};
      // The ID of the region in which the instance resides.
      shared_ptr<string> regionId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->dynamicCode_ == nullptr && this->dynamicMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListConsumerConnectionsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListConsumerConnectionsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListConsumerConnectionsResponseBody::Data) };
    inline ListConsumerConnectionsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListConsumerConnectionsResponseBody::Data) };
    inline ListConsumerConnectionsResponseBody& setData(const ListConsumerConnectionsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListConsumerConnectionsResponseBody& setData(ListConsumerConnectionsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // dynamicCode Field Functions 
    bool hasDynamicCode() const { return this->dynamicCode_ != nullptr;};
    void deleteDynamicCode() { this->dynamicCode_ = nullptr;};
    inline string getDynamicCode() const { DARABONBA_PTR_GET_DEFAULT(dynamicCode_, "") };
    inline ListConsumerConnectionsResponseBody& setDynamicCode(string dynamicCode) { DARABONBA_PTR_SET_VALUE(dynamicCode_, dynamicCode) };


    // dynamicMessage Field Functions 
    bool hasDynamicMessage() const { return this->dynamicMessage_ != nullptr;};
    void deleteDynamicMessage() { this->dynamicMessage_ = nullptr;};
    inline string getDynamicMessage() const { DARABONBA_PTR_GET_DEFAULT(dynamicMessage_, "") };
    inline ListConsumerConnectionsResponseBody& setDynamicMessage(string dynamicMessage) { DARABONBA_PTR_SET_VALUE(dynamicMessage_, dynamicMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListConsumerConnectionsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListConsumerConnectionsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListConsumerConnectionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListConsumerConnectionsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The returned error code.
    shared_ptr<string> code_ {};
    // The returned data.
    shared_ptr<ListConsumerConnectionsResponseBody::Data> data_ {};
    // The dynamic error code.
    shared_ptr<string> dynamicCode_ {};
    // The dynamic error message.
    shared_ptr<string> dynamicMessage_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The error message.
    shared_ptr<string> message_ {};
    // The ID of the request. Each request has a unique ID. You can use this ID to troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
