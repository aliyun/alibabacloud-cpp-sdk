// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPLICATIONFEDERATEDCREDENTIALREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAPPLICATIONFEDERATEDCREDENTIALREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetApplicationFederatedCredentialRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApplicationFederatedCredentialRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationFederatedCredentialId, applicationFederatedCredentialId_);
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetApplicationFederatedCredentialRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationFederatedCredentialId, applicationFederatedCredentialId_);
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    GetApplicationFederatedCredentialRequest() = default ;
    GetApplicationFederatedCredentialRequest(const GetApplicationFederatedCredentialRequest &) = default ;
    GetApplicationFederatedCredentialRequest(GetApplicationFederatedCredentialRequest &&) = default ;
    GetApplicationFederatedCredentialRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApplicationFederatedCredentialRequest() = default ;
    GetApplicationFederatedCredentialRequest& operator=(const GetApplicationFederatedCredentialRequest &) = default ;
    GetApplicationFederatedCredentialRequest& operator=(GetApplicationFederatedCredentialRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationFederatedCredentialId_ == nullptr
        && return this->applicationId_ == nullptr && return this->instanceId_ == nullptr; };
    // applicationFederatedCredentialId Field Functions 
    bool hasApplicationFederatedCredentialId() const { return this->applicationFederatedCredentialId_ != nullptr;};
    void deleteApplicationFederatedCredentialId() { this->applicationFederatedCredentialId_ = nullptr;};
    inline string applicationFederatedCredentialId() const { DARABONBA_PTR_GET_DEFAULT(applicationFederatedCredentialId_, "") };
    inline GetApplicationFederatedCredentialRequest& setApplicationFederatedCredentialId(string applicationFederatedCredentialId) { DARABONBA_PTR_SET_VALUE(applicationFederatedCredentialId_, applicationFederatedCredentialId) };


    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string applicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline GetApplicationFederatedCredentialRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetApplicationFederatedCredentialRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // 应用联邦凭证Id
    // 
    // This parameter is required.
    std::shared_ptr<string> applicationFederatedCredentialId_ = nullptr;
    // IDaaS的应用资源ID。
    // 
    // This parameter is required.
    std::shared_ptr<string> applicationId_ = nullptr;
    // IDaaS EIAM实例的ID。
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
