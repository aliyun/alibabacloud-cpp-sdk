// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLIENTSECRETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATECLIENTSECRETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentity20250901
{
namespace Models
{
  class CreateClientSecretResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateClientSecretResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ClientSecret, clientSecret_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateClientSecretResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientSecret, clientSecret_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateClientSecretResponseBody() = default ;
    CreateClientSecretResponseBody(const CreateClientSecretResponseBody &) = default ;
    CreateClientSecretResponseBody(CreateClientSecretResponseBody &&) = default ;
    CreateClientSecretResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateClientSecretResponseBody() = default ;
    CreateClientSecretResponseBody& operator=(const CreateClientSecretResponseBody &) = default ;
    CreateClientSecretResponseBody& operator=(CreateClientSecretResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ClientSecret : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ClientSecret& obj) { 
        DARABONBA_PTR_TO_JSON(ClientId, clientId_);
        DARABONBA_PTR_TO_JSON(ClientName, clientName_);
        DARABONBA_PTR_TO_JSON(ClientSecretId, clientSecretId_);
        DARABONBA_PTR_TO_JSON(ClientSecretValue, clientSecretValue_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(UserPoolName, userPoolName_);
      };
      friend void from_json(const Darabonba::Json& j, ClientSecret& obj) { 
        DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
        DARABONBA_PTR_FROM_JSON(ClientName, clientName_);
        DARABONBA_PTR_FROM_JSON(ClientSecretId, clientSecretId_);
        DARABONBA_PTR_FROM_JSON(ClientSecretValue, clientSecretValue_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(UserPoolName, userPoolName_);
      };
      ClientSecret() = default ;
      ClientSecret(const ClientSecret &) = default ;
      ClientSecret(ClientSecret &&) = default ;
      ClientSecret(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ClientSecret() = default ;
      ClientSecret& operator=(const ClientSecret &) = default ;
      ClientSecret& operator=(ClientSecret &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->clientId_ == nullptr
        && this->clientName_ == nullptr && this->clientSecretId_ == nullptr && this->clientSecretValue_ == nullptr && this->createTime_ == nullptr && this->userPoolName_ == nullptr; };
      // clientId Field Functions 
      bool hasClientId() const { return this->clientId_ != nullptr;};
      void deleteClientId() { this->clientId_ = nullptr;};
      inline string getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
      inline ClientSecret& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


      // clientName Field Functions 
      bool hasClientName() const { return this->clientName_ != nullptr;};
      void deleteClientName() { this->clientName_ = nullptr;};
      inline string getClientName() const { DARABONBA_PTR_GET_DEFAULT(clientName_, "") };
      inline ClientSecret& setClientName(string clientName) { DARABONBA_PTR_SET_VALUE(clientName_, clientName) };


      // clientSecretId Field Functions 
      bool hasClientSecretId() const { return this->clientSecretId_ != nullptr;};
      void deleteClientSecretId() { this->clientSecretId_ = nullptr;};
      inline string getClientSecretId() const { DARABONBA_PTR_GET_DEFAULT(clientSecretId_, "") };
      inline ClientSecret& setClientSecretId(string clientSecretId) { DARABONBA_PTR_SET_VALUE(clientSecretId_, clientSecretId) };


      // clientSecretValue Field Functions 
      bool hasClientSecretValue() const { return this->clientSecretValue_ != nullptr;};
      void deleteClientSecretValue() { this->clientSecretValue_ = nullptr;};
      inline string getClientSecretValue() const { DARABONBA_PTR_GET_DEFAULT(clientSecretValue_, "") };
      inline ClientSecret& setClientSecretValue(string clientSecretValue) { DARABONBA_PTR_SET_VALUE(clientSecretValue_, clientSecretValue) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline ClientSecret& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // userPoolName Field Functions 
      bool hasUserPoolName() const { return this->userPoolName_ != nullptr;};
      void deleteUserPoolName() { this->userPoolName_ = nullptr;};
      inline string getUserPoolName() const { DARABONBA_PTR_GET_DEFAULT(userPoolName_, "") };
      inline ClientSecret& setUserPoolName(string userPoolName) { DARABONBA_PTR_SET_VALUE(userPoolName_, userPoolName) };


    protected:
      shared_ptr<string> clientId_ {};
      shared_ptr<string> clientName_ {};
      shared_ptr<string> clientSecretId_ {};
      shared_ptr<string> clientSecretValue_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<string> userPoolName_ {};
    };

    virtual bool empty() const override { return this->clientSecret_ == nullptr
        && this->requestId_ == nullptr; };
    // clientSecret Field Functions 
    bool hasClientSecret() const { return this->clientSecret_ != nullptr;};
    void deleteClientSecret() { this->clientSecret_ = nullptr;};
    inline const CreateClientSecretResponseBody::ClientSecret & getClientSecret() const { DARABONBA_PTR_GET_CONST(clientSecret_, CreateClientSecretResponseBody::ClientSecret) };
    inline CreateClientSecretResponseBody::ClientSecret getClientSecret() { DARABONBA_PTR_GET(clientSecret_, CreateClientSecretResponseBody::ClientSecret) };
    inline CreateClientSecretResponseBody& setClientSecret(const CreateClientSecretResponseBody::ClientSecret & clientSecret) { DARABONBA_PTR_SET_VALUE(clientSecret_, clientSecret) };
    inline CreateClientSecretResponseBody& setClientSecret(CreateClientSecretResponseBody::ClientSecret && clientSecret) { DARABONBA_PTR_SET_RVALUE(clientSecret_, clientSecret) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateClientSecretResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<CreateClientSecretResponseBody::ClientSecret> clientSecret_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentity20250901
#endif
