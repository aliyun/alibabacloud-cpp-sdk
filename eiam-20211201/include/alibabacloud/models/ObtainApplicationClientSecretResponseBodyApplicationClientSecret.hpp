// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OBTAINAPPLICATIONCLIENTSECRETRESPONSEBODYAPPLICATIONCLIENTSECRET_HPP_
#define ALIBABACLOUD_MODELS_OBTAINAPPLICATIONCLIENTSECRETRESPONSEBODYAPPLICATIONCLIENTSECRET_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ObtainApplicationClientSecretResponseBodyApplicationClientSecret : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ObtainApplicationClientSecretResponseBodyApplicationClientSecret& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(ClientId, clientId_);
      DARABONBA_PTR_TO_JSON(ClientSecret, clientSecret_);
      DARABONBA_PTR_TO_JSON(ExpirationTime, expirationTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(LastUsedTime, lastUsedTime_);
      DARABONBA_PTR_TO_JSON(SecretId, secretId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ObtainApplicationClientSecretResponseBodyApplicationClientSecret& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
      DARABONBA_PTR_FROM_JSON(ClientSecret, clientSecret_);
      DARABONBA_PTR_FROM_JSON(ExpirationTime, expirationTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(LastUsedTime, lastUsedTime_);
      DARABONBA_PTR_FROM_JSON(SecretId, secretId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ObtainApplicationClientSecretResponseBodyApplicationClientSecret() = default ;
    ObtainApplicationClientSecretResponseBodyApplicationClientSecret(const ObtainApplicationClientSecretResponseBodyApplicationClientSecret &) = default ;
    ObtainApplicationClientSecretResponseBodyApplicationClientSecret(ObtainApplicationClientSecretResponseBodyApplicationClientSecret &&) = default ;
    ObtainApplicationClientSecretResponseBodyApplicationClientSecret(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ObtainApplicationClientSecretResponseBodyApplicationClientSecret() = default ;
    ObtainApplicationClientSecretResponseBodyApplicationClientSecret& operator=(const ObtainApplicationClientSecretResponseBodyApplicationClientSecret &) = default ;
    ObtainApplicationClientSecretResponseBodyApplicationClientSecret& operator=(ObtainApplicationClientSecretResponseBodyApplicationClientSecret &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applicationId_ != nullptr
        && this->clientId_ != nullptr && this->clientSecret_ != nullptr && this->expirationTime_ != nullptr && this->instanceId_ != nullptr && this->lastUsedTime_ != nullptr
        && this->secretId_ != nullptr && this->status_ != nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string applicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline ObtainApplicationClientSecretResponseBodyApplicationClientSecret& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline string clientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
    inline ObtainApplicationClientSecretResponseBodyApplicationClientSecret& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // clientSecret Field Functions 
    bool hasClientSecret() const { return this->clientSecret_ != nullptr;};
    void deleteClientSecret() { this->clientSecret_ = nullptr;};
    inline string clientSecret() const { DARABONBA_PTR_GET_DEFAULT(clientSecret_, "") };
    inline ObtainApplicationClientSecretResponseBodyApplicationClientSecret& setClientSecret(string clientSecret) { DARABONBA_PTR_SET_VALUE(clientSecret_, clientSecret) };


    // expirationTime Field Functions 
    bool hasExpirationTime() const { return this->expirationTime_ != nullptr;};
    void deleteExpirationTime() { this->expirationTime_ = nullptr;};
    inline int64_t expirationTime() const { DARABONBA_PTR_GET_DEFAULT(expirationTime_, 0L) };
    inline ObtainApplicationClientSecretResponseBodyApplicationClientSecret& setExpirationTime(int64_t expirationTime) { DARABONBA_PTR_SET_VALUE(expirationTime_, expirationTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ObtainApplicationClientSecretResponseBodyApplicationClientSecret& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // lastUsedTime Field Functions 
    bool hasLastUsedTime() const { return this->lastUsedTime_ != nullptr;};
    void deleteLastUsedTime() { this->lastUsedTime_ = nullptr;};
    inline int64_t lastUsedTime() const { DARABONBA_PTR_GET_DEFAULT(lastUsedTime_, 0L) };
    inline ObtainApplicationClientSecretResponseBodyApplicationClientSecret& setLastUsedTime(int64_t lastUsedTime) { DARABONBA_PTR_SET_VALUE(lastUsedTime_, lastUsedTime) };


    // secretId Field Functions 
    bool hasSecretId() const { return this->secretId_ != nullptr;};
    void deleteSecretId() { this->secretId_ = nullptr;};
    inline string secretId() const { DARABONBA_PTR_GET_DEFAULT(secretId_, "") };
    inline ObtainApplicationClientSecretResponseBodyApplicationClientSecret& setSecretId(string secretId) { DARABONBA_PTR_SET_VALUE(secretId_, secretId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ObtainApplicationClientSecretResponseBodyApplicationClientSecret& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The ID of the application whose client key you want to query.
    std::shared_ptr<string> applicationId_ = nullptr;
    // The client ID of the application.
    std::shared_ptr<string> clientId_ = nullptr;
    // The client key secret of the application.
    std::shared_ptr<string> clientSecret_ = nullptr;
    std::shared_ptr<int64_t> expirationTime_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The time when the client key was last used. The value is a UNIX timestamp. Unit: milliseconds.
    std::shared_ptr<int64_t> lastUsedTime_ = nullptr;
    // The client key ID of the application.
    std::shared_ptr<string> secretId_ = nullptr;
    // The status of the client key. Valid values:
    // 
    // *   Enabled: The client key is enabled.
    // *   Disabled: The client key is disabled.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
