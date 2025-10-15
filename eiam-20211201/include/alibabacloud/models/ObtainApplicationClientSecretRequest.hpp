// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OBTAINAPPLICATIONCLIENTSECRETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_OBTAINAPPLICATIONCLIENTSECRETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ObtainApplicationClientSecretRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ObtainApplicationClientSecretRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(SecretId, secretId_);
    };
    friend void from_json(const Darabonba::Json& j, ObtainApplicationClientSecretRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(SecretId, secretId_);
    };
    ObtainApplicationClientSecretRequest() = default ;
    ObtainApplicationClientSecretRequest(const ObtainApplicationClientSecretRequest &) = default ;
    ObtainApplicationClientSecretRequest(ObtainApplicationClientSecretRequest &&) = default ;
    ObtainApplicationClientSecretRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ObtainApplicationClientSecretRequest() = default ;
    ObtainApplicationClientSecretRequest& operator=(const ObtainApplicationClientSecretRequest &) = default ;
    ObtainApplicationClientSecretRequest& operator=(ObtainApplicationClientSecretRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && return this->instanceId_ == nullptr && return this->secretId_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string applicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline ObtainApplicationClientSecretRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ObtainApplicationClientSecretRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // secretId Field Functions 
    bool hasSecretId() const { return this->secretId_ != nullptr;};
    void deleteSecretId() { this->secretId_ = nullptr;};
    inline string secretId() const { DARABONBA_PTR_GET_DEFAULT(secretId_, "") };
    inline ObtainApplicationClientSecretRequest& setSecretId(string secretId) { DARABONBA_PTR_SET_VALUE(secretId_, secretId) };


  protected:
    // The ID of the application whose client key you want to query.
    // 
    // This parameter is required.
    std::shared_ptr<string> applicationId_ = nullptr;
    // The ID of the instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The client key ID of the application.
    // 
    // This parameter is required.
    std::shared_ptr<string> secretId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
