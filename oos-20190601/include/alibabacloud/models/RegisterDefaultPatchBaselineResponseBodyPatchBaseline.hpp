// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REGISTERDEFAULTPATCHBASELINERESPONSEBODYPATCHBASELINE_HPP_
#define ALIBABACLOUD_MODELS_REGISTERDEFAULTPATCHBASELINERESPONSEBODYPATCHBASELINE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class RegisterDefaultPatchBaselineResponseBodyPatchBaseline : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RegisterDefaultPatchBaselineResponseBodyPatchBaseline& obj) { 
      DARABONBA_PTR_TO_JSON(ApprovalRules, approvalRules_);
      DARABONBA_PTR_TO_JSON(CreatedBy, createdBy_);
      DARABONBA_PTR_TO_JSON(CreatedDate, createdDate_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OperationSystem, operationSystem_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ShareType, shareType_);
      DARABONBA_PTR_TO_JSON(UpdatedBy, updatedBy_);
      DARABONBA_PTR_TO_JSON(UpdatedDate, updatedDate_);
    };
    friend void from_json(const Darabonba::Json& j, RegisterDefaultPatchBaselineResponseBodyPatchBaseline& obj) { 
      DARABONBA_PTR_FROM_JSON(ApprovalRules, approvalRules_);
      DARABONBA_PTR_FROM_JSON(CreatedBy, createdBy_);
      DARABONBA_PTR_FROM_JSON(CreatedDate, createdDate_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OperationSystem, operationSystem_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ShareType, shareType_);
      DARABONBA_PTR_FROM_JSON(UpdatedBy, updatedBy_);
      DARABONBA_PTR_FROM_JSON(UpdatedDate, updatedDate_);
    };
    RegisterDefaultPatchBaselineResponseBodyPatchBaseline() = default ;
    RegisterDefaultPatchBaselineResponseBodyPatchBaseline(const RegisterDefaultPatchBaselineResponseBodyPatchBaseline &) = default ;
    RegisterDefaultPatchBaselineResponseBodyPatchBaseline(RegisterDefaultPatchBaselineResponseBodyPatchBaseline &&) = default ;
    RegisterDefaultPatchBaselineResponseBodyPatchBaseline(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RegisterDefaultPatchBaselineResponseBodyPatchBaseline() = default ;
    RegisterDefaultPatchBaselineResponseBodyPatchBaseline& operator=(const RegisterDefaultPatchBaselineResponseBodyPatchBaseline &) = default ;
    RegisterDefaultPatchBaselineResponseBodyPatchBaseline& operator=(RegisterDefaultPatchBaselineResponseBodyPatchBaseline &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->approvalRules_ == nullptr
        && return this->createdBy_ == nullptr && return this->createdDate_ == nullptr && return this->description_ == nullptr && return this->id_ == nullptr && return this->name_ == nullptr
        && return this->operationSystem_ == nullptr && return this->resourceGroupId_ == nullptr && return this->shareType_ == nullptr && return this->updatedBy_ == nullptr && return this->updatedDate_ == nullptr; };
    // approvalRules Field Functions 
    bool hasApprovalRules() const { return this->approvalRules_ != nullptr;};
    void deleteApprovalRules() { this->approvalRules_ = nullptr;};
    inline string approvalRules() const { DARABONBA_PTR_GET_DEFAULT(approvalRules_, "") };
    inline RegisterDefaultPatchBaselineResponseBodyPatchBaseline& setApprovalRules(string approvalRules) { DARABONBA_PTR_SET_VALUE(approvalRules_, approvalRules) };


    // createdBy Field Functions 
    bool hasCreatedBy() const { return this->createdBy_ != nullptr;};
    void deleteCreatedBy() { this->createdBy_ = nullptr;};
    inline string createdBy() const { DARABONBA_PTR_GET_DEFAULT(createdBy_, "") };
    inline RegisterDefaultPatchBaselineResponseBodyPatchBaseline& setCreatedBy(string createdBy) { DARABONBA_PTR_SET_VALUE(createdBy_, createdBy) };


    // createdDate Field Functions 
    bool hasCreatedDate() const { return this->createdDate_ != nullptr;};
    void deleteCreatedDate() { this->createdDate_ = nullptr;};
    inline string createdDate() const { DARABONBA_PTR_GET_DEFAULT(createdDate_, "") };
    inline RegisterDefaultPatchBaselineResponseBodyPatchBaseline& setCreatedDate(string createdDate) { DARABONBA_PTR_SET_VALUE(createdDate_, createdDate) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline RegisterDefaultPatchBaselineResponseBodyPatchBaseline& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline RegisterDefaultPatchBaselineResponseBodyPatchBaseline& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline RegisterDefaultPatchBaselineResponseBodyPatchBaseline& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // operationSystem Field Functions 
    bool hasOperationSystem() const { return this->operationSystem_ != nullptr;};
    void deleteOperationSystem() { this->operationSystem_ = nullptr;};
    inline string operationSystem() const { DARABONBA_PTR_GET_DEFAULT(operationSystem_, "") };
    inline RegisterDefaultPatchBaselineResponseBodyPatchBaseline& setOperationSystem(string operationSystem) { DARABONBA_PTR_SET_VALUE(operationSystem_, operationSystem) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline RegisterDefaultPatchBaselineResponseBodyPatchBaseline& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // shareType Field Functions 
    bool hasShareType() const { return this->shareType_ != nullptr;};
    void deleteShareType() { this->shareType_ = nullptr;};
    inline string shareType() const { DARABONBA_PTR_GET_DEFAULT(shareType_, "") };
    inline RegisterDefaultPatchBaselineResponseBodyPatchBaseline& setShareType(string shareType) { DARABONBA_PTR_SET_VALUE(shareType_, shareType) };


    // updatedBy Field Functions 
    bool hasUpdatedBy() const { return this->updatedBy_ != nullptr;};
    void deleteUpdatedBy() { this->updatedBy_ = nullptr;};
    inline string updatedBy() const { DARABONBA_PTR_GET_DEFAULT(updatedBy_, "") };
    inline RegisterDefaultPatchBaselineResponseBodyPatchBaseline& setUpdatedBy(string updatedBy) { DARABONBA_PTR_SET_VALUE(updatedBy_, updatedBy) };


    // updatedDate Field Functions 
    bool hasUpdatedDate() const { return this->updatedDate_ != nullptr;};
    void deleteUpdatedDate() { this->updatedDate_ = nullptr;};
    inline string updatedDate() const { DARABONBA_PTR_GET_DEFAULT(updatedDate_, "") };
    inline RegisterDefaultPatchBaselineResponseBodyPatchBaseline& setUpdatedDate(string updatedDate) { DARABONBA_PTR_SET_VALUE(updatedDate_, updatedDate) };


  protected:
    // The rules of scanning and installing patches for the specified operating system.
    std::shared_ptr<string> approvalRules_ = nullptr;
    // The user who created the patch baseline.
    std::shared_ptr<string> createdBy_ = nullptr;
    // The time when the patch baseline was created.
    std::shared_ptr<string> createdDate_ = nullptr;
    // The description of the patch baseline.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the patch baseline.
    std::shared_ptr<string> id_ = nullptr;
    // The name of the patch baseline.
    std::shared_ptr<string> name_ = nullptr;
    // The operating system.
    std::shared_ptr<string> operationSystem_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The share type of the patch baseline.
    std::shared_ptr<string> shareType_ = nullptr;
    // The user who last updated the patch baseline.
    std::shared_ptr<string> updatedBy_ = nullptr;
    // The time when the patch baseline was last updated.
    std::shared_ptr<string> updatedDate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
