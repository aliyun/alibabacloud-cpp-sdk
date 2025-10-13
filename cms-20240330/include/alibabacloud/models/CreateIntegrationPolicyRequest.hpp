// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINTEGRATIONPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEINTEGRATIONPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateIntegrationPolicyRequestEntityGroup.hpp>
#include <vector>
#include <alibabacloud/models/CreateIntegrationPolicyRequestTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class CreateIntegrationPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateIntegrationPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(entityGroup, entityGroup_);
      DARABONBA_PTR_TO_JSON(policyName, policyName_);
      DARABONBA_PTR_TO_JSON(policyType, policyType_);
      DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
      DARABONBA_PTR_TO_JSON(workspace, workspace_);
    };
    friend void from_json(const Darabonba::Json& j, CreateIntegrationPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(entityGroup, entityGroup_);
      DARABONBA_PTR_FROM_JSON(policyName, policyName_);
      DARABONBA_PTR_FROM_JSON(policyType, policyType_);
      DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
      DARABONBA_PTR_FROM_JSON(workspace, workspace_);
    };
    CreateIntegrationPolicyRequest() = default ;
    CreateIntegrationPolicyRequest(const CreateIntegrationPolicyRequest &) = default ;
    CreateIntegrationPolicyRequest(CreateIntegrationPolicyRequest &&) = default ;
    CreateIntegrationPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateIntegrationPolicyRequest() = default ;
    CreateIntegrationPolicyRequest& operator=(const CreateIntegrationPolicyRequest &) = default ;
    CreateIntegrationPolicyRequest& operator=(CreateIntegrationPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->entityGroup_ == nullptr
        && return this->policyName_ == nullptr && return this->policyType_ == nullptr && return this->resourceGroupId_ == nullptr && return this->tags_ == nullptr && return this->workspace_ == nullptr; };
    // entityGroup Field Functions 
    bool hasEntityGroup() const { return this->entityGroup_ != nullptr;};
    void deleteEntityGroup() { this->entityGroup_ = nullptr;};
    inline const CreateIntegrationPolicyRequestEntityGroup & entityGroup() const { DARABONBA_PTR_GET_CONST(entityGroup_, CreateIntegrationPolicyRequestEntityGroup) };
    inline CreateIntegrationPolicyRequestEntityGroup entityGroup() { DARABONBA_PTR_GET(entityGroup_, CreateIntegrationPolicyRequestEntityGroup) };
    inline CreateIntegrationPolicyRequest& setEntityGroup(const CreateIntegrationPolicyRequestEntityGroup & entityGroup) { DARABONBA_PTR_SET_VALUE(entityGroup_, entityGroup) };
    inline CreateIntegrationPolicyRequest& setEntityGroup(CreateIntegrationPolicyRequestEntityGroup && entityGroup) { DARABONBA_PTR_SET_RVALUE(entityGroup_, entityGroup) };


    // policyName Field Functions 
    bool hasPolicyName() const { return this->policyName_ != nullptr;};
    void deletePolicyName() { this->policyName_ = nullptr;};
    inline string policyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
    inline CreateIntegrationPolicyRequest& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


    // policyType Field Functions 
    bool hasPolicyType() const { return this->policyType_ != nullptr;};
    void deletePolicyType() { this->policyType_ = nullptr;};
    inline string policyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
    inline CreateIntegrationPolicyRequest& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateIntegrationPolicyRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<CreateIntegrationPolicyRequestTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<CreateIntegrationPolicyRequestTags>) };
    inline vector<CreateIntegrationPolicyRequestTags> tags() { DARABONBA_PTR_GET(tags_, vector<CreateIntegrationPolicyRequestTags>) };
    inline CreateIntegrationPolicyRequest& setTags(const vector<CreateIntegrationPolicyRequestTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline CreateIntegrationPolicyRequest& setTags(vector<CreateIntegrationPolicyRequestTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline string workspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
    inline CreateIntegrationPolicyRequest& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


  protected:
    std::shared_ptr<CreateIntegrationPolicyRequestEntityGroup> entityGroup_ = nullptr;
    std::shared_ptr<string> policyName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> policyType_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<vector<CreateIntegrationPolicyRequestTags>> tags_ = nullptr;
    std::shared_ptr<string> workspace_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
