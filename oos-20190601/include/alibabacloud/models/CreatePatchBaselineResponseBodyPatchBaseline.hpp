// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPATCHBASELINERESPONSEBODYPATCHBASELINE_HPP_
#define ALIBABACLOUD_MODELS_CREATEPATCHBASELINERESPONSEBODYPATCHBASELINE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreatePatchBaselineResponseBodyPatchBaselineTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class CreatePatchBaselineResponseBodyPatchBaseline : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePatchBaselineResponseBodyPatchBaseline& obj) { 
      DARABONBA_PTR_TO_JSON(ApprovalRules, approvalRules_);
      DARABONBA_PTR_TO_JSON(ApprovedPatches, approvedPatches_);
      DARABONBA_PTR_TO_JSON(ApprovedPatchesEnableNonSecurity, approvedPatchesEnableNonSecurity_);
      DARABONBA_PTR_TO_JSON(CreatedBy, createdBy_);
      DARABONBA_PTR_TO_JSON(CreatedDate, createdDate_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OperationSystem, operationSystem_);
      DARABONBA_PTR_TO_JSON(RejectedPatches, rejectedPatches_);
      DARABONBA_PTR_TO_JSON(RejectedPatchesAction, rejectedPatchesAction_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ShareType, shareType_);
      DARABONBA_PTR_TO_JSON(Sources, sources_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(UpdatedBy, updatedBy_);
      DARABONBA_PTR_TO_JSON(UpdatedDate, updatedDate_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePatchBaselineResponseBodyPatchBaseline& obj) { 
      DARABONBA_PTR_FROM_JSON(ApprovalRules, approvalRules_);
      DARABONBA_PTR_FROM_JSON(ApprovedPatches, approvedPatches_);
      DARABONBA_PTR_FROM_JSON(ApprovedPatchesEnableNonSecurity, approvedPatchesEnableNonSecurity_);
      DARABONBA_PTR_FROM_JSON(CreatedBy, createdBy_);
      DARABONBA_PTR_FROM_JSON(CreatedDate, createdDate_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OperationSystem, operationSystem_);
      DARABONBA_PTR_FROM_JSON(RejectedPatches, rejectedPatches_);
      DARABONBA_PTR_FROM_JSON(RejectedPatchesAction, rejectedPatchesAction_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ShareType, shareType_);
      DARABONBA_PTR_FROM_JSON(Sources, sources_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(UpdatedBy, updatedBy_);
      DARABONBA_PTR_FROM_JSON(UpdatedDate, updatedDate_);
    };
    CreatePatchBaselineResponseBodyPatchBaseline() = default ;
    CreatePatchBaselineResponseBodyPatchBaseline(const CreatePatchBaselineResponseBodyPatchBaseline &) = default ;
    CreatePatchBaselineResponseBodyPatchBaseline(CreatePatchBaselineResponseBodyPatchBaseline &&) = default ;
    CreatePatchBaselineResponseBodyPatchBaseline(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePatchBaselineResponseBodyPatchBaseline() = default ;
    CreatePatchBaselineResponseBodyPatchBaseline& operator=(const CreatePatchBaselineResponseBodyPatchBaseline &) = default ;
    CreatePatchBaselineResponseBodyPatchBaseline& operator=(CreatePatchBaselineResponseBodyPatchBaseline &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->approvalRules_ == nullptr
        && return this->approvedPatches_ == nullptr && return this->approvedPatchesEnableNonSecurity_ == nullptr && return this->createdBy_ == nullptr && return this->createdDate_ == nullptr && return this->description_ == nullptr
        && return this->id_ == nullptr && return this->name_ == nullptr && return this->operationSystem_ == nullptr && return this->rejectedPatches_ == nullptr && return this->rejectedPatchesAction_ == nullptr
        && return this->resourceGroupId_ == nullptr && return this->shareType_ == nullptr && return this->sources_ == nullptr && return this->tags_ == nullptr && return this->updatedBy_ == nullptr
        && return this->updatedDate_ == nullptr; };
    // approvalRules Field Functions 
    bool hasApprovalRules() const { return this->approvalRules_ != nullptr;};
    void deleteApprovalRules() { this->approvalRules_ = nullptr;};
    inline string approvalRules() const { DARABONBA_PTR_GET_DEFAULT(approvalRules_, "") };
    inline CreatePatchBaselineResponseBodyPatchBaseline& setApprovalRules(string approvalRules) { DARABONBA_PTR_SET_VALUE(approvalRules_, approvalRules) };


    // approvedPatches Field Functions 
    bool hasApprovedPatches() const { return this->approvedPatches_ != nullptr;};
    void deleteApprovedPatches() { this->approvedPatches_ = nullptr;};
    inline const vector<string> & approvedPatches() const { DARABONBA_PTR_GET_CONST(approvedPatches_, vector<string>) };
    inline vector<string> approvedPatches() { DARABONBA_PTR_GET(approvedPatches_, vector<string>) };
    inline CreatePatchBaselineResponseBodyPatchBaseline& setApprovedPatches(const vector<string> & approvedPatches) { DARABONBA_PTR_SET_VALUE(approvedPatches_, approvedPatches) };
    inline CreatePatchBaselineResponseBodyPatchBaseline& setApprovedPatches(vector<string> && approvedPatches) { DARABONBA_PTR_SET_RVALUE(approvedPatches_, approvedPatches) };


    // approvedPatchesEnableNonSecurity Field Functions 
    bool hasApprovedPatchesEnableNonSecurity() const { return this->approvedPatchesEnableNonSecurity_ != nullptr;};
    void deleteApprovedPatchesEnableNonSecurity() { this->approvedPatchesEnableNonSecurity_ = nullptr;};
    inline bool approvedPatchesEnableNonSecurity() const { DARABONBA_PTR_GET_DEFAULT(approvedPatchesEnableNonSecurity_, false) };
    inline CreatePatchBaselineResponseBodyPatchBaseline& setApprovedPatchesEnableNonSecurity(bool approvedPatchesEnableNonSecurity) { DARABONBA_PTR_SET_VALUE(approvedPatchesEnableNonSecurity_, approvedPatchesEnableNonSecurity) };


    // createdBy Field Functions 
    bool hasCreatedBy() const { return this->createdBy_ != nullptr;};
    void deleteCreatedBy() { this->createdBy_ = nullptr;};
    inline string createdBy() const { DARABONBA_PTR_GET_DEFAULT(createdBy_, "") };
    inline CreatePatchBaselineResponseBodyPatchBaseline& setCreatedBy(string createdBy) { DARABONBA_PTR_SET_VALUE(createdBy_, createdBy) };


    // createdDate Field Functions 
    bool hasCreatedDate() const { return this->createdDate_ != nullptr;};
    void deleteCreatedDate() { this->createdDate_ = nullptr;};
    inline string createdDate() const { DARABONBA_PTR_GET_DEFAULT(createdDate_, "") };
    inline CreatePatchBaselineResponseBodyPatchBaseline& setCreatedDate(string createdDate) { DARABONBA_PTR_SET_VALUE(createdDate_, createdDate) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreatePatchBaselineResponseBodyPatchBaseline& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline CreatePatchBaselineResponseBodyPatchBaseline& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreatePatchBaselineResponseBodyPatchBaseline& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // operationSystem Field Functions 
    bool hasOperationSystem() const { return this->operationSystem_ != nullptr;};
    void deleteOperationSystem() { this->operationSystem_ = nullptr;};
    inline string operationSystem() const { DARABONBA_PTR_GET_DEFAULT(operationSystem_, "") };
    inline CreatePatchBaselineResponseBodyPatchBaseline& setOperationSystem(string operationSystem) { DARABONBA_PTR_SET_VALUE(operationSystem_, operationSystem) };


    // rejectedPatches Field Functions 
    bool hasRejectedPatches() const { return this->rejectedPatches_ != nullptr;};
    void deleteRejectedPatches() { this->rejectedPatches_ = nullptr;};
    inline const vector<string> & rejectedPatches() const { DARABONBA_PTR_GET_CONST(rejectedPatches_, vector<string>) };
    inline vector<string> rejectedPatches() { DARABONBA_PTR_GET(rejectedPatches_, vector<string>) };
    inline CreatePatchBaselineResponseBodyPatchBaseline& setRejectedPatches(const vector<string> & rejectedPatches) { DARABONBA_PTR_SET_VALUE(rejectedPatches_, rejectedPatches) };
    inline CreatePatchBaselineResponseBodyPatchBaseline& setRejectedPatches(vector<string> && rejectedPatches) { DARABONBA_PTR_SET_RVALUE(rejectedPatches_, rejectedPatches) };


    // rejectedPatchesAction Field Functions 
    bool hasRejectedPatchesAction() const { return this->rejectedPatchesAction_ != nullptr;};
    void deleteRejectedPatchesAction() { this->rejectedPatchesAction_ = nullptr;};
    inline string rejectedPatchesAction() const { DARABONBA_PTR_GET_DEFAULT(rejectedPatchesAction_, "") };
    inline CreatePatchBaselineResponseBodyPatchBaseline& setRejectedPatchesAction(string rejectedPatchesAction) { DARABONBA_PTR_SET_VALUE(rejectedPatchesAction_, rejectedPatchesAction) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreatePatchBaselineResponseBodyPatchBaseline& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // shareType Field Functions 
    bool hasShareType() const { return this->shareType_ != nullptr;};
    void deleteShareType() { this->shareType_ = nullptr;};
    inline string shareType() const { DARABONBA_PTR_GET_DEFAULT(shareType_, "") };
    inline CreatePatchBaselineResponseBodyPatchBaseline& setShareType(string shareType) { DARABONBA_PTR_SET_VALUE(shareType_, shareType) };


    // sources Field Functions 
    bool hasSources() const { return this->sources_ != nullptr;};
    void deleteSources() { this->sources_ = nullptr;};
    inline const vector<string> & sources() const { DARABONBA_PTR_GET_CONST(sources_, vector<string>) };
    inline vector<string> sources() { DARABONBA_PTR_GET(sources_, vector<string>) };
    inline CreatePatchBaselineResponseBodyPatchBaseline& setSources(const vector<string> & sources) { DARABONBA_PTR_SET_VALUE(sources_, sources) };
    inline CreatePatchBaselineResponseBodyPatchBaseline& setSources(vector<string> && sources) { DARABONBA_PTR_SET_RVALUE(sources_, sources) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::CreatePatchBaselineResponseBodyPatchBaselineTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::CreatePatchBaselineResponseBodyPatchBaselineTags>) };
    inline vector<Models::CreatePatchBaselineResponseBodyPatchBaselineTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::CreatePatchBaselineResponseBodyPatchBaselineTags>) };
    inline CreatePatchBaselineResponseBodyPatchBaseline& setTags(const vector<Models::CreatePatchBaselineResponseBodyPatchBaselineTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline CreatePatchBaselineResponseBodyPatchBaseline& setTags(vector<Models::CreatePatchBaselineResponseBodyPatchBaselineTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // updatedBy Field Functions 
    bool hasUpdatedBy() const { return this->updatedBy_ != nullptr;};
    void deleteUpdatedBy() { this->updatedBy_ = nullptr;};
    inline string updatedBy() const { DARABONBA_PTR_GET_DEFAULT(updatedBy_, "") };
    inline CreatePatchBaselineResponseBodyPatchBaseline& setUpdatedBy(string updatedBy) { DARABONBA_PTR_SET_VALUE(updatedBy_, updatedBy) };


    // updatedDate Field Functions 
    bool hasUpdatedDate() const { return this->updatedDate_ != nullptr;};
    void deleteUpdatedDate() { this->updatedDate_ = nullptr;};
    inline string updatedDate() const { DARABONBA_PTR_GET_DEFAULT(updatedDate_, "") };
    inline CreatePatchBaselineResponseBodyPatchBaseline& setUpdatedDate(string updatedDate) { DARABONBA_PTR_SET_VALUE(updatedDate_, updatedDate) };


  protected:
    // The rules of scanning and installing patches for the specified operating system.
    std::shared_ptr<string> approvalRules_ = nullptr;
    // The approved patches.
    std::shared_ptr<vector<string>> approvedPatches_ = nullptr;
    // Indicates whether the approved patch involves updates other than security-related updates.
    std::shared_ptr<bool> approvedPatchesEnableNonSecurity_ = nullptr;
    // The creator of the patch baseline.
    std::shared_ptr<string> createdBy_ = nullptr;
    // The time when the patch baseline was created.
    std::shared_ptr<string> createdDate_ = nullptr;
    // The description of the patch baseline.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the patch baseline.
    std::shared_ptr<string> id_ = nullptr;
    // The name of the patch baseline.
    std::shared_ptr<string> name_ = nullptr;
    // The type of the operating system.
    std::shared_ptr<string> operationSystem_ = nullptr;
    // The rejected patches.
    std::shared_ptr<vector<string>> rejectedPatches_ = nullptr;
    // The action of the rejected patch.
    std::shared_ptr<string> rejectedPatchesAction_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The share type of the patch baseline.
    std::shared_ptr<string> shareType_ = nullptr;
    // The patch source configurations.
    std::shared_ptr<vector<string>> sources_ = nullptr;
    // The tags.
    std::shared_ptr<vector<Models::CreatePatchBaselineResponseBodyPatchBaselineTags>> tags_ = nullptr;
    // The Alibaba Cloud account that last modified the information about the patch baseline.
    std::shared_ptr<string> updatedBy_ = nullptr;
    // The time when the information about the patch baseline was last modified.
    std::shared_ptr<string> updatedDate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
