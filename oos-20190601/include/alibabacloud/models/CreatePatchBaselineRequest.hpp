// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPATCHBASELINEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPATCHBASELINEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreatePatchBaselineRequestTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class CreatePatchBaselineRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePatchBaselineRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApprovalRules, approvalRules_);
      DARABONBA_PTR_TO_JSON(ApprovedPatches, approvedPatches_);
      DARABONBA_PTR_TO_JSON(ApprovedPatchesEnableNonSecurity, approvedPatchesEnableNonSecurity_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OperationSystem, operationSystem_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RejectedPatches, rejectedPatches_);
      DARABONBA_PTR_TO_JSON(RejectedPatchesAction, rejectedPatchesAction_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Sources, sources_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePatchBaselineRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApprovalRules, approvalRules_);
      DARABONBA_PTR_FROM_JSON(ApprovedPatches, approvedPatches_);
      DARABONBA_PTR_FROM_JSON(ApprovedPatchesEnableNonSecurity, approvedPatchesEnableNonSecurity_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OperationSystem, operationSystem_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RejectedPatches, rejectedPatches_);
      DARABONBA_PTR_FROM_JSON(RejectedPatchesAction, rejectedPatchesAction_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Sources, sources_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    CreatePatchBaselineRequest() = default ;
    CreatePatchBaselineRequest(const CreatePatchBaselineRequest &) = default ;
    CreatePatchBaselineRequest(CreatePatchBaselineRequest &&) = default ;
    CreatePatchBaselineRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePatchBaselineRequest() = default ;
    CreatePatchBaselineRequest& operator=(const CreatePatchBaselineRequest &) = default ;
    CreatePatchBaselineRequest& operator=(CreatePatchBaselineRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->approvalRules_ == nullptr
        && return this->approvedPatches_ == nullptr && return this->approvedPatchesEnableNonSecurity_ == nullptr && return this->clientToken_ == nullptr && return this->description_ == nullptr && return this->name_ == nullptr
        && return this->operationSystem_ == nullptr && return this->regionId_ == nullptr && return this->rejectedPatches_ == nullptr && return this->rejectedPatchesAction_ == nullptr && return this->resourceGroupId_ == nullptr
        && return this->sources_ == nullptr && return this->tags_ == nullptr; };
    // approvalRules Field Functions 
    bool hasApprovalRules() const { return this->approvalRules_ != nullptr;};
    void deleteApprovalRules() { this->approvalRules_ = nullptr;};
    inline string approvalRules() const { DARABONBA_PTR_GET_DEFAULT(approvalRules_, "") };
    inline CreatePatchBaselineRequest& setApprovalRules(string approvalRules) { DARABONBA_PTR_SET_VALUE(approvalRules_, approvalRules) };


    // approvedPatches Field Functions 
    bool hasApprovedPatches() const { return this->approvedPatches_ != nullptr;};
    void deleteApprovedPatches() { this->approvedPatches_ = nullptr;};
    inline const vector<string> & approvedPatches() const { DARABONBA_PTR_GET_CONST(approvedPatches_, vector<string>) };
    inline vector<string> approvedPatches() { DARABONBA_PTR_GET(approvedPatches_, vector<string>) };
    inline CreatePatchBaselineRequest& setApprovedPatches(const vector<string> & approvedPatches) { DARABONBA_PTR_SET_VALUE(approvedPatches_, approvedPatches) };
    inline CreatePatchBaselineRequest& setApprovedPatches(vector<string> && approvedPatches) { DARABONBA_PTR_SET_RVALUE(approvedPatches_, approvedPatches) };


    // approvedPatchesEnableNonSecurity Field Functions 
    bool hasApprovedPatchesEnableNonSecurity() const { return this->approvedPatchesEnableNonSecurity_ != nullptr;};
    void deleteApprovedPatchesEnableNonSecurity() { this->approvedPatchesEnableNonSecurity_ = nullptr;};
    inline bool approvedPatchesEnableNonSecurity() const { DARABONBA_PTR_GET_DEFAULT(approvedPatchesEnableNonSecurity_, false) };
    inline CreatePatchBaselineRequest& setApprovedPatchesEnableNonSecurity(bool approvedPatchesEnableNonSecurity) { DARABONBA_PTR_SET_VALUE(approvedPatchesEnableNonSecurity_, approvedPatchesEnableNonSecurity) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreatePatchBaselineRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreatePatchBaselineRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreatePatchBaselineRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // operationSystem Field Functions 
    bool hasOperationSystem() const { return this->operationSystem_ != nullptr;};
    void deleteOperationSystem() { this->operationSystem_ = nullptr;};
    inline string operationSystem() const { DARABONBA_PTR_GET_DEFAULT(operationSystem_, "") };
    inline CreatePatchBaselineRequest& setOperationSystem(string operationSystem) { DARABONBA_PTR_SET_VALUE(operationSystem_, operationSystem) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreatePatchBaselineRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // rejectedPatches Field Functions 
    bool hasRejectedPatches() const { return this->rejectedPatches_ != nullptr;};
    void deleteRejectedPatches() { this->rejectedPatches_ = nullptr;};
    inline const vector<string> & rejectedPatches() const { DARABONBA_PTR_GET_CONST(rejectedPatches_, vector<string>) };
    inline vector<string> rejectedPatches() { DARABONBA_PTR_GET(rejectedPatches_, vector<string>) };
    inline CreatePatchBaselineRequest& setRejectedPatches(const vector<string> & rejectedPatches) { DARABONBA_PTR_SET_VALUE(rejectedPatches_, rejectedPatches) };
    inline CreatePatchBaselineRequest& setRejectedPatches(vector<string> && rejectedPatches) { DARABONBA_PTR_SET_RVALUE(rejectedPatches_, rejectedPatches) };


    // rejectedPatchesAction Field Functions 
    bool hasRejectedPatchesAction() const { return this->rejectedPatchesAction_ != nullptr;};
    void deleteRejectedPatchesAction() { this->rejectedPatchesAction_ = nullptr;};
    inline string rejectedPatchesAction() const { DARABONBA_PTR_GET_DEFAULT(rejectedPatchesAction_, "") };
    inline CreatePatchBaselineRequest& setRejectedPatchesAction(string rejectedPatchesAction) { DARABONBA_PTR_SET_VALUE(rejectedPatchesAction_, rejectedPatchesAction) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreatePatchBaselineRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // sources Field Functions 
    bool hasSources() const { return this->sources_ != nullptr;};
    void deleteSources() { this->sources_ = nullptr;};
    inline const vector<string> & sources() const { DARABONBA_PTR_GET_CONST(sources_, vector<string>) };
    inline vector<string> sources() { DARABONBA_PTR_GET(sources_, vector<string>) };
    inline CreatePatchBaselineRequest& setSources(const vector<string> & sources) { DARABONBA_PTR_SET_VALUE(sources_, sources) };
    inline CreatePatchBaselineRequest& setSources(vector<string> && sources) { DARABONBA_PTR_SET_RVALUE(sources_, sources) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<CreatePatchBaselineRequestTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<CreatePatchBaselineRequestTags>) };
    inline vector<CreatePatchBaselineRequestTags> tags() { DARABONBA_PTR_GET(tags_, vector<CreatePatchBaselineRequestTags>) };
    inline CreatePatchBaselineRequest& setTags(const vector<CreatePatchBaselineRequestTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline CreatePatchBaselineRequest& setTags(vector<CreatePatchBaselineRequestTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The rules of scanning and installing patches for the specified operating system.
    // 
    // This parameter is required.
    std::shared_ptr<string> approvalRules_ = nullptr;
    // The approved patches.
    std::shared_ptr<vector<string>> approvedPatches_ = nullptr;
    // Specifies whether the approved patch involves updates other than security-related updates.
    std::shared_ptr<bool> approvedPatchesEnableNonSecurity_ = nullptr;
    // The client token that is used to ensure the idempotence of the request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The description of the patch baseline.
    std::shared_ptr<string> description_ = nullptr;
    // The name of the patch baseline.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The type of the operating system. Valid values:
    // 
    // *   Windows
    // *   Ubuntu
    // *   CentOS
    // *   Debian
    // *   AliyunLinux
    // *   RedhatEnterpriseLinux
    // *   Anolis
    // *   AlmaLinux
    // 
    // This parameter is required.
    std::shared_ptr<string> operationSystem_ = nullptr;
    // The ID of the region in which you want to create a patch baseline.
    std::shared_ptr<string> regionId_ = nullptr;
    // The rejected patches.
    std::shared_ptr<vector<string>> rejectedPatches_ = nullptr;
    // The action of the rejected patch.
    std::shared_ptr<string> rejectedPatchesAction_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The patch source configurations.
    std::shared_ptr<vector<string>> sources_ = nullptr;
    // The tags.
    std::shared_ptr<vector<CreatePatchBaselineRequestTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
