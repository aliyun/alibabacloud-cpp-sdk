// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINTEGRATIONPOLICYRESPONSEBODYPOLICY_HPP_
#define ALIBABACLOUD_MODELS_GETINTEGRATIONPOLICYRESPONSEBODYPOLICY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetIntegrationPolicyResponseBodyPolicyBindResource.hpp>
#include <alibabacloud/models/GetIntegrationPolicyResponseBodyPolicyEntityGroup.hpp>
#include <alibabacloud/models/GetIntegrationPolicyResponseBodyPolicyManagedInfo.hpp>
#include <vector>
#include <alibabacloud/models/GetIntegrationPolicyResponseBodyPolicyTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class GetIntegrationPolicyResponseBodyPolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIntegrationPolicyResponseBodyPolicy& obj) { 
      DARABONBA_PTR_TO_JSON(bindResource, bindResource_);
      DARABONBA_PTR_TO_JSON(entityGroup, entityGroup_);
      DARABONBA_PTR_TO_JSON(managedInfo, managedInfo_);
      DARABONBA_PTR_TO_JSON(policyId, policyId_);
      DARABONBA_PTR_TO_JSON(policyName, policyName_);
      DARABONBA_PTR_TO_JSON(policyType, policyType_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
      DARABONBA_PTR_TO_JSON(userId, userId_);
      DARABONBA_PTR_TO_JSON(workspace, workspace_);
    };
    friend void from_json(const Darabonba::Json& j, GetIntegrationPolicyResponseBodyPolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(bindResource, bindResource_);
      DARABONBA_PTR_FROM_JSON(entityGroup, entityGroup_);
      DARABONBA_PTR_FROM_JSON(managedInfo, managedInfo_);
      DARABONBA_PTR_FROM_JSON(policyId, policyId_);
      DARABONBA_PTR_FROM_JSON(policyName, policyName_);
      DARABONBA_PTR_FROM_JSON(policyType, policyType_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
      DARABONBA_PTR_FROM_JSON(userId, userId_);
      DARABONBA_PTR_FROM_JSON(workspace, workspace_);
    };
    GetIntegrationPolicyResponseBodyPolicy() = default ;
    GetIntegrationPolicyResponseBodyPolicy(const GetIntegrationPolicyResponseBodyPolicy &) = default ;
    GetIntegrationPolicyResponseBodyPolicy(GetIntegrationPolicyResponseBodyPolicy &&) = default ;
    GetIntegrationPolicyResponseBodyPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIntegrationPolicyResponseBodyPolicy() = default ;
    GetIntegrationPolicyResponseBodyPolicy& operator=(const GetIntegrationPolicyResponseBodyPolicy &) = default ;
    GetIntegrationPolicyResponseBodyPolicy& operator=(GetIntegrationPolicyResponseBodyPolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bindResource_ != nullptr
        && this->entityGroup_ != nullptr && this->managedInfo_ != nullptr && this->policyId_ != nullptr && this->policyName_ != nullptr && this->policyType_ != nullptr
        && this->regionId_ != nullptr && this->resourceGroupId_ != nullptr && this->tags_ != nullptr && this->userId_ != nullptr && this->workspace_ != nullptr; };
    // bindResource Field Functions 
    bool hasBindResource() const { return this->bindResource_ != nullptr;};
    void deleteBindResource() { this->bindResource_ = nullptr;};
    inline const Models::GetIntegrationPolicyResponseBodyPolicyBindResource & bindResource() const { DARABONBA_PTR_GET_CONST(bindResource_, Models::GetIntegrationPolicyResponseBodyPolicyBindResource) };
    inline Models::GetIntegrationPolicyResponseBodyPolicyBindResource bindResource() { DARABONBA_PTR_GET(bindResource_, Models::GetIntegrationPolicyResponseBodyPolicyBindResource) };
    inline GetIntegrationPolicyResponseBodyPolicy& setBindResource(const Models::GetIntegrationPolicyResponseBodyPolicyBindResource & bindResource) { DARABONBA_PTR_SET_VALUE(bindResource_, bindResource) };
    inline GetIntegrationPolicyResponseBodyPolicy& setBindResource(Models::GetIntegrationPolicyResponseBodyPolicyBindResource && bindResource) { DARABONBA_PTR_SET_RVALUE(bindResource_, bindResource) };


    // entityGroup Field Functions 
    bool hasEntityGroup() const { return this->entityGroup_ != nullptr;};
    void deleteEntityGroup() { this->entityGroup_ = nullptr;};
    inline const Models::GetIntegrationPolicyResponseBodyPolicyEntityGroup & entityGroup() const { DARABONBA_PTR_GET_CONST(entityGroup_, Models::GetIntegrationPolicyResponseBodyPolicyEntityGroup) };
    inline Models::GetIntegrationPolicyResponseBodyPolicyEntityGroup entityGroup() { DARABONBA_PTR_GET(entityGroup_, Models::GetIntegrationPolicyResponseBodyPolicyEntityGroup) };
    inline GetIntegrationPolicyResponseBodyPolicy& setEntityGroup(const Models::GetIntegrationPolicyResponseBodyPolicyEntityGroup & entityGroup) { DARABONBA_PTR_SET_VALUE(entityGroup_, entityGroup) };
    inline GetIntegrationPolicyResponseBodyPolicy& setEntityGroup(Models::GetIntegrationPolicyResponseBodyPolicyEntityGroup && entityGroup) { DARABONBA_PTR_SET_RVALUE(entityGroup_, entityGroup) };


    // managedInfo Field Functions 
    bool hasManagedInfo() const { return this->managedInfo_ != nullptr;};
    void deleteManagedInfo() { this->managedInfo_ = nullptr;};
    inline const Models::GetIntegrationPolicyResponseBodyPolicyManagedInfo & managedInfo() const { DARABONBA_PTR_GET_CONST(managedInfo_, Models::GetIntegrationPolicyResponseBodyPolicyManagedInfo) };
    inline Models::GetIntegrationPolicyResponseBodyPolicyManagedInfo managedInfo() { DARABONBA_PTR_GET(managedInfo_, Models::GetIntegrationPolicyResponseBodyPolicyManagedInfo) };
    inline GetIntegrationPolicyResponseBodyPolicy& setManagedInfo(const Models::GetIntegrationPolicyResponseBodyPolicyManagedInfo & managedInfo) { DARABONBA_PTR_SET_VALUE(managedInfo_, managedInfo) };
    inline GetIntegrationPolicyResponseBodyPolicy& setManagedInfo(Models::GetIntegrationPolicyResponseBodyPolicyManagedInfo && managedInfo) { DARABONBA_PTR_SET_RVALUE(managedInfo_, managedInfo) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string policyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline GetIntegrationPolicyResponseBodyPolicy& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // policyName Field Functions 
    bool hasPolicyName() const { return this->policyName_ != nullptr;};
    void deletePolicyName() { this->policyName_ = nullptr;};
    inline string policyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
    inline GetIntegrationPolicyResponseBodyPolicy& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


    // policyType Field Functions 
    bool hasPolicyType() const { return this->policyType_ != nullptr;};
    void deletePolicyType() { this->policyType_ = nullptr;};
    inline string policyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
    inline GetIntegrationPolicyResponseBodyPolicy& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetIntegrationPolicyResponseBodyPolicy& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GetIntegrationPolicyResponseBodyPolicy& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::GetIntegrationPolicyResponseBodyPolicyTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::GetIntegrationPolicyResponseBodyPolicyTags>) };
    inline vector<Models::GetIntegrationPolicyResponseBodyPolicyTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::GetIntegrationPolicyResponseBodyPolicyTags>) };
    inline GetIntegrationPolicyResponseBodyPolicy& setTags(const vector<Models::GetIntegrationPolicyResponseBodyPolicyTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GetIntegrationPolicyResponseBodyPolicy& setTags(vector<Models::GetIntegrationPolicyResponseBodyPolicyTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline GetIntegrationPolicyResponseBodyPolicy& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline string workspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
    inline GetIntegrationPolicyResponseBodyPolicy& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


  protected:
    std::shared_ptr<Models::GetIntegrationPolicyResponseBodyPolicyBindResource> bindResource_ = nullptr;
    std::shared_ptr<Models::GetIntegrationPolicyResponseBodyPolicyEntityGroup> entityGroup_ = nullptr;
    std::shared_ptr<Models::GetIntegrationPolicyResponseBodyPolicyManagedInfo> managedInfo_ = nullptr;
    std::shared_ptr<string> policyId_ = nullptr;
    std::shared_ptr<string> policyName_ = nullptr;
    std::shared_ptr<string> policyType_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<vector<Models::GetIntegrationPolicyResponseBodyPolicyTags>> tags_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<string> workspace_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
