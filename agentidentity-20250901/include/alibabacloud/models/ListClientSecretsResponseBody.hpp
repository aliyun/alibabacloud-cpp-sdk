// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLIENTSECRETSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCLIENTSECRETSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentity20250901
{
namespace Models
{
  class ListClientSecretsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClientSecretsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ClientSecrets, clientSecrets_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListClientSecretsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientSecrets, clientSecrets_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListClientSecretsResponseBody() = default ;
    ListClientSecretsResponseBody(const ListClientSecretsResponseBody &) = default ;
    ListClientSecretsResponseBody(ListClientSecretsResponseBody &&) = default ;
    ListClientSecretsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClientSecretsResponseBody() = default ;
    ListClientSecretsResponseBody& operator=(const ListClientSecretsResponseBody &) = default ;
    ListClientSecretsResponseBody& operator=(ListClientSecretsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ClientSecrets : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ClientSecrets& obj) { 
        DARABONBA_PTR_TO_JSON(ClientId, clientId_);
        DARABONBA_PTR_TO_JSON(ClientName, clientName_);
        DARABONBA_PTR_TO_JSON(ClientSecretId, clientSecretId_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(UserPoolName, userPoolName_);
      };
      friend void from_json(const Darabonba::Json& j, ClientSecrets& obj) { 
        DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
        DARABONBA_PTR_FROM_JSON(ClientName, clientName_);
        DARABONBA_PTR_FROM_JSON(ClientSecretId, clientSecretId_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(UserPoolName, userPoolName_);
      };
      ClientSecrets() = default ;
      ClientSecrets(const ClientSecrets &) = default ;
      ClientSecrets(ClientSecrets &&) = default ;
      ClientSecrets(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ClientSecrets() = default ;
      ClientSecrets& operator=(const ClientSecrets &) = default ;
      ClientSecrets& operator=(ClientSecrets &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->clientId_ == nullptr
        && this->clientName_ == nullptr && this->clientSecretId_ == nullptr && this->createTime_ == nullptr && this->userPoolName_ == nullptr; };
      // clientId Field Functions 
      bool hasClientId() const { return this->clientId_ != nullptr;};
      void deleteClientId() { this->clientId_ = nullptr;};
      inline string getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
      inline ClientSecrets& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


      // clientName Field Functions 
      bool hasClientName() const { return this->clientName_ != nullptr;};
      void deleteClientName() { this->clientName_ = nullptr;};
      inline string getClientName() const { DARABONBA_PTR_GET_DEFAULT(clientName_, "") };
      inline ClientSecrets& setClientName(string clientName) { DARABONBA_PTR_SET_VALUE(clientName_, clientName) };


      // clientSecretId Field Functions 
      bool hasClientSecretId() const { return this->clientSecretId_ != nullptr;};
      void deleteClientSecretId() { this->clientSecretId_ = nullptr;};
      inline string getClientSecretId() const { DARABONBA_PTR_GET_DEFAULT(clientSecretId_, "") };
      inline ClientSecrets& setClientSecretId(string clientSecretId) { DARABONBA_PTR_SET_VALUE(clientSecretId_, clientSecretId) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline ClientSecrets& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // userPoolName Field Functions 
      bool hasUserPoolName() const { return this->userPoolName_ != nullptr;};
      void deleteUserPoolName() { this->userPoolName_ = nullptr;};
      inline string getUserPoolName() const { DARABONBA_PTR_GET_DEFAULT(userPoolName_, "") };
      inline ClientSecrets& setUserPoolName(string userPoolName) { DARABONBA_PTR_SET_VALUE(userPoolName_, userPoolName) };


    protected:
      shared_ptr<string> clientId_ {};
      shared_ptr<string> clientName_ {};
      shared_ptr<string> clientSecretId_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<string> userPoolName_ {};
    };

    virtual bool empty() const override { return this->clientSecrets_ == nullptr
        && this->requestId_ == nullptr; };
    // clientSecrets Field Functions 
    bool hasClientSecrets() const { return this->clientSecrets_ != nullptr;};
    void deleteClientSecrets() { this->clientSecrets_ = nullptr;};
    inline const vector<ListClientSecretsResponseBody::ClientSecrets> & getClientSecrets() const { DARABONBA_PTR_GET_CONST(clientSecrets_, vector<ListClientSecretsResponseBody::ClientSecrets>) };
    inline vector<ListClientSecretsResponseBody::ClientSecrets> getClientSecrets() { DARABONBA_PTR_GET(clientSecrets_, vector<ListClientSecretsResponseBody::ClientSecrets>) };
    inline ListClientSecretsResponseBody& setClientSecrets(const vector<ListClientSecretsResponseBody::ClientSecrets> & clientSecrets) { DARABONBA_PTR_SET_VALUE(clientSecrets_, clientSecrets) };
    inline ListClientSecretsResponseBody& setClientSecrets(vector<ListClientSecretsResponseBody::ClientSecrets> && clientSecrets) { DARABONBA_PTR_SET_RVALUE(clientSecrets_, clientSecrets) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListClientSecretsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<ListClientSecretsResponseBody::ClientSecrets>> clientSecrets_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentity20250901
#endif
