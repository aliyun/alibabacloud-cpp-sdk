// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINTEGRATIONPOLICIESRESPONSEBODYPOLICIES_HPP_
#define ALIBABACLOUD_MODELS_LISTINTEGRATIONPOLICIESRESPONSEBODYPOLICIES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListIntegrationPoliciesResponseBodyPoliciesBindResource.hpp>
#include <alibabacloud/models/ListIntegrationPoliciesResponseBodyPoliciesEntityGroup.hpp>
#include <alibabacloud/models/ListIntegrationPoliciesResponseBodyPoliciesManagedInfo.hpp>
#include <alibabacloud/models/ListIntegrationPoliciesResponseBodyPoliciesSubAddonRelease.hpp>
#include <vector>
#include <alibabacloud/models/ListIntegrationPoliciesResponseBodyPoliciesTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListIntegrationPoliciesResponseBodyPolicies : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIntegrationPoliciesResponseBodyPolicies& obj) { 
      DARABONBA_PTR_TO_JSON(bindResource, bindResource_);
      DARABONBA_PTR_TO_JSON(csUmodelStatus, csUmodelStatus_);
      DARABONBA_PTR_TO_JSON(entityGroup, entityGroup_);
      DARABONBA_PTR_TO_JSON(feePackage, feePackage_);
      DARABONBA_PTR_TO_JSON(managedInfo, managedInfo_);
      DARABONBA_PTR_TO_JSON(policyId, policyId_);
      DARABONBA_PTR_TO_JSON(policyName, policyName_);
      DARABONBA_PTR_TO_JSON(policyType, policyType_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(subAddonRelease, subAddonRelease_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
      DARABONBA_PTR_TO_JSON(userId, userId_);
      DARABONBA_PTR_TO_JSON(workspace, workspace_);
    };
    friend void from_json(const Darabonba::Json& j, ListIntegrationPoliciesResponseBodyPolicies& obj) { 
      DARABONBA_PTR_FROM_JSON(bindResource, bindResource_);
      DARABONBA_PTR_FROM_JSON(csUmodelStatus, csUmodelStatus_);
      DARABONBA_PTR_FROM_JSON(entityGroup, entityGroup_);
      DARABONBA_PTR_FROM_JSON(feePackage, feePackage_);
      DARABONBA_PTR_FROM_JSON(managedInfo, managedInfo_);
      DARABONBA_PTR_FROM_JSON(policyId, policyId_);
      DARABONBA_PTR_FROM_JSON(policyName, policyName_);
      DARABONBA_PTR_FROM_JSON(policyType, policyType_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(subAddonRelease, subAddonRelease_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
      DARABONBA_PTR_FROM_JSON(userId, userId_);
      DARABONBA_PTR_FROM_JSON(workspace, workspace_);
    };
    ListIntegrationPoliciesResponseBodyPolicies() = default ;
    ListIntegrationPoliciesResponseBodyPolicies(const ListIntegrationPoliciesResponseBodyPolicies &) = default ;
    ListIntegrationPoliciesResponseBodyPolicies(ListIntegrationPoliciesResponseBodyPolicies &&) = default ;
    ListIntegrationPoliciesResponseBodyPolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIntegrationPoliciesResponseBodyPolicies() = default ;
    ListIntegrationPoliciesResponseBodyPolicies& operator=(const ListIntegrationPoliciesResponseBodyPolicies &) = default ;
    ListIntegrationPoliciesResponseBodyPolicies& operator=(ListIntegrationPoliciesResponseBodyPolicies &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bindResource_ == nullptr
        && return this->csUmodelStatus_ == nullptr && return this->entityGroup_ == nullptr && return this->feePackage_ == nullptr && return this->managedInfo_ == nullptr && return this->policyId_ == nullptr
        && return this->policyName_ == nullptr && return this->policyType_ == nullptr && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr && return this->subAddonRelease_ == nullptr
        && return this->tags_ == nullptr && return this->userId_ == nullptr && return this->workspace_ == nullptr; };
    // bindResource Field Functions 
    bool hasBindResource() const { return this->bindResource_ != nullptr;};
    void deleteBindResource() { this->bindResource_ = nullptr;};
    inline const Models::ListIntegrationPoliciesResponseBodyPoliciesBindResource & bindResource() const { DARABONBA_PTR_GET_CONST(bindResource_, Models::ListIntegrationPoliciesResponseBodyPoliciesBindResource) };
    inline Models::ListIntegrationPoliciesResponseBodyPoliciesBindResource bindResource() { DARABONBA_PTR_GET(bindResource_, Models::ListIntegrationPoliciesResponseBodyPoliciesBindResource) };
    inline ListIntegrationPoliciesResponseBodyPolicies& setBindResource(const Models::ListIntegrationPoliciesResponseBodyPoliciesBindResource & bindResource) { DARABONBA_PTR_SET_VALUE(bindResource_, bindResource) };
    inline ListIntegrationPoliciesResponseBodyPolicies& setBindResource(Models::ListIntegrationPoliciesResponseBodyPoliciesBindResource && bindResource) { DARABONBA_PTR_SET_RVALUE(bindResource_, bindResource) };


    // csUmodelStatus Field Functions 
    bool hasCsUmodelStatus() const { return this->csUmodelStatus_ != nullptr;};
    void deleteCsUmodelStatus() { this->csUmodelStatus_ = nullptr;};
    inline bool csUmodelStatus() const { DARABONBA_PTR_GET_DEFAULT(csUmodelStatus_, false) };
    inline ListIntegrationPoliciesResponseBodyPolicies& setCsUmodelStatus(bool csUmodelStatus) { DARABONBA_PTR_SET_VALUE(csUmodelStatus_, csUmodelStatus) };


    // entityGroup Field Functions 
    bool hasEntityGroup() const { return this->entityGroup_ != nullptr;};
    void deleteEntityGroup() { this->entityGroup_ = nullptr;};
    inline const Models::ListIntegrationPoliciesResponseBodyPoliciesEntityGroup & entityGroup() const { DARABONBA_PTR_GET_CONST(entityGroup_, Models::ListIntegrationPoliciesResponseBodyPoliciesEntityGroup) };
    inline Models::ListIntegrationPoliciesResponseBodyPoliciesEntityGroup entityGroup() { DARABONBA_PTR_GET(entityGroup_, Models::ListIntegrationPoliciesResponseBodyPoliciesEntityGroup) };
    inline ListIntegrationPoliciesResponseBodyPolicies& setEntityGroup(const Models::ListIntegrationPoliciesResponseBodyPoliciesEntityGroup & entityGroup) { DARABONBA_PTR_SET_VALUE(entityGroup_, entityGroup) };
    inline ListIntegrationPoliciesResponseBodyPolicies& setEntityGroup(Models::ListIntegrationPoliciesResponseBodyPoliciesEntityGroup && entityGroup) { DARABONBA_PTR_SET_RVALUE(entityGroup_, entityGroup) };


    // feePackage Field Functions 
    bool hasFeePackage() const { return this->feePackage_ != nullptr;};
    void deleteFeePackage() { this->feePackage_ = nullptr;};
    inline string feePackage() const { DARABONBA_PTR_GET_DEFAULT(feePackage_, "") };
    inline ListIntegrationPoliciesResponseBodyPolicies& setFeePackage(string feePackage) { DARABONBA_PTR_SET_VALUE(feePackage_, feePackage) };


    // managedInfo Field Functions 
    bool hasManagedInfo() const { return this->managedInfo_ != nullptr;};
    void deleteManagedInfo() { this->managedInfo_ = nullptr;};
    inline const Models::ListIntegrationPoliciesResponseBodyPoliciesManagedInfo & managedInfo() const { DARABONBA_PTR_GET_CONST(managedInfo_, Models::ListIntegrationPoliciesResponseBodyPoliciesManagedInfo) };
    inline Models::ListIntegrationPoliciesResponseBodyPoliciesManagedInfo managedInfo() { DARABONBA_PTR_GET(managedInfo_, Models::ListIntegrationPoliciesResponseBodyPoliciesManagedInfo) };
    inline ListIntegrationPoliciesResponseBodyPolicies& setManagedInfo(const Models::ListIntegrationPoliciesResponseBodyPoliciesManagedInfo & managedInfo) { DARABONBA_PTR_SET_VALUE(managedInfo_, managedInfo) };
    inline ListIntegrationPoliciesResponseBodyPolicies& setManagedInfo(Models::ListIntegrationPoliciesResponseBodyPoliciesManagedInfo && managedInfo) { DARABONBA_PTR_SET_RVALUE(managedInfo_, managedInfo) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string policyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline ListIntegrationPoliciesResponseBodyPolicies& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // policyName Field Functions 
    bool hasPolicyName() const { return this->policyName_ != nullptr;};
    void deletePolicyName() { this->policyName_ = nullptr;};
    inline string policyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
    inline ListIntegrationPoliciesResponseBodyPolicies& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


    // policyType Field Functions 
    bool hasPolicyType() const { return this->policyType_ != nullptr;};
    void deletePolicyType() { this->policyType_ = nullptr;};
    inline string policyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
    inline ListIntegrationPoliciesResponseBodyPolicies& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListIntegrationPoliciesResponseBodyPolicies& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListIntegrationPoliciesResponseBodyPolicies& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // subAddonRelease Field Functions 
    bool hasSubAddonRelease() const { return this->subAddonRelease_ != nullptr;};
    void deleteSubAddonRelease() { this->subAddonRelease_ = nullptr;};
    inline const Models::ListIntegrationPoliciesResponseBodyPoliciesSubAddonRelease & subAddonRelease() const { DARABONBA_PTR_GET_CONST(subAddonRelease_, Models::ListIntegrationPoliciesResponseBodyPoliciesSubAddonRelease) };
    inline Models::ListIntegrationPoliciesResponseBodyPoliciesSubAddonRelease subAddonRelease() { DARABONBA_PTR_GET(subAddonRelease_, Models::ListIntegrationPoliciesResponseBodyPoliciesSubAddonRelease) };
    inline ListIntegrationPoliciesResponseBodyPolicies& setSubAddonRelease(const Models::ListIntegrationPoliciesResponseBodyPoliciesSubAddonRelease & subAddonRelease) { DARABONBA_PTR_SET_VALUE(subAddonRelease_, subAddonRelease) };
    inline ListIntegrationPoliciesResponseBodyPolicies& setSubAddonRelease(Models::ListIntegrationPoliciesResponseBodyPoliciesSubAddonRelease && subAddonRelease) { DARABONBA_PTR_SET_RVALUE(subAddonRelease_, subAddonRelease) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::ListIntegrationPoliciesResponseBodyPoliciesTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::ListIntegrationPoliciesResponseBodyPoliciesTags>) };
    inline vector<Models::ListIntegrationPoliciesResponseBodyPoliciesTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::ListIntegrationPoliciesResponseBodyPoliciesTags>) };
    inline ListIntegrationPoliciesResponseBodyPolicies& setTags(const vector<Models::ListIntegrationPoliciesResponseBodyPoliciesTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListIntegrationPoliciesResponseBodyPolicies& setTags(vector<Models::ListIntegrationPoliciesResponseBodyPoliciesTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ListIntegrationPoliciesResponseBodyPolicies& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline string workspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
    inline ListIntegrationPoliciesResponseBodyPolicies& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


  protected:
    // Bound resource information
    std::shared_ptr<Models::ListIntegrationPoliciesResponseBodyPoliciesBindResource> bindResource_ = nullptr;
    // Cs Umodel Status
    std::shared_ptr<bool> csUmodelStatus_ = nullptr;
    // Entity group
    std::shared_ptr<Models::ListIntegrationPoliciesResponseBodyPoliciesEntityGroup> entityGroup_ = nullptr;
    std::shared_ptr<string> feePackage_ = nullptr;
    // Policy network management information.
    std::shared_ptr<Models::ListIntegrationPoliciesResponseBodyPoliciesManagedInfo> managedInfo_ = nullptr;
    // Policy ID.
    std::shared_ptr<string> policyId_ = nullptr;
    // Rule name.
    std::shared_ptr<string> policyName_ = nullptr;
    // Access center policy type
    std::shared_ptr<string> policyType_ = nullptr;
    // Region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // Resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // Number of sub-releases
    std::shared_ptr<Models::ListIntegrationPoliciesResponseBodyPoliciesSubAddonRelease> subAddonRelease_ = nullptr;
    // Resource tag key values.
    std::shared_ptr<vector<Models::ListIntegrationPoliciesResponseBodyPoliciesTags>> tags_ = nullptr;
    // User ID
    std::shared_ptr<string> userId_ = nullptr;
    // Workspace.
    std::shared_ptr<string> workspace_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
