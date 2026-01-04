// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAPPLICATIONCLIENTSECRETEXPIRATIONTIMEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAPPLICATIONCLIENTSECRETEXPIRATIONTIMEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class UpdateApplicationClientSecretExpirationTimeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateApplicationClientSecretExpirationTimeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(ExpirationTime, expirationTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(SecretId, secretId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateApplicationClientSecretExpirationTimeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(ExpirationTime, expirationTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(SecretId, secretId_);
    };
    UpdateApplicationClientSecretExpirationTimeRequest() = default ;
    UpdateApplicationClientSecretExpirationTimeRequest(const UpdateApplicationClientSecretExpirationTimeRequest &) = default ;
    UpdateApplicationClientSecretExpirationTimeRequest(UpdateApplicationClientSecretExpirationTimeRequest &&) = default ;
    UpdateApplicationClientSecretExpirationTimeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateApplicationClientSecretExpirationTimeRequest() = default ;
    UpdateApplicationClientSecretExpirationTimeRequest& operator=(const UpdateApplicationClientSecretExpirationTimeRequest &) = default ;
    UpdateApplicationClientSecretExpirationTimeRequest& operator=(UpdateApplicationClientSecretExpirationTimeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->expirationTime_ == nullptr && this->instanceId_ == nullptr && this->secretId_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline UpdateApplicationClientSecretExpirationTimeRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // expirationTime Field Functions 
    bool hasExpirationTime() const { return this->expirationTime_ != nullptr;};
    void deleteExpirationTime() { this->expirationTime_ = nullptr;};
    inline int64_t getExpirationTime() const { DARABONBA_PTR_GET_DEFAULT(expirationTime_, 0L) };
    inline UpdateApplicationClientSecretExpirationTimeRequest& setExpirationTime(int64_t expirationTime) { DARABONBA_PTR_SET_VALUE(expirationTime_, expirationTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateApplicationClientSecretExpirationTimeRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // secretId Field Functions 
    bool hasSecretId() const { return this->secretId_ != nullptr;};
    void deleteSecretId() { this->secretId_ = nullptr;};
    inline string getSecretId() const { DARABONBA_PTR_GET_DEFAULT(secretId_, "") };
    inline UpdateApplicationClientSecretExpirationTimeRequest& setSecretId(string secretId) { DARABONBA_PTR_SET_VALUE(secretId_, secretId) };


  protected:
    // IDaaS的应用资源ID。
    // 
    // This parameter is required.
    shared_ptr<string> applicationId_ {};
    // client secret的有效期时间，Unix时间戳格式，单位为毫秒
    // 
    // This parameter is required.
    shared_ptr<int64_t> expirationTime_ {};
    // IDaaS EIAM实例的ID。
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // OIDC 场景下用于客户端身份验证的客户端密钥
    // 
    // This parameter is required.
    shared_ptr<string> secretId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
