// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPLICATIONFEDERATEDCREDENTIALREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPLICATIONFEDERATEDCREDENTIALREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateApplicationFederatedCredentialRequestAttributeMappings.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class CreateApplicationFederatedCredentialRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateApplicationFederatedCredentialRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationFederatedCredentialName, applicationFederatedCredentialName_);
      DARABONBA_PTR_TO_JSON(ApplicationFederatedCredentialType, applicationFederatedCredentialType_);
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(AttributeMappings, attributeMappings_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(FederatedCredentialProviderId, federatedCredentialProviderId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(VerificationCondition, verificationCondition_);
    };
    friend void from_json(const Darabonba::Json& j, CreateApplicationFederatedCredentialRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationFederatedCredentialName, applicationFederatedCredentialName_);
      DARABONBA_PTR_FROM_JSON(ApplicationFederatedCredentialType, applicationFederatedCredentialType_);
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(AttributeMappings, attributeMappings_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(FederatedCredentialProviderId, federatedCredentialProviderId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(VerificationCondition, verificationCondition_);
    };
    CreateApplicationFederatedCredentialRequest() = default ;
    CreateApplicationFederatedCredentialRequest(const CreateApplicationFederatedCredentialRequest &) = default ;
    CreateApplicationFederatedCredentialRequest(CreateApplicationFederatedCredentialRequest &&) = default ;
    CreateApplicationFederatedCredentialRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateApplicationFederatedCredentialRequest() = default ;
    CreateApplicationFederatedCredentialRequest& operator=(const CreateApplicationFederatedCredentialRequest &) = default ;
    CreateApplicationFederatedCredentialRequest& operator=(CreateApplicationFederatedCredentialRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationFederatedCredentialName_ == nullptr
        && return this->applicationFederatedCredentialType_ == nullptr && return this->applicationId_ == nullptr && return this->attributeMappings_ == nullptr && return this->description_ == nullptr && return this->federatedCredentialProviderId_ == nullptr
        && return this->instanceId_ == nullptr && return this->verificationCondition_ == nullptr; };
    // applicationFederatedCredentialName Field Functions 
    bool hasApplicationFederatedCredentialName() const { return this->applicationFederatedCredentialName_ != nullptr;};
    void deleteApplicationFederatedCredentialName() { this->applicationFederatedCredentialName_ = nullptr;};
    inline string applicationFederatedCredentialName() const { DARABONBA_PTR_GET_DEFAULT(applicationFederatedCredentialName_, "") };
    inline CreateApplicationFederatedCredentialRequest& setApplicationFederatedCredentialName(string applicationFederatedCredentialName) { DARABONBA_PTR_SET_VALUE(applicationFederatedCredentialName_, applicationFederatedCredentialName) };


    // applicationFederatedCredentialType Field Functions 
    bool hasApplicationFederatedCredentialType() const { return this->applicationFederatedCredentialType_ != nullptr;};
    void deleteApplicationFederatedCredentialType() { this->applicationFederatedCredentialType_ = nullptr;};
    inline string applicationFederatedCredentialType() const { DARABONBA_PTR_GET_DEFAULT(applicationFederatedCredentialType_, "") };
    inline CreateApplicationFederatedCredentialRequest& setApplicationFederatedCredentialType(string applicationFederatedCredentialType) { DARABONBA_PTR_SET_VALUE(applicationFederatedCredentialType_, applicationFederatedCredentialType) };


    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string applicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline CreateApplicationFederatedCredentialRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // attributeMappings Field Functions 
    bool hasAttributeMappings() const { return this->attributeMappings_ != nullptr;};
    void deleteAttributeMappings() { this->attributeMappings_ = nullptr;};
    inline const vector<CreateApplicationFederatedCredentialRequestAttributeMappings> & attributeMappings() const { DARABONBA_PTR_GET_CONST(attributeMappings_, vector<CreateApplicationFederatedCredentialRequestAttributeMappings>) };
    inline vector<CreateApplicationFederatedCredentialRequestAttributeMappings> attributeMappings() { DARABONBA_PTR_GET(attributeMappings_, vector<CreateApplicationFederatedCredentialRequestAttributeMappings>) };
    inline CreateApplicationFederatedCredentialRequest& setAttributeMappings(const vector<CreateApplicationFederatedCredentialRequestAttributeMappings> & attributeMappings) { DARABONBA_PTR_SET_VALUE(attributeMappings_, attributeMappings) };
    inline CreateApplicationFederatedCredentialRequest& setAttributeMappings(vector<CreateApplicationFederatedCredentialRequestAttributeMappings> && attributeMappings) { DARABONBA_PTR_SET_RVALUE(attributeMappings_, attributeMappings) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateApplicationFederatedCredentialRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // federatedCredentialProviderId Field Functions 
    bool hasFederatedCredentialProviderId() const { return this->federatedCredentialProviderId_ != nullptr;};
    void deleteFederatedCredentialProviderId() { this->federatedCredentialProviderId_ = nullptr;};
    inline string federatedCredentialProviderId() const { DARABONBA_PTR_GET_DEFAULT(federatedCredentialProviderId_, "") };
    inline CreateApplicationFederatedCredentialRequest& setFederatedCredentialProviderId(string federatedCredentialProviderId) { DARABONBA_PTR_SET_VALUE(federatedCredentialProviderId_, federatedCredentialProviderId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateApplicationFederatedCredentialRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // verificationCondition Field Functions 
    bool hasVerificationCondition() const { return this->verificationCondition_ != nullptr;};
    void deleteVerificationCondition() { this->verificationCondition_ = nullptr;};
    inline string verificationCondition() const { DARABONBA_PTR_GET_DEFAULT(verificationCondition_, "") };
    inline CreateApplicationFederatedCredentialRequest& setVerificationCondition(string verificationCondition) { DARABONBA_PTR_SET_VALUE(verificationCondition_, verificationCondition) };


  protected:
    // 应用联邦凭证名称
    // 
    // This parameter is required.
    std::shared_ptr<string> applicationFederatedCredentialName_ = nullptr;
    // 应用联邦凭证类型
    // 
    // This parameter is required.
    std::shared_ptr<string> applicationFederatedCredentialType_ = nullptr;
    // IDaaS的应用资源ID。
    // 
    // This parameter is required.
    std::shared_ptr<string> applicationId_ = nullptr;
    // 属性映射
    std::shared_ptr<vector<CreateApplicationFederatedCredentialRequestAttributeMappings>> attributeMappings_ = nullptr;
    // 描述
    std::shared_ptr<string> description_ = nullptr;
    // 联邦凭证提供方ID
    // 
    // This parameter is required.
    std::shared_ptr<string> federatedCredentialProviderId_ = nullptr;
    // IDaaS EIAM实例的ID。
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // 校验条件
    std::shared_ptr<string> verificationCondition_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
