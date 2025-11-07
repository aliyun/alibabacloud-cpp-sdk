// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPATCHBASELINESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPATCHBASELINESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class UpdatePatchBaselineShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePatchBaselineShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApprovalRules, approvalRules_);
      DARABONBA_PTR_TO_JSON(ApprovedPatches, approvedPatchesShrink_);
      DARABONBA_PTR_TO_JSON(ApprovedPatchesEnableNonSecurity, approvedPatchesEnableNonSecurity_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RejectedPatches, rejectedPatchesShrink_);
      DARABONBA_PTR_TO_JSON(RejectedPatchesAction, rejectedPatchesAction_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Sources, sourcesShrink_);
      DARABONBA_PTR_TO_JSON(Tags, tagsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePatchBaselineShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApprovalRules, approvalRules_);
      DARABONBA_PTR_FROM_JSON(ApprovedPatches, approvedPatchesShrink_);
      DARABONBA_PTR_FROM_JSON(ApprovedPatchesEnableNonSecurity, approvedPatchesEnableNonSecurity_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RejectedPatches, rejectedPatchesShrink_);
      DARABONBA_PTR_FROM_JSON(RejectedPatchesAction, rejectedPatchesAction_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Sources, sourcesShrink_);
      DARABONBA_PTR_FROM_JSON(Tags, tagsShrink_);
    };
    UpdatePatchBaselineShrinkRequest() = default ;
    UpdatePatchBaselineShrinkRequest(const UpdatePatchBaselineShrinkRequest &) = default ;
    UpdatePatchBaselineShrinkRequest(UpdatePatchBaselineShrinkRequest &&) = default ;
    UpdatePatchBaselineShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePatchBaselineShrinkRequest() = default ;
    UpdatePatchBaselineShrinkRequest& operator=(const UpdatePatchBaselineShrinkRequest &) = default ;
    UpdatePatchBaselineShrinkRequest& operator=(UpdatePatchBaselineShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->approvalRules_ == nullptr
        && return this->approvedPatchesShrink_ == nullptr && return this->approvedPatchesEnableNonSecurity_ == nullptr && return this->clientToken_ == nullptr && return this->description_ == nullptr && return this->name_ == nullptr
        && return this->regionId_ == nullptr && return this->rejectedPatchesShrink_ == nullptr && return this->rejectedPatchesAction_ == nullptr && return this->resourceGroupId_ == nullptr && return this->sourcesShrink_ == nullptr
        && return this->tagsShrink_ == nullptr; };
    // approvalRules Field Functions 
    bool hasApprovalRules() const { return this->approvalRules_ != nullptr;};
    void deleteApprovalRules() { this->approvalRules_ = nullptr;};
    inline string approvalRules() const { DARABONBA_PTR_GET_DEFAULT(approvalRules_, "") };
    inline UpdatePatchBaselineShrinkRequest& setApprovalRules(string approvalRules) { DARABONBA_PTR_SET_VALUE(approvalRules_, approvalRules) };


    // approvedPatchesShrink Field Functions 
    bool hasApprovedPatchesShrink() const { return this->approvedPatchesShrink_ != nullptr;};
    void deleteApprovedPatchesShrink() { this->approvedPatchesShrink_ = nullptr;};
    inline string approvedPatchesShrink() const { DARABONBA_PTR_GET_DEFAULT(approvedPatchesShrink_, "") };
    inline UpdatePatchBaselineShrinkRequest& setApprovedPatchesShrink(string approvedPatchesShrink) { DARABONBA_PTR_SET_VALUE(approvedPatchesShrink_, approvedPatchesShrink) };


    // approvedPatchesEnableNonSecurity Field Functions 
    bool hasApprovedPatchesEnableNonSecurity() const { return this->approvedPatchesEnableNonSecurity_ != nullptr;};
    void deleteApprovedPatchesEnableNonSecurity() { this->approvedPatchesEnableNonSecurity_ = nullptr;};
    inline bool approvedPatchesEnableNonSecurity() const { DARABONBA_PTR_GET_DEFAULT(approvedPatchesEnableNonSecurity_, false) };
    inline UpdatePatchBaselineShrinkRequest& setApprovedPatchesEnableNonSecurity(bool approvedPatchesEnableNonSecurity) { DARABONBA_PTR_SET_VALUE(approvedPatchesEnableNonSecurity_, approvedPatchesEnableNonSecurity) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdatePatchBaselineShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdatePatchBaselineShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdatePatchBaselineShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdatePatchBaselineShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // rejectedPatchesShrink Field Functions 
    bool hasRejectedPatchesShrink() const { return this->rejectedPatchesShrink_ != nullptr;};
    void deleteRejectedPatchesShrink() { this->rejectedPatchesShrink_ = nullptr;};
    inline string rejectedPatchesShrink() const { DARABONBA_PTR_GET_DEFAULT(rejectedPatchesShrink_, "") };
    inline UpdatePatchBaselineShrinkRequest& setRejectedPatchesShrink(string rejectedPatchesShrink) { DARABONBA_PTR_SET_VALUE(rejectedPatchesShrink_, rejectedPatchesShrink) };


    // rejectedPatchesAction Field Functions 
    bool hasRejectedPatchesAction() const { return this->rejectedPatchesAction_ != nullptr;};
    void deleteRejectedPatchesAction() { this->rejectedPatchesAction_ = nullptr;};
    inline string rejectedPatchesAction() const { DARABONBA_PTR_GET_DEFAULT(rejectedPatchesAction_, "") };
    inline UpdatePatchBaselineShrinkRequest& setRejectedPatchesAction(string rejectedPatchesAction) { DARABONBA_PTR_SET_VALUE(rejectedPatchesAction_, rejectedPatchesAction) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline UpdatePatchBaselineShrinkRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // sourcesShrink Field Functions 
    bool hasSourcesShrink() const { return this->sourcesShrink_ != nullptr;};
    void deleteSourcesShrink() { this->sourcesShrink_ = nullptr;};
    inline string sourcesShrink() const { DARABONBA_PTR_GET_DEFAULT(sourcesShrink_, "") };
    inline UpdatePatchBaselineShrinkRequest& setSourcesShrink(string sourcesShrink) { DARABONBA_PTR_SET_VALUE(sourcesShrink_, sourcesShrink) };


    // tagsShrink Field Functions 
    bool hasTagsShrink() const { return this->tagsShrink_ != nullptr;};
    void deleteTagsShrink() { this->tagsShrink_ = nullptr;};
    inline string tagsShrink() const { DARABONBA_PTR_GET_DEFAULT(tagsShrink_, "") };
    inline UpdatePatchBaselineShrinkRequest& setTagsShrink(string tagsShrink) { DARABONBA_PTR_SET_VALUE(tagsShrink_, tagsShrink) };


  protected:
    // The rules of scanning and installing patches for the specified operating system.
    std::shared_ptr<string> approvalRules_ = nullptr;
    // The approved patches.
    std::shared_ptr<string> approvedPatchesShrink_ = nullptr;
    // Indicates whether the approved patch involves updates other than security-related updates.
    std::shared_ptr<bool> approvedPatchesEnableNonSecurity_ = nullptr;
    // The client token that is used to ensure the idempotence of the request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The description of the patch baseline.
    std::shared_ptr<string> description_ = nullptr;
    // The name of the patch baseline.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the region.
    std::shared_ptr<string> regionId_ = nullptr;
    // The rejected patches.
    std::shared_ptr<string> rejectedPatchesShrink_ = nullptr;
    // The action of the rejected patch.
    std::shared_ptr<string> rejectedPatchesAction_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The patch source configurations.
    std::shared_ptr<string> sourcesShrink_ = nullptr;
    // The tags.
    std::shared_ptr<string> tagsShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
