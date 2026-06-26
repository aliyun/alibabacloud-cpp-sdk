// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEUSERPOOLCLIENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEUSERPOOLCLIENTRESPONSEBODY_HPP_
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
  class CreateUserPoolClientResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateUserPoolClientResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Client, client_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateUserPoolClientResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Client, client_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateUserPoolClientResponseBody() = default ;
    CreateUserPoolClientResponseBody(const CreateUserPoolClientResponseBody &) = default ;
    CreateUserPoolClientResponseBody(CreateUserPoolClientResponseBody &&) = default ;
    CreateUserPoolClientResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateUserPoolClientResponseBody() = default ;
    CreateUserPoolClientResponseBody& operator=(const CreateUserPoolClientResponseBody &) = default ;
    CreateUserPoolClientResponseBody& operator=(CreateUserPoolClientResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Client : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Client& obj) { 
        DARABONBA_PTR_TO_JSON(AccessTokenValidity, accessTokenValidity_);
        DARABONBA_PTR_TO_JSON(ClientId, clientId_);
        DARABONBA_PTR_TO_JSON(ClientName, clientName_);
        DARABONBA_PTR_TO_JSON(ClientScopes, clientScopes_);
        DARABONBA_PTR_TO_JSON(ClientType, clientType_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(EnforcePKCE, enforcePKCE_);
        DARABONBA_PTR_TO_JSON(RedirectURIs, redirectURIs_);
        DARABONBA_PTR_TO_JSON(RefreshTokenValidity, refreshTokenValidity_);
        DARABONBA_PTR_TO_JSON(SecretRequired, secretRequired_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_TO_JSON(UserPoolName, userPoolName_);
      };
      friend void from_json(const Darabonba::Json& j, Client& obj) { 
        DARABONBA_PTR_FROM_JSON(AccessTokenValidity, accessTokenValidity_);
        DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
        DARABONBA_PTR_FROM_JSON(ClientName, clientName_);
        DARABONBA_PTR_FROM_JSON(ClientScopes, clientScopes_);
        DARABONBA_PTR_FROM_JSON(ClientType, clientType_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(EnforcePKCE, enforcePKCE_);
        DARABONBA_PTR_FROM_JSON(RedirectURIs, redirectURIs_);
        DARABONBA_PTR_FROM_JSON(RefreshTokenValidity, refreshTokenValidity_);
        DARABONBA_PTR_FROM_JSON(SecretRequired, secretRequired_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_FROM_JSON(UserPoolName, userPoolName_);
      };
      Client() = default ;
      Client(const Client &) = default ;
      Client(Client &&) = default ;
      Client(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Client() = default ;
      Client& operator=(const Client &) = default ;
      Client& operator=(Client &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ClientScopes : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ClientScopes& obj) { 
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(ScopeName, scopeName_);
        };
        friend void from_json(const Darabonba::Json& j, ClientScopes& obj) { 
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(ScopeName, scopeName_);
        };
        ClientScopes() = default ;
        ClientScopes(const ClientScopes &) = default ;
        ClientScopes(ClientScopes &&) = default ;
        ClientScopes(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ClientScopes() = default ;
        ClientScopes& operator=(const ClientScopes &) = default ;
        ClientScopes& operator=(ClientScopes &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->description_ == nullptr
        && this->scopeName_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline ClientScopes& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // scopeName Field Functions 
        bool hasScopeName() const { return this->scopeName_ != nullptr;};
        void deleteScopeName() { this->scopeName_ = nullptr;};
        inline string getScopeName() const { DARABONBA_PTR_GET_DEFAULT(scopeName_, "") };
        inline ClientScopes& setScopeName(string scopeName) { DARABONBA_PTR_SET_VALUE(scopeName_, scopeName) };


      protected:
        shared_ptr<string> description_ {};
        shared_ptr<string> scopeName_ {};
      };

      virtual bool empty() const override { return this->accessTokenValidity_ == nullptr
        && this->clientId_ == nullptr && this->clientName_ == nullptr && this->clientScopes_ == nullptr && this->clientType_ == nullptr && this->createTime_ == nullptr
        && this->enforcePKCE_ == nullptr && this->redirectURIs_ == nullptr && this->refreshTokenValidity_ == nullptr && this->secretRequired_ == nullptr && this->updateTime_ == nullptr
        && this->userPoolName_ == nullptr; };
      // accessTokenValidity Field Functions 
      bool hasAccessTokenValidity() const { return this->accessTokenValidity_ != nullptr;};
      void deleteAccessTokenValidity() { this->accessTokenValidity_ = nullptr;};
      inline string getAccessTokenValidity() const { DARABONBA_PTR_GET_DEFAULT(accessTokenValidity_, "") };
      inline Client& setAccessTokenValidity(string accessTokenValidity) { DARABONBA_PTR_SET_VALUE(accessTokenValidity_, accessTokenValidity) };


      // clientId Field Functions 
      bool hasClientId() const { return this->clientId_ != nullptr;};
      void deleteClientId() { this->clientId_ = nullptr;};
      inline string getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
      inline Client& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


      // clientName Field Functions 
      bool hasClientName() const { return this->clientName_ != nullptr;};
      void deleteClientName() { this->clientName_ = nullptr;};
      inline string getClientName() const { DARABONBA_PTR_GET_DEFAULT(clientName_, "") };
      inline Client& setClientName(string clientName) { DARABONBA_PTR_SET_VALUE(clientName_, clientName) };


      // clientScopes Field Functions 
      bool hasClientScopes() const { return this->clientScopes_ != nullptr;};
      void deleteClientScopes() { this->clientScopes_ = nullptr;};
      inline const vector<Client::ClientScopes> & getClientScopes() const { DARABONBA_PTR_GET_CONST(clientScopes_, vector<Client::ClientScopes>) };
      inline vector<Client::ClientScopes> getClientScopes() { DARABONBA_PTR_GET(clientScopes_, vector<Client::ClientScopes>) };
      inline Client& setClientScopes(const vector<Client::ClientScopes> & clientScopes) { DARABONBA_PTR_SET_VALUE(clientScopes_, clientScopes) };
      inline Client& setClientScopes(vector<Client::ClientScopes> && clientScopes) { DARABONBA_PTR_SET_RVALUE(clientScopes_, clientScopes) };


      // clientType Field Functions 
      bool hasClientType() const { return this->clientType_ != nullptr;};
      void deleteClientType() { this->clientType_ = nullptr;};
      inline string getClientType() const { DARABONBA_PTR_GET_DEFAULT(clientType_, "") };
      inline Client& setClientType(string clientType) { DARABONBA_PTR_SET_VALUE(clientType_, clientType) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Client& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // enforcePKCE Field Functions 
      bool hasEnforcePKCE() const { return this->enforcePKCE_ != nullptr;};
      void deleteEnforcePKCE() { this->enforcePKCE_ = nullptr;};
      inline bool getEnforcePKCE() const { DARABONBA_PTR_GET_DEFAULT(enforcePKCE_, false) };
      inline Client& setEnforcePKCE(bool enforcePKCE) { DARABONBA_PTR_SET_VALUE(enforcePKCE_, enforcePKCE) };


      // redirectURIs Field Functions 
      bool hasRedirectURIs() const { return this->redirectURIs_ != nullptr;};
      void deleteRedirectURIs() { this->redirectURIs_ = nullptr;};
      inline const vector<string> & getRedirectURIs() const { DARABONBA_PTR_GET_CONST(redirectURIs_, vector<string>) };
      inline vector<string> getRedirectURIs() { DARABONBA_PTR_GET(redirectURIs_, vector<string>) };
      inline Client& setRedirectURIs(const vector<string> & redirectURIs) { DARABONBA_PTR_SET_VALUE(redirectURIs_, redirectURIs) };
      inline Client& setRedirectURIs(vector<string> && redirectURIs) { DARABONBA_PTR_SET_RVALUE(redirectURIs_, redirectURIs) };


      // refreshTokenValidity Field Functions 
      bool hasRefreshTokenValidity() const { return this->refreshTokenValidity_ != nullptr;};
      void deleteRefreshTokenValidity() { this->refreshTokenValidity_ = nullptr;};
      inline string getRefreshTokenValidity() const { DARABONBA_PTR_GET_DEFAULT(refreshTokenValidity_, "") };
      inline Client& setRefreshTokenValidity(string refreshTokenValidity) { DARABONBA_PTR_SET_VALUE(refreshTokenValidity_, refreshTokenValidity) };


      // secretRequired Field Functions 
      bool hasSecretRequired() const { return this->secretRequired_ != nullptr;};
      void deleteSecretRequired() { this->secretRequired_ = nullptr;};
      inline bool getSecretRequired() const { DARABONBA_PTR_GET_DEFAULT(secretRequired_, false) };
      inline Client& setSecretRequired(bool secretRequired) { DARABONBA_PTR_SET_VALUE(secretRequired_, secretRequired) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline Client& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      // userPoolName Field Functions 
      bool hasUserPoolName() const { return this->userPoolName_ != nullptr;};
      void deleteUserPoolName() { this->userPoolName_ = nullptr;};
      inline string getUserPoolName() const { DARABONBA_PTR_GET_DEFAULT(userPoolName_, "") };
      inline Client& setUserPoolName(string userPoolName) { DARABONBA_PTR_SET_VALUE(userPoolName_, userPoolName) };


    protected:
      shared_ptr<string> accessTokenValidity_ {};
      shared_ptr<string> clientId_ {};
      shared_ptr<string> clientName_ {};
      shared_ptr<vector<Client::ClientScopes>> clientScopes_ {};
      shared_ptr<string> clientType_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<bool> enforcePKCE_ {};
      shared_ptr<vector<string>> redirectURIs_ {};
      shared_ptr<string> refreshTokenValidity_ {};
      shared_ptr<bool> secretRequired_ {};
      shared_ptr<string> updateTime_ {};
      shared_ptr<string> userPoolName_ {};
    };

    virtual bool empty() const override { return this->client_ == nullptr
        && this->requestId_ == nullptr; };
    // client Field Functions 
    bool hasClient() const { return this->client_ != nullptr;};
    void deleteClient() { this->client_ = nullptr;};
    inline const CreateUserPoolClientResponseBody::Client & getClient() const { DARABONBA_PTR_GET_CONST(client_, CreateUserPoolClientResponseBody::Client) };
    inline CreateUserPoolClientResponseBody::Client getClient() { DARABONBA_PTR_GET(client_, CreateUserPoolClientResponseBody::Client) };
    inline CreateUserPoolClientResponseBody& setClient(const CreateUserPoolClientResponseBody::Client & client) { DARABONBA_PTR_SET_VALUE(client_, client) };
    inline CreateUserPoolClientResponseBody& setClient(CreateUserPoolClientResponseBody::Client && client) { DARABONBA_PTR_SET_RVALUE(client_, client) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateUserPoolClientResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<CreateUserPoolClientResponseBody::Client> client_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentity20250901
#endif
