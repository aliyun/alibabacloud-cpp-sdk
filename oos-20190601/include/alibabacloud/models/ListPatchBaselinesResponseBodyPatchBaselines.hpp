// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPATCHBASELINESRESPONSEBODYPATCHBASELINES_HPP_
#define ALIBABACLOUD_MODELS_LISTPATCHBASELINESRESPONSEBODYPATCHBASELINES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListPatchBaselinesResponseBodyPatchBaselinesTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class ListPatchBaselinesResponseBodyPatchBaselines : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPatchBaselinesResponseBodyPatchBaselines& obj) { 
      DARABONBA_PTR_TO_JSON(ApprovedPatches, approvedPatches_);
      DARABONBA_PTR_TO_JSON(ApprovedPatchesEnableNonSecurity, approvedPatchesEnableNonSecurity_);
      DARABONBA_PTR_TO_JSON(CreatedBy, createdBy_);
      DARABONBA_PTR_TO_JSON(CreatedDate, createdDate_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OperationSystem, operationSystem_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ShareType, shareType_);
      DARABONBA_PTR_TO_JSON(Sources, sources_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(UpdatedBy, updatedBy_);
      DARABONBA_PTR_TO_JSON(UpdatedDate, updatedDate_);
    };
    friend void from_json(const Darabonba::Json& j, ListPatchBaselinesResponseBodyPatchBaselines& obj) { 
      DARABONBA_PTR_FROM_JSON(ApprovedPatches, approvedPatches_);
      DARABONBA_PTR_FROM_JSON(ApprovedPatchesEnableNonSecurity, approvedPatchesEnableNonSecurity_);
      DARABONBA_PTR_FROM_JSON(CreatedBy, createdBy_);
      DARABONBA_PTR_FROM_JSON(CreatedDate, createdDate_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OperationSystem, operationSystem_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ShareType, shareType_);
      DARABONBA_PTR_FROM_JSON(Sources, sources_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(UpdatedBy, updatedBy_);
      DARABONBA_PTR_FROM_JSON(UpdatedDate, updatedDate_);
    };
    ListPatchBaselinesResponseBodyPatchBaselines() = default ;
    ListPatchBaselinesResponseBodyPatchBaselines(const ListPatchBaselinesResponseBodyPatchBaselines &) = default ;
    ListPatchBaselinesResponseBodyPatchBaselines(ListPatchBaselinesResponseBodyPatchBaselines &&) = default ;
    ListPatchBaselinesResponseBodyPatchBaselines(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPatchBaselinesResponseBodyPatchBaselines() = default ;
    ListPatchBaselinesResponseBodyPatchBaselines& operator=(const ListPatchBaselinesResponseBodyPatchBaselines &) = default ;
    ListPatchBaselinesResponseBodyPatchBaselines& operator=(ListPatchBaselinesResponseBodyPatchBaselines &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->approvedPatches_ == nullptr
        && return this->approvedPatchesEnableNonSecurity_ == nullptr && return this->createdBy_ == nullptr && return this->createdDate_ == nullptr && return this->description_ == nullptr && return this->id_ == nullptr
        && return this->isDefault_ == nullptr && return this->name_ == nullptr && return this->operationSystem_ == nullptr && return this->resourceGroupId_ == nullptr && return this->shareType_ == nullptr
        && return this->sources_ == nullptr && return this->tags_ == nullptr && return this->updatedBy_ == nullptr && return this->updatedDate_ == nullptr; };
    // approvedPatches Field Functions 
    bool hasApprovedPatches() const { return this->approvedPatches_ != nullptr;};
    void deleteApprovedPatches() { this->approvedPatches_ = nullptr;};
    inline const vector<string> & approvedPatches() const { DARABONBA_PTR_GET_CONST(approvedPatches_, vector<string>) };
    inline vector<string> approvedPatches() { DARABONBA_PTR_GET(approvedPatches_, vector<string>) };
    inline ListPatchBaselinesResponseBodyPatchBaselines& setApprovedPatches(const vector<string> & approvedPatches) { DARABONBA_PTR_SET_VALUE(approvedPatches_, approvedPatches) };
    inline ListPatchBaselinesResponseBodyPatchBaselines& setApprovedPatches(vector<string> && approvedPatches) { DARABONBA_PTR_SET_RVALUE(approvedPatches_, approvedPatches) };


    // approvedPatchesEnableNonSecurity Field Functions 
    bool hasApprovedPatchesEnableNonSecurity() const { return this->approvedPatchesEnableNonSecurity_ != nullptr;};
    void deleteApprovedPatchesEnableNonSecurity() { this->approvedPatchesEnableNonSecurity_ = nullptr;};
    inline bool approvedPatchesEnableNonSecurity() const { DARABONBA_PTR_GET_DEFAULT(approvedPatchesEnableNonSecurity_, false) };
    inline ListPatchBaselinesResponseBodyPatchBaselines& setApprovedPatchesEnableNonSecurity(bool approvedPatchesEnableNonSecurity) { DARABONBA_PTR_SET_VALUE(approvedPatchesEnableNonSecurity_, approvedPatchesEnableNonSecurity) };


    // createdBy Field Functions 
    bool hasCreatedBy() const { return this->createdBy_ != nullptr;};
    void deleteCreatedBy() { this->createdBy_ = nullptr;};
    inline string createdBy() const { DARABONBA_PTR_GET_DEFAULT(createdBy_, "") };
    inline ListPatchBaselinesResponseBodyPatchBaselines& setCreatedBy(string createdBy) { DARABONBA_PTR_SET_VALUE(createdBy_, createdBy) };


    // createdDate Field Functions 
    bool hasCreatedDate() const { return this->createdDate_ != nullptr;};
    void deleteCreatedDate() { this->createdDate_ = nullptr;};
    inline string createdDate() const { DARABONBA_PTR_GET_DEFAULT(createdDate_, "") };
    inline ListPatchBaselinesResponseBodyPatchBaselines& setCreatedDate(string createdDate) { DARABONBA_PTR_SET_VALUE(createdDate_, createdDate) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListPatchBaselinesResponseBodyPatchBaselines& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ListPatchBaselinesResponseBodyPatchBaselines& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // isDefault Field Functions 
    bool hasIsDefault() const { return this->isDefault_ != nullptr;};
    void deleteIsDefault() { this->isDefault_ = nullptr;};
    inline bool isDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
    inline ListPatchBaselinesResponseBodyPatchBaselines& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListPatchBaselinesResponseBodyPatchBaselines& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // operationSystem Field Functions 
    bool hasOperationSystem() const { return this->operationSystem_ != nullptr;};
    void deleteOperationSystem() { this->operationSystem_ = nullptr;};
    inline string operationSystem() const { DARABONBA_PTR_GET_DEFAULT(operationSystem_, "") };
    inline ListPatchBaselinesResponseBodyPatchBaselines& setOperationSystem(string operationSystem) { DARABONBA_PTR_SET_VALUE(operationSystem_, operationSystem) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListPatchBaselinesResponseBodyPatchBaselines& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // shareType Field Functions 
    bool hasShareType() const { return this->shareType_ != nullptr;};
    void deleteShareType() { this->shareType_ = nullptr;};
    inline string shareType() const { DARABONBA_PTR_GET_DEFAULT(shareType_, "") };
    inline ListPatchBaselinesResponseBodyPatchBaselines& setShareType(string shareType) { DARABONBA_PTR_SET_VALUE(shareType_, shareType) };


    // sources Field Functions 
    bool hasSources() const { return this->sources_ != nullptr;};
    void deleteSources() { this->sources_ = nullptr;};
    inline const vector<string> & sources() const { DARABONBA_PTR_GET_CONST(sources_, vector<string>) };
    inline vector<string> sources() { DARABONBA_PTR_GET(sources_, vector<string>) };
    inline ListPatchBaselinesResponseBodyPatchBaselines& setSources(const vector<string> & sources) { DARABONBA_PTR_SET_VALUE(sources_, sources) };
    inline ListPatchBaselinesResponseBodyPatchBaselines& setSources(vector<string> && sources) { DARABONBA_PTR_SET_RVALUE(sources_, sources) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::ListPatchBaselinesResponseBodyPatchBaselinesTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::ListPatchBaselinesResponseBodyPatchBaselinesTags>) };
    inline vector<Models::ListPatchBaselinesResponseBodyPatchBaselinesTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::ListPatchBaselinesResponseBodyPatchBaselinesTags>) };
    inline ListPatchBaselinesResponseBodyPatchBaselines& setTags(const vector<Models::ListPatchBaselinesResponseBodyPatchBaselinesTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListPatchBaselinesResponseBodyPatchBaselines& setTags(vector<Models::ListPatchBaselinesResponseBodyPatchBaselinesTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // updatedBy Field Functions 
    bool hasUpdatedBy() const { return this->updatedBy_ != nullptr;};
    void deleteUpdatedBy() { this->updatedBy_ = nullptr;};
    inline string updatedBy() const { DARABONBA_PTR_GET_DEFAULT(updatedBy_, "") };
    inline ListPatchBaselinesResponseBodyPatchBaselines& setUpdatedBy(string updatedBy) { DARABONBA_PTR_SET_VALUE(updatedBy_, updatedBy) };


    // updatedDate Field Functions 
    bool hasUpdatedDate() const { return this->updatedDate_ != nullptr;};
    void deleteUpdatedDate() { this->updatedDate_ = nullptr;};
    inline string updatedDate() const { DARABONBA_PTR_GET_DEFAULT(updatedDate_, "") };
    inline ListPatchBaselinesResponseBodyPatchBaselines& setUpdatedDate(string updatedDate) { DARABONBA_PTR_SET_VALUE(updatedDate_, updatedDate) };


  protected:
    // The approved patches.
    std::shared_ptr<vector<string>> approvedPatches_ = nullptr;
    // Indicates whether the approved patch involves updates other than security-related updates.
    std::shared_ptr<bool> approvedPatchesEnableNonSecurity_ = nullptr;
    // The user who created the patch baseline.
    std::shared_ptr<string> createdBy_ = nullptr;
    // The time when the patch baseline was created.
    std::shared_ptr<string> createdDate_ = nullptr;
    // The description of the patch baseline.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the patch baseline.
    std::shared_ptr<string> id_ = nullptr;
    // Indicates whether the patch baseline is set as the default patch baseline.
    std::shared_ptr<bool> isDefault_ = nullptr;
    // The name of the patch baseline.
    std::shared_ptr<string> name_ = nullptr;
    // The type of the operating system.
    std::shared_ptr<string> operationSystem_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The share type of the patch baseline.
    std::shared_ptr<string> shareType_ = nullptr;
    // The configurations of patch sources.
    std::shared_ptr<vector<string>> sources_ = nullptr;
    // The tags of the patch baseline.
    std::shared_ptr<vector<Models::ListPatchBaselinesResponseBodyPatchBaselinesTags>> tags_ = nullptr;
    // The user who last updated the patch baseline.
    std::shared_ptr<string> updatedBy_ = nullptr;
    // The time when the patch baseline was updated.
    std::shared_ptr<string> updatedDate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
