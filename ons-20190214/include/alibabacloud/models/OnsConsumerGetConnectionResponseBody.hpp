// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ONSCONSUMERGETCONNECTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ONSCONSUMERGETCONNECTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ons20190214
{
namespace Models
{
  class OnsConsumerGetConnectionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OnsConsumerGetConnectionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, OnsConsumerGetConnectionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    OnsConsumerGetConnectionResponseBody() = default ;
    OnsConsumerGetConnectionResponseBody(const OnsConsumerGetConnectionResponseBody &) = default ;
    OnsConsumerGetConnectionResponseBody(OnsConsumerGetConnectionResponseBody &&) = default ;
    OnsConsumerGetConnectionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OnsConsumerGetConnectionResponseBody() = default ;
    OnsConsumerGetConnectionResponseBody& operator=(const OnsConsumerGetConnectionResponseBody &) = default ;
    OnsConsumerGetConnectionResponseBody& operator=(OnsConsumerGetConnectionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ConnectionList, connectionList_);
        DARABONBA_PTR_TO_JSON(MessageModel, messageModel_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ConnectionList, connectionList_);
        DARABONBA_PTR_FROM_JSON(MessageModel, messageModel_);
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
      class ConnectionList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ConnectionList& obj) { 
          DARABONBA_PTR_TO_JSON(ConnectionDo, connectionDo_);
        };
        friend void from_json(const Darabonba::Json& j, ConnectionList& obj) { 
          DARABONBA_PTR_FROM_JSON(ConnectionDo, connectionDo_);
        };
        ConnectionList() = default ;
        ConnectionList(const ConnectionList &) = default ;
        ConnectionList(ConnectionList &&) = default ;
        ConnectionList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ConnectionList() = default ;
        ConnectionList& operator=(const ConnectionList &) = default ;
        ConnectionList& operator=(ConnectionList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ConnectionDo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ConnectionDo& obj) { 
            DARABONBA_PTR_TO_JSON(ClientAddr, clientAddr_);
            DARABONBA_PTR_TO_JSON(ClientId, clientId_);
            DARABONBA_PTR_TO_JSON(Language, language_);
            DARABONBA_PTR_TO_JSON(Version, version_);
          };
          friend void from_json(const Darabonba::Json& j, ConnectionDo& obj) { 
            DARABONBA_PTR_FROM_JSON(ClientAddr, clientAddr_);
            DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
            DARABONBA_PTR_FROM_JSON(Language, language_);
            DARABONBA_PTR_FROM_JSON(Version, version_);
          };
          ConnectionDo() = default ;
          ConnectionDo(const ConnectionDo &) = default ;
          ConnectionDo(ConnectionDo &&) = default ;
          ConnectionDo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ConnectionDo() = default ;
          ConnectionDo& operator=(const ConnectionDo &) = default ;
          ConnectionDo& operator=(ConnectionDo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->clientAddr_ == nullptr
        && this->clientId_ == nullptr && this->language_ == nullptr && this->version_ == nullptr; };
          // clientAddr Field Functions 
          bool hasClientAddr() const { return this->clientAddr_ != nullptr;};
          void deleteClientAddr() { this->clientAddr_ = nullptr;};
          inline string getClientAddr() const { DARABONBA_PTR_GET_DEFAULT(clientAddr_, "") };
          inline ConnectionDo& setClientAddr(string clientAddr) { DARABONBA_PTR_SET_VALUE(clientAddr_, clientAddr) };


          // clientId Field Functions 
          bool hasClientId() const { return this->clientId_ != nullptr;};
          void deleteClientId() { this->clientId_ = nullptr;};
          inline string getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
          inline ConnectionDo& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


          // language Field Functions 
          bool hasLanguage() const { return this->language_ != nullptr;};
          void deleteLanguage() { this->language_ = nullptr;};
          inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
          inline ConnectionDo& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


          // version Field Functions 
          bool hasVersion() const { return this->version_ != nullptr;};
          void deleteVersion() { this->version_ = nullptr;};
          inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
          inline ConnectionDo& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


        protected:
          shared_ptr<string> clientAddr_ {};
          shared_ptr<string> clientId_ {};
          shared_ptr<string> language_ {};
          shared_ptr<string> version_ {};
        };

        virtual bool empty() const override { return this->connectionDo_ == nullptr; };
        // connectionDo Field Functions 
        bool hasConnectionDo() const { return this->connectionDo_ != nullptr;};
        void deleteConnectionDo() { this->connectionDo_ = nullptr;};
        inline const vector<ConnectionList::ConnectionDo> & getConnectionDo() const { DARABONBA_PTR_GET_CONST(connectionDo_, vector<ConnectionList::ConnectionDo>) };
        inline vector<ConnectionList::ConnectionDo> getConnectionDo() { DARABONBA_PTR_GET(connectionDo_, vector<ConnectionList::ConnectionDo>) };
        inline ConnectionList& setConnectionDo(const vector<ConnectionList::ConnectionDo> & connectionDo) { DARABONBA_PTR_SET_VALUE(connectionDo_, connectionDo) };
        inline ConnectionList& setConnectionDo(vector<ConnectionList::ConnectionDo> && connectionDo) { DARABONBA_PTR_SET_RVALUE(connectionDo_, connectionDo) };


      protected:
        shared_ptr<vector<ConnectionList::ConnectionDo>> connectionDo_ {};
      };

      virtual bool empty() const override { return this->connectionList_ == nullptr
        && this->messageModel_ == nullptr; };
      // connectionList Field Functions 
      bool hasConnectionList() const { return this->connectionList_ != nullptr;};
      void deleteConnectionList() { this->connectionList_ = nullptr;};
      inline const Data::ConnectionList & getConnectionList() const { DARABONBA_PTR_GET_CONST(connectionList_, Data::ConnectionList) };
      inline Data::ConnectionList getConnectionList() { DARABONBA_PTR_GET(connectionList_, Data::ConnectionList) };
      inline Data& setConnectionList(const Data::ConnectionList & connectionList) { DARABONBA_PTR_SET_VALUE(connectionList_, connectionList) };
      inline Data& setConnectionList(Data::ConnectionList && connectionList) { DARABONBA_PTR_SET_RVALUE(connectionList_, connectionList) };


      // messageModel Field Functions 
      bool hasMessageModel() const { return this->messageModel_ != nullptr;};
      void deleteMessageModel() { this->messageModel_ = nullptr;};
      inline string getMessageModel() const { DARABONBA_PTR_GET_DEFAULT(messageModel_, "") };
      inline Data& setMessageModel(string messageModel) { DARABONBA_PTR_SET_VALUE(messageModel_, messageModel) };


    protected:
      shared_ptr<Data::ConnectionList> connectionList_ {};
      shared_ptr<string> messageModel_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const OnsConsumerGetConnectionResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, OnsConsumerGetConnectionResponseBody::Data) };
    inline OnsConsumerGetConnectionResponseBody::Data getData() { DARABONBA_PTR_GET(data_, OnsConsumerGetConnectionResponseBody::Data) };
    inline OnsConsumerGetConnectionResponseBody& setData(const OnsConsumerGetConnectionResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline OnsConsumerGetConnectionResponseBody& setData(OnsConsumerGetConnectionResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline OnsConsumerGetConnectionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    shared_ptr<OnsConsumerGetConnectionResponseBody::Data> data_ {};
    // The ID of the request. This parameter is a common parameter. Each request has a unique ID. You can use this ID to troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ons20190214
#endif
