// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERPOOLCLIENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERPOOLCLIENTSRESPONSEBODY_HPP_
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
  class ListUserPoolClientsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserPoolClientsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Clients, clients_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserPoolClientsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Clients, clients_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListUserPoolClientsResponseBody() = default ;
    ListUserPoolClientsResponseBody(const ListUserPoolClientsResponseBody &) = default ;
    ListUserPoolClientsResponseBody(ListUserPoolClientsResponseBody &&) = default ;
    ListUserPoolClientsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserPoolClientsResponseBody() = default ;
    ListUserPoolClientsResponseBody& operator=(const ListUserPoolClientsResponseBody &) = default ;
    ListUserPoolClientsResponseBody& operator=(ListUserPoolClientsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Clients : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Clients& obj) { 
        DARABONBA_PTR_TO_JSON(AccessTokenValidity, accessTokenValidity_);
        DARABONBA_PTR_TO_JSON(ClientId, clientId_);
        DARABONBA_PTR_TO_JSON(ClientName, clientName_);
        DARABONBA_PTR_TO_JSON(ClientScopes, clientScopes_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(EnforcePKCE, enforcePKCE_);
        DARABONBA_PTR_TO_JSON(RedirectURIs, redirectURIs_);
        DARABONBA_PTR_TO_JSON(RefreshTokenValidity, refreshTokenValidity_);
        DARABONBA_PTR_TO_JSON(SecretRequired, secretRequired_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_TO_JSON(UserPoolName, userPoolName_);
      };
      friend void from_json(const Darabonba::Json& j, Clients& obj) { 
        DARABONBA_PTR_FROM_JSON(AccessTokenValidity, accessTokenValidity_);
        DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
        DARABONBA_PTR_FROM_JSON(ClientName, clientName_);
        DARABONBA_PTR_FROM_JSON(ClientScopes, clientScopes_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(EnforcePKCE, enforcePKCE_);
        DARABONBA_PTR_FROM_JSON(RedirectURIs, redirectURIs_);
        DARABONBA_PTR_FROM_JSON(RefreshTokenValidity, refreshTokenValidity_);
        DARABONBA_PTR_FROM_JSON(SecretRequired, secretRequired_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_FROM_JSON(UserPoolName, userPoolName_);
      };
      Clients() = default ;
      Clients(const Clients &) = default ;
      Clients(Clients &&) = default ;
      Clients(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Clients() = default ;
      Clients& operator=(const Clients &) = default ;
      Clients& operator=(Clients &&) = default ;
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
        && this->clientId_ == nullptr && this->clientName_ == nullptr && this->clientScopes_ == nullptr && this->createTime_ == nullptr && this->enforcePKCE_ == nullptr
        && this->redirectURIs_ == nullptr && this->refreshTokenValidity_ == nullptr && this->secretRequired_ == nullptr && this->updateTime_ == nullptr && this->userPoolName_ == nullptr; };
      // accessTokenValidity Field Functions 
      bool hasAccessTokenValidity() const { return this->accessTokenValidity_ != nullptr;};
      void deleteAccessTokenValidity() { this->accessTokenValidity_ = nullptr;};
      inline string getAccessTokenValidity() const { DARABONBA_PTR_GET_DEFAULT(accessTokenValidity_, "") };
      inline Clients& setAccessTokenValidity(string accessTokenValidity) { DARABONBA_PTR_SET_VALUE(accessTokenValidity_, accessTokenValidity) };


      // clientId Field Functions 
      bool hasClientId() const { return this->clientId_ != nullptr;};
      void deleteClientId() { this->clientId_ = nullptr;};
      inline string getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
      inline Clients& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


      // clientName Field Functions 
      bool hasClientName() const { return this->clientName_ != nullptr;};
      void deleteClientName() { this->clientName_ = nullptr;};
      inline string getClientName() const { DARABONBA_PTR_GET_DEFAULT(clientName_, "") };
      inline Clients& setClientName(string clientName) { DARABONBA_PTR_SET_VALUE(clientName_, clientName) };


      // clientScopes Field Functions 
      bool hasClientScopes() const { return this->clientScopes_ != nullptr;};
      void deleteClientScopes() { this->clientScopes_ = nullptr;};
      inline const vector<Clients::ClientScopes> & getClientScopes() const { DARABONBA_PTR_GET_CONST(clientScopes_, vector<Clients::ClientScopes>) };
      inline vector<Clients::ClientScopes> getClientScopes() { DARABONBA_PTR_GET(clientScopes_, vector<Clients::ClientScopes>) };
      inline Clients& setClientScopes(const vector<Clients::ClientScopes> & clientScopes) { DARABONBA_PTR_SET_VALUE(clientScopes_, clientScopes) };
      inline Clients& setClientScopes(vector<Clients::ClientScopes> && clientScopes) { DARABONBA_PTR_SET_RVALUE(clientScopes_, clientScopes) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Clients& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // enforcePKCE Field Functions 
      bool hasEnforcePKCE() const { return this->enforcePKCE_ != nullptr;};
      void deleteEnforcePKCE() { this->enforcePKCE_ = nullptr;};
      inline bool getEnforcePKCE() const { DARABONBA_PTR_GET_DEFAULT(enforcePKCE_, false) };
      inline Clients& setEnforcePKCE(bool enforcePKCE) { DARABONBA_PTR_SET_VALUE(enforcePKCE_, enforcePKCE) };


      // redirectURIs Field Functions 
      bool hasRedirectURIs() const { return this->redirectURIs_ != nullptr;};
      void deleteRedirectURIs() { this->redirectURIs_ = nullptr;};
      inline const vector<string> & getRedirectURIs() const { DARABONBA_PTR_GET_CONST(redirectURIs_, vector<string>) };
      inline vector<string> getRedirectURIs() { DARABONBA_PTR_GET(redirectURIs_, vector<string>) };
      inline Clients& setRedirectURIs(const vector<string> & redirectURIs) { DARABONBA_PTR_SET_VALUE(redirectURIs_, redirectURIs) };
      inline Clients& setRedirectURIs(vector<string> && redirectURIs) { DARABONBA_PTR_SET_RVALUE(redirectURIs_, redirectURIs) };


      // refreshTokenValidity Field Functions 
      bool hasRefreshTokenValidity() const { return this->refreshTokenValidity_ != nullptr;};
      void deleteRefreshTokenValidity() { this->refreshTokenValidity_ = nullptr;};
      inline string getRefreshTokenValidity() const { DARABONBA_PTR_GET_DEFAULT(refreshTokenValidity_, "") };
      inline Clients& setRefreshTokenValidity(string refreshTokenValidity) { DARABONBA_PTR_SET_VALUE(refreshTokenValidity_, refreshTokenValidity) };


      // secretRequired Field Functions 
      bool hasSecretRequired() const { return this->secretRequired_ != nullptr;};
      void deleteSecretRequired() { this->secretRequired_ = nullptr;};
      inline bool getSecretRequired() const { DARABONBA_PTR_GET_DEFAULT(secretRequired_, false) };
      inline Clients& setSecretRequired(bool secretRequired) { DARABONBA_PTR_SET_VALUE(secretRequired_, secretRequired) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline Clients& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      // userPoolName Field Functions 
      bool hasUserPoolName() const { return this->userPoolName_ != nullptr;};
      void deleteUserPoolName() { this->userPoolName_ = nullptr;};
      inline string getUserPoolName() const { DARABONBA_PTR_GET_DEFAULT(userPoolName_, "") };
      inline Clients& setUserPoolName(string userPoolName) { DARABONBA_PTR_SET_VALUE(userPoolName_, userPoolName) };


    protected:
      shared_ptr<string> accessTokenValidity_ {};
      shared_ptr<string> clientId_ {};
      shared_ptr<string> clientName_ {};
      shared_ptr<vector<Clients::ClientScopes>> clientScopes_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<bool> enforcePKCE_ {};
      shared_ptr<vector<string>> redirectURIs_ {};
      shared_ptr<string> refreshTokenValidity_ {};
      shared_ptr<bool> secretRequired_ {};
      shared_ptr<string> updateTime_ {};
      shared_ptr<string> userPoolName_ {};
    };

    virtual bool empty() const override { return this->clients_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // clients Field Functions 
    bool hasClients() const { return this->clients_ != nullptr;};
    void deleteClients() { this->clients_ = nullptr;};
    inline const vector<ListUserPoolClientsResponseBody::Clients> & getClients() const { DARABONBA_PTR_GET_CONST(clients_, vector<ListUserPoolClientsResponseBody::Clients>) };
    inline vector<ListUserPoolClientsResponseBody::Clients> getClients() { DARABONBA_PTR_GET(clients_, vector<ListUserPoolClientsResponseBody::Clients>) };
    inline ListUserPoolClientsResponseBody& setClients(const vector<ListUserPoolClientsResponseBody::Clients> & clients) { DARABONBA_PTR_SET_VALUE(clients_, clients) };
    inline ListUserPoolClientsResponseBody& setClients(vector<ListUserPoolClientsResponseBody::Clients> && clients) { DARABONBA_PTR_SET_RVALUE(clients_, clients) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListUserPoolClientsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListUserPoolClientsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListUserPoolClientsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListUserPoolClientsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListUserPoolClientsResponseBody::Clients>> clients_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentity20250901
#endif
