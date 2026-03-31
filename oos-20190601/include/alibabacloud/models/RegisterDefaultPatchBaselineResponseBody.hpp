// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REGISTERDEFAULTPATCHBASELINERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_REGISTERDEFAULTPATCHBASELINERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class RegisterDefaultPatchBaselineResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RegisterDefaultPatchBaselineResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PatchBaseline, patchBaseline_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, RegisterDefaultPatchBaselineResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PatchBaseline, patchBaseline_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    RegisterDefaultPatchBaselineResponseBody() = default ;
    RegisterDefaultPatchBaselineResponseBody(const RegisterDefaultPatchBaselineResponseBody &) = default ;
    RegisterDefaultPatchBaselineResponseBody(RegisterDefaultPatchBaselineResponseBody &&) = default ;
    RegisterDefaultPatchBaselineResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RegisterDefaultPatchBaselineResponseBody() = default ;
    RegisterDefaultPatchBaselineResponseBody& operator=(const RegisterDefaultPatchBaselineResponseBody &) = default ;
    RegisterDefaultPatchBaselineResponseBody& operator=(RegisterDefaultPatchBaselineResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PatchBaseline : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PatchBaseline& obj) { 
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
      friend void from_json(const Darabonba::Json& j, PatchBaseline& obj) { 
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
      PatchBaseline() = default ;
      PatchBaseline(const PatchBaseline &) = default ;
      PatchBaseline(PatchBaseline &&) = default ;
      PatchBaseline(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PatchBaseline() = default ;
      PatchBaseline& operator=(const PatchBaseline &) = default ;
      PatchBaseline& operator=(PatchBaseline &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->approvalRules_ == nullptr
        && this->createdBy_ == nullptr && this->createdDate_ == nullptr && this->description_ == nullptr && this->id_ == nullptr && this->name_ == nullptr
        && this->operationSystem_ == nullptr && this->resourceGroupId_ == nullptr && this->shareType_ == nullptr && this->updatedBy_ == nullptr && this->updatedDate_ == nullptr; };
      // approvalRules Field Functions 
      bool hasApprovalRules() const { return this->approvalRules_ != nullptr;};
      void deleteApprovalRules() { this->approvalRules_ = nullptr;};
      inline string getApprovalRules() const { DARABONBA_PTR_GET_DEFAULT(approvalRules_, "") };
      inline PatchBaseline& setApprovalRules(string approvalRules) { DARABONBA_PTR_SET_VALUE(approvalRules_, approvalRules) };


      // createdBy Field Functions 
      bool hasCreatedBy() const { return this->createdBy_ != nullptr;};
      void deleteCreatedBy() { this->createdBy_ = nullptr;};
      inline string getCreatedBy() const { DARABONBA_PTR_GET_DEFAULT(createdBy_, "") };
      inline PatchBaseline& setCreatedBy(string createdBy) { DARABONBA_PTR_SET_VALUE(createdBy_, createdBy) };


      // createdDate Field Functions 
      bool hasCreatedDate() const { return this->createdDate_ != nullptr;};
      void deleteCreatedDate() { this->createdDate_ = nullptr;};
      inline string getCreatedDate() const { DARABONBA_PTR_GET_DEFAULT(createdDate_, "") };
      inline PatchBaseline& setCreatedDate(string createdDate) { DARABONBA_PTR_SET_VALUE(createdDate_, createdDate) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline PatchBaseline& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline PatchBaseline& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline PatchBaseline& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // operationSystem Field Functions 
      bool hasOperationSystem() const { return this->operationSystem_ != nullptr;};
      void deleteOperationSystem() { this->operationSystem_ = nullptr;};
      inline string getOperationSystem() const { DARABONBA_PTR_GET_DEFAULT(operationSystem_, "") };
      inline PatchBaseline& setOperationSystem(string operationSystem) { DARABONBA_PTR_SET_VALUE(operationSystem_, operationSystem) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline PatchBaseline& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // shareType Field Functions 
      bool hasShareType() const { return this->shareType_ != nullptr;};
      void deleteShareType() { this->shareType_ = nullptr;};
      inline string getShareType() const { DARABONBA_PTR_GET_DEFAULT(shareType_, "") };
      inline PatchBaseline& setShareType(string shareType) { DARABONBA_PTR_SET_VALUE(shareType_, shareType) };


      // updatedBy Field Functions 
      bool hasUpdatedBy() const { return this->updatedBy_ != nullptr;};
      void deleteUpdatedBy() { this->updatedBy_ = nullptr;};
      inline string getUpdatedBy() const { DARABONBA_PTR_GET_DEFAULT(updatedBy_, "") };
      inline PatchBaseline& setUpdatedBy(string updatedBy) { DARABONBA_PTR_SET_VALUE(updatedBy_, updatedBy) };


      // updatedDate Field Functions 
      bool hasUpdatedDate() const { return this->updatedDate_ != nullptr;};
      void deleteUpdatedDate() { this->updatedDate_ = nullptr;};
      inline string getUpdatedDate() const { DARABONBA_PTR_GET_DEFAULT(updatedDate_, "") };
      inline PatchBaseline& setUpdatedDate(string updatedDate) { DARABONBA_PTR_SET_VALUE(updatedDate_, updatedDate) };


    protected:
      // The rules of scanning and installing patches for the specified operating system.
      shared_ptr<string> approvalRules_ {};
      // The user who created the patch baseline.
      shared_ptr<string> createdBy_ {};
      // The time when the patch baseline was created.
      shared_ptr<string> createdDate_ {};
      // The description of the patch baseline.
      shared_ptr<string> description_ {};
      // The ID of the patch baseline.
      shared_ptr<string> id_ {};
      // The name of the patch baseline.
      shared_ptr<string> name_ {};
      // The operating system.
      shared_ptr<string> operationSystem_ {};
      // The ID of the resource group.
      shared_ptr<string> resourceGroupId_ {};
      // The share type of the patch baseline.
      shared_ptr<string> shareType_ {};
      // The user who last updated the patch baseline.
      shared_ptr<string> updatedBy_ {};
      // The time when the patch baseline was last updated.
      shared_ptr<string> updatedDate_ {};
    };

    virtual bool empty() const override { return this->patchBaseline_ == nullptr
        && this->requestId_ == nullptr; };
    // patchBaseline Field Functions 
    bool hasPatchBaseline() const { return this->patchBaseline_ != nullptr;};
    void deletePatchBaseline() { this->patchBaseline_ = nullptr;};
    inline const RegisterDefaultPatchBaselineResponseBody::PatchBaseline & getPatchBaseline() const { DARABONBA_PTR_GET_CONST(patchBaseline_, RegisterDefaultPatchBaselineResponseBody::PatchBaseline) };
    inline RegisterDefaultPatchBaselineResponseBody::PatchBaseline getPatchBaseline() { DARABONBA_PTR_GET(patchBaseline_, RegisterDefaultPatchBaselineResponseBody::PatchBaseline) };
    inline RegisterDefaultPatchBaselineResponseBody& setPatchBaseline(const RegisterDefaultPatchBaselineResponseBody::PatchBaseline & patchBaseline) { DARABONBA_PTR_SET_VALUE(patchBaseline_, patchBaseline) };
    inline RegisterDefaultPatchBaselineResponseBody& setPatchBaseline(RegisterDefaultPatchBaselineResponseBody::PatchBaseline && patchBaseline) { DARABONBA_PTR_SET_RVALUE(patchBaseline_, patchBaseline) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RegisterDefaultPatchBaselineResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the patch baseline.
    shared_ptr<RegisterDefaultPatchBaselineResponseBody::PatchBaseline> patchBaseline_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
