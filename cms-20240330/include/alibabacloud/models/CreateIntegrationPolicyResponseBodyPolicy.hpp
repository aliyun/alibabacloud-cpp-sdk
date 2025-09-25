// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINTEGRATIONPOLICYRESPONSEBODYPOLICY_HPP_
#define ALIBABACLOUD_MODELS_CREATEINTEGRATIONPOLICYRESPONSEBODYPOLICY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class CreateIntegrationPolicyResponseBodyPolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateIntegrationPolicyResponseBodyPolicy& obj) { 
      DARABONBA_PTR_TO_JSON(entityGroupId, entityGroupId_);
      DARABONBA_PTR_TO_JSON(policyId, policyId_);
      DARABONBA_PTR_TO_JSON(policyName, policyName_);
      DARABONBA_PTR_TO_JSON(policyType, policyType_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(userId, userId_);
      DARABONBA_PTR_TO_JSON(workspace, workspace_);
    };
    friend void from_json(const Darabonba::Json& j, CreateIntegrationPolicyResponseBodyPolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(entityGroupId, entityGroupId_);
      DARABONBA_PTR_FROM_JSON(policyId, policyId_);
      DARABONBA_PTR_FROM_JSON(policyName, policyName_);
      DARABONBA_PTR_FROM_JSON(policyType, policyType_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(userId, userId_);
      DARABONBA_PTR_FROM_JSON(workspace, workspace_);
    };
    CreateIntegrationPolicyResponseBodyPolicy() = default ;
    CreateIntegrationPolicyResponseBodyPolicy(const CreateIntegrationPolicyResponseBodyPolicy &) = default ;
    CreateIntegrationPolicyResponseBodyPolicy(CreateIntegrationPolicyResponseBodyPolicy &&) = default ;
    CreateIntegrationPolicyResponseBodyPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateIntegrationPolicyResponseBodyPolicy() = default ;
    CreateIntegrationPolicyResponseBodyPolicy& operator=(const CreateIntegrationPolicyResponseBodyPolicy &) = default ;
    CreateIntegrationPolicyResponseBodyPolicy& operator=(CreateIntegrationPolicyResponseBodyPolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->entityGroupId_ != nullptr
        && this->policyId_ != nullptr && this->policyName_ != nullptr && this->policyType_ != nullptr && this->regionId_ != nullptr && this->userId_ != nullptr
        && this->workspace_ != nullptr; };
    // entityGroupId Field Functions 
    bool hasEntityGroupId() const { return this->entityGroupId_ != nullptr;};
    void deleteEntityGroupId() { this->entityGroupId_ = nullptr;};
    inline string entityGroupId() const { DARABONBA_PTR_GET_DEFAULT(entityGroupId_, "") };
    inline CreateIntegrationPolicyResponseBodyPolicy& setEntityGroupId(string entityGroupId) { DARABONBA_PTR_SET_VALUE(entityGroupId_, entityGroupId) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string policyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline CreateIntegrationPolicyResponseBodyPolicy& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // policyName Field Functions 
    bool hasPolicyName() const { return this->policyName_ != nullptr;};
    void deletePolicyName() { this->policyName_ = nullptr;};
    inline string policyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
    inline CreateIntegrationPolicyResponseBodyPolicy& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


    // policyType Field Functions 
    bool hasPolicyType() const { return this->policyType_ != nullptr;};
    void deletePolicyType() { this->policyType_ = nullptr;};
    inline string policyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
    inline CreateIntegrationPolicyResponseBodyPolicy& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateIntegrationPolicyResponseBodyPolicy& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline CreateIntegrationPolicyResponseBodyPolicy& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline string workspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
    inline CreateIntegrationPolicyResponseBodyPolicy& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


  protected:
    std::shared_ptr<string> entityGroupId_ = nullptr;
    std::shared_ptr<string> policyId_ = nullptr;
    std::shared_ptr<string> policyName_ = nullptr;
    std::shared_ptr<string> policyType_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<string> workspace_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
