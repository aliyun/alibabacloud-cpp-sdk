// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OBTAINAPPLICATIONCLIENTSECRETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_OBTAINAPPLICATIONCLIENTSECRETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ObtainApplicationClientSecretResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ObtainApplicationClientSecretResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationClientSecret, applicationClientSecret_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ObtainApplicationClientSecretResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationClientSecret, applicationClientSecret_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ObtainApplicationClientSecretResponseBody() = default ;
    ObtainApplicationClientSecretResponseBody(const ObtainApplicationClientSecretResponseBody &) = default ;
    ObtainApplicationClientSecretResponseBody(ObtainApplicationClientSecretResponseBody &&) = default ;
    ObtainApplicationClientSecretResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ObtainApplicationClientSecretResponseBody() = default ;
    ObtainApplicationClientSecretResponseBody& operator=(const ObtainApplicationClientSecretResponseBody &) = default ;
    ObtainApplicationClientSecretResponseBody& operator=(ObtainApplicationClientSecretResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ApplicationClientSecret : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ApplicationClientSecret& obj) { 
        DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
        DARABONBA_PTR_TO_JSON(ClientId, clientId_);
        DARABONBA_PTR_TO_JSON(ClientSecret, clientSecret_);
        DARABONBA_PTR_TO_JSON(ExpirationTime, expirationTime_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(LastUsedTime, lastUsedTime_);
        DARABONBA_PTR_TO_JSON(SecretId, secretId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, ApplicationClientSecret& obj) { 
        DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
        DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
        DARABONBA_PTR_FROM_JSON(ClientSecret, clientSecret_);
        DARABONBA_PTR_FROM_JSON(ExpirationTime, expirationTime_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(LastUsedTime, lastUsedTime_);
        DARABONBA_PTR_FROM_JSON(SecretId, secretId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
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
      virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->clientId_ == nullptr && this->clientSecret_ == nullptr && this->expirationTime_ == nullptr && this->instanceId_ == nullptr && this->lastUsedTime_ == nullptr
        && this->secretId_ == nullptr && this->status_ == nullptr; };
      // applicationId Field Functions 
      bool hasApplicationId() const { return this->applicationId_ != nullptr;};
      void deleteApplicationId() { this->applicationId_ = nullptr;};
      inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
      inline ApplicationClientSecret& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


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


      // expirationTime Field Functions 
      bool hasExpirationTime() const { return this->expirationTime_ != nullptr;};
      void deleteExpirationTime() { this->expirationTime_ = nullptr;};
      inline int64_t getExpirationTime() const { DARABONBA_PTR_GET_DEFAULT(expirationTime_, 0L) };
      inline ApplicationClientSecret& setExpirationTime(int64_t expirationTime) { DARABONBA_PTR_SET_VALUE(expirationTime_, expirationTime) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline ApplicationClientSecret& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // lastUsedTime Field Functions 
      bool hasLastUsedTime() const { return this->lastUsedTime_ != nullptr;};
      void deleteLastUsedTime() { this->lastUsedTime_ = nullptr;};
      inline int64_t getLastUsedTime() const { DARABONBA_PTR_GET_DEFAULT(lastUsedTime_, 0L) };
      inline ApplicationClientSecret& setLastUsedTime(int64_t lastUsedTime) { DARABONBA_PTR_SET_VALUE(lastUsedTime_, lastUsedTime) };


      // secretId Field Functions 
      bool hasSecretId() const { return this->secretId_ != nullptr;};
      void deleteSecretId() { this->secretId_ = nullptr;};
      inline string getSecretId() const { DARABONBA_PTR_GET_DEFAULT(secretId_, "") };
      inline ApplicationClientSecret& setSecretId(string secretId) { DARABONBA_PTR_SET_VALUE(secretId_, secretId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ApplicationClientSecret& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The ID of the application whose client key you want to query.
      shared_ptr<string> applicationId_ {};
      // The client ID of the application.
      shared_ptr<string> clientId_ {};
      // The client key secret of the application.
      shared_ptr<string> clientSecret_ {};
      shared_ptr<int64_t> expirationTime_ {};
      // The ID of the instance.
      shared_ptr<string> instanceId_ {};
      // The time when the client key was last used. The value is a UNIX timestamp. Unit: milliseconds.
      shared_ptr<int64_t> lastUsedTime_ {};
      // The client key ID of the application.
      shared_ptr<string> secretId_ {};
      // The status of the client key. Valid values:
      // 
      // *   Enabled: The client key is enabled.
      // *   Disabled: The client key is disabled.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->applicationClientSecret_ == nullptr
        && this->requestId_ == nullptr; };
    // applicationClientSecret Field Functions 
    bool hasApplicationClientSecret() const { return this->applicationClientSecret_ != nullptr;};
    void deleteApplicationClientSecret() { this->applicationClientSecret_ = nullptr;};
    inline const ObtainApplicationClientSecretResponseBody::ApplicationClientSecret & getApplicationClientSecret() const { DARABONBA_PTR_GET_CONST(applicationClientSecret_, ObtainApplicationClientSecretResponseBody::ApplicationClientSecret) };
    inline ObtainApplicationClientSecretResponseBody::ApplicationClientSecret getApplicationClientSecret() { DARABONBA_PTR_GET(applicationClientSecret_, ObtainApplicationClientSecretResponseBody::ApplicationClientSecret) };
    inline ObtainApplicationClientSecretResponseBody& setApplicationClientSecret(const ObtainApplicationClientSecretResponseBody::ApplicationClientSecret & applicationClientSecret) { DARABONBA_PTR_SET_VALUE(applicationClientSecret_, applicationClientSecret) };
    inline ObtainApplicationClientSecretResponseBody& setApplicationClientSecret(ObtainApplicationClientSecretResponseBody::ApplicationClientSecret && applicationClientSecret) { DARABONBA_PTR_SET_RVALUE(applicationClientSecret_, applicationClientSecret) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ObtainApplicationClientSecretResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the client key.
    shared_ptr<ObtainApplicationClientSecretResponseBody::ApplicationClientSecret> applicationClientSecret_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
