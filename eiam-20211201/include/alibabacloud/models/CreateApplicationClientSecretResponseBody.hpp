// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPLICATIONCLIENTSECRETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPLICATIONCLIENTSECRETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class CreateApplicationClientSecretResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateApplicationClientSecretResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationClientSecret, applicationClientSecret_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateApplicationClientSecretResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationClientSecret, applicationClientSecret_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateApplicationClientSecretResponseBody() = default ;
    CreateApplicationClientSecretResponseBody(const CreateApplicationClientSecretResponseBody &) = default ;
    CreateApplicationClientSecretResponseBody(CreateApplicationClientSecretResponseBody &&) = default ;
    CreateApplicationClientSecretResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateApplicationClientSecretResponseBody() = default ;
    CreateApplicationClientSecretResponseBody& operator=(const CreateApplicationClientSecretResponseBody &) = default ;
    CreateApplicationClientSecretResponseBody& operator=(CreateApplicationClientSecretResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ApplicationClientSecret : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ApplicationClientSecret& obj) { 
        DARABONBA_PTR_TO_JSON(ClientId, clientId_);
        DARABONBA_PTR_TO_JSON(ClientSecret, clientSecret_);
        DARABONBA_PTR_TO_JSON(SecretId, secretId_);
      };
      friend void from_json(const Darabonba::Json& j, ApplicationClientSecret& obj) { 
        DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
        DARABONBA_PTR_FROM_JSON(ClientSecret, clientSecret_);
        DARABONBA_PTR_FROM_JSON(SecretId, secretId_);
      };
      ApplicationClientSecret() = default ;
      ApplicationClientSecret(const ApplicationClientSecret &) = default ;
      ApplicationClientSecret(ApplicationClientSecret &&) = default ;
      ApplicationClientSecret(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ApplicationClientSecret() = default ;
      ApplicationClientSecret& operator=(const ApplicationClientSecret &) = default ;
      ApplicationClientSecret& operator=(ApplicationClientSecret &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->clientId_ == nullptr
        && this->clientSecret_ == nullptr && this->secretId_ == nullptr; };
      // clientId Field Functions 
      bool hasClientId() const { return this->clientId_ != nullptr;};
      void deleteClientId() { this->clientId_ = nullptr;};
      inline string getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
      inline ApplicationClientSecret& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


      // clientSecret Field Functions 
      bool hasClientSecret() const { return this->clientSecret_ != nullptr;};
      void deleteClientSecret() { this->clientSecret_ = nullptr;};
      inline string getClientSecret() const { DARABONBA_PTR_GET_DEFAULT(clientSecret_, "") };
      inline ApplicationClientSecret& setClientSecret(string clientSecret) { DARABONBA_PTR_SET_VALUE(clientSecret_, clientSecret) };


      // secretId Field Functions 
      bool hasSecretId() const { return this->secretId_ != nullptr;};
      void deleteSecretId() { this->secretId_ = nullptr;};
      inline string getSecretId() const { DARABONBA_PTR_GET_DEFAULT(secretId_, "") };
      inline ApplicationClientSecret& setSecretId(string secretId) { DARABONBA_PTR_SET_VALUE(secretId_, secretId) };


    protected:
      // The client ID of the application.
      shared_ptr<string> clientId_ {};
      // The client key secret of the application.
      shared_ptr<string> clientSecret_ {};
      // The client key ID of the application.
      shared_ptr<string> secretId_ {};
    };

    virtual bool empty() const override { return this->applicationClientSecret_ == nullptr
        && this->requestId_ == nullptr; };
    // applicationClientSecret Field Functions 
    bool hasApplicationClientSecret() const { return this->applicationClientSecret_ != nullptr;};
    void deleteApplicationClientSecret() { this->applicationClientSecret_ = nullptr;};
    inline const CreateApplicationClientSecretResponseBody::ApplicationClientSecret & getApplicationClientSecret() const { DARABONBA_PTR_GET_CONST(applicationClientSecret_, CreateApplicationClientSecretResponseBody::ApplicationClientSecret) };
    inline CreateApplicationClientSecretResponseBody::ApplicationClientSecret getApplicationClientSecret() { DARABONBA_PTR_GET(applicationClientSecret_, CreateApplicationClientSecretResponseBody::ApplicationClientSecret) };
    inline CreateApplicationClientSecretResponseBody& setApplicationClientSecret(const CreateApplicationClientSecretResponseBody::ApplicationClientSecret & applicationClientSecret) { DARABONBA_PTR_SET_VALUE(applicationClientSecret_, applicationClientSecret) };
    inline CreateApplicationClientSecretResponseBody& setApplicationClientSecret(CreateApplicationClientSecretResponseBody::ApplicationClientSecret && applicationClientSecret) { DARABONBA_PTR_SET_RVALUE(applicationClientSecret_, applicationClientSecret) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateApplicationClientSecretResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the client key.
    shared_ptr<CreateApplicationClientSecretResponseBody::ApplicationClientSecret> applicationClientSecret_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
