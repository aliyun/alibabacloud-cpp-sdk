// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPATCHBASELINERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEPATCHBASELINERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class CreatePatchBaselineResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePatchBaselineResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PatchBaseline, patchBaseline_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePatchBaselineResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PatchBaseline, patchBaseline_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreatePatchBaselineResponseBody() = default ;
    CreatePatchBaselineResponseBody(const CreatePatchBaselineResponseBody &) = default ;
    CreatePatchBaselineResponseBody(CreatePatchBaselineResponseBody &&) = default ;
    CreatePatchBaselineResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePatchBaselineResponseBody() = default ;
    CreatePatchBaselineResponseBody& operator=(const CreatePatchBaselineResponseBody &) = default ;
    CreatePatchBaselineResponseBody& operator=(CreatePatchBaselineResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PatchBaseline : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PatchBaseline& obj) { 
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
      friend void from_json(const Darabonba::Json& j, PatchBaseline& obj) { 
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
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
          DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
          DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
        };
        Tags() = default ;
        Tags(const Tags &) = default ;
        Tags(Tags &&) = default ;
        Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tags() = default ;
        Tags& operator=(const Tags &) = default ;
        Tags& operator=(Tags &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->tagKey_ == nullptr
        && this->tagValue_ == nullptr; };
        // tagKey Field Functions 
        bool hasTagKey() const { return this->tagKey_ != nullptr;};
        void deleteTagKey() { this->tagKey_ = nullptr;};
        inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
        inline Tags& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


        // tagValue Field Functions 
        bool hasTagValue() const { return this->tagValue_ != nullptr;};
        void deleteTagValue() { this->tagValue_ = nullptr;};
        inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
        inline Tags& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


      protected:
        // The key of the tag.
        shared_ptr<string> tagKey_ {};
        // The value of the tag.
        shared_ptr<string> tagValue_ {};
      };

      virtual bool empty() const override { return this->approvalRules_ == nullptr
        && this->approvedPatches_ == nullptr && this->approvedPatchesEnableNonSecurity_ == nullptr && this->createdBy_ == nullptr && this->createdDate_ == nullptr && this->description_ == nullptr
        && this->id_ == nullptr && this->name_ == nullptr && this->operationSystem_ == nullptr && this->rejectedPatches_ == nullptr && this->rejectedPatchesAction_ == nullptr
        && this->resourceGroupId_ == nullptr && this->shareType_ == nullptr && this->sources_ == nullptr && this->tags_ == nullptr && this->updatedBy_ == nullptr
        && this->updatedDate_ == nullptr; };
      // approvalRules Field Functions 
      bool hasApprovalRules() const { return this->approvalRules_ != nullptr;};
      void deleteApprovalRules() { this->approvalRules_ = nullptr;};
      inline string getApprovalRules() const { DARABONBA_PTR_GET_DEFAULT(approvalRules_, "") };
      inline PatchBaseline& setApprovalRules(string approvalRules) { DARABONBA_PTR_SET_VALUE(approvalRules_, approvalRules) };


      // approvedPatches Field Functions 
      bool hasApprovedPatches() const { return this->approvedPatches_ != nullptr;};
      void deleteApprovedPatches() { this->approvedPatches_ = nullptr;};
      inline const vector<string> & getApprovedPatches() const { DARABONBA_PTR_GET_CONST(approvedPatches_, vector<string>) };
      inline vector<string> getApprovedPatches() { DARABONBA_PTR_GET(approvedPatches_, vector<string>) };
      inline PatchBaseline& setApprovedPatches(const vector<string> & approvedPatches) { DARABONBA_PTR_SET_VALUE(approvedPatches_, approvedPatches) };
      inline PatchBaseline& setApprovedPatches(vector<string> && approvedPatches) { DARABONBA_PTR_SET_RVALUE(approvedPatches_, approvedPatches) };


      // approvedPatchesEnableNonSecurity Field Functions 
      bool hasApprovedPatchesEnableNonSecurity() const { return this->approvedPatchesEnableNonSecurity_ != nullptr;};
      void deleteApprovedPatchesEnableNonSecurity() { this->approvedPatchesEnableNonSecurity_ = nullptr;};
      inline bool getApprovedPatchesEnableNonSecurity() const { DARABONBA_PTR_GET_DEFAULT(approvedPatchesEnableNonSecurity_, false) };
      inline PatchBaseline& setApprovedPatchesEnableNonSecurity(bool approvedPatchesEnableNonSecurity) { DARABONBA_PTR_SET_VALUE(approvedPatchesEnableNonSecurity_, approvedPatchesEnableNonSecurity) };


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


      // rejectedPatches Field Functions 
      bool hasRejectedPatches() const { return this->rejectedPatches_ != nullptr;};
      void deleteRejectedPatches() { this->rejectedPatches_ = nullptr;};
      inline const vector<string> & getRejectedPatches() const { DARABONBA_PTR_GET_CONST(rejectedPatches_, vector<string>) };
      inline vector<string> getRejectedPatches() { DARABONBA_PTR_GET(rejectedPatches_, vector<string>) };
      inline PatchBaseline& setRejectedPatches(const vector<string> & rejectedPatches) { DARABONBA_PTR_SET_VALUE(rejectedPatches_, rejectedPatches) };
      inline PatchBaseline& setRejectedPatches(vector<string> && rejectedPatches) { DARABONBA_PTR_SET_RVALUE(rejectedPatches_, rejectedPatches) };


      // rejectedPatchesAction Field Functions 
      bool hasRejectedPatchesAction() const { return this->rejectedPatchesAction_ != nullptr;};
      void deleteRejectedPatchesAction() { this->rejectedPatchesAction_ = nullptr;};
      inline string getRejectedPatchesAction() const { DARABONBA_PTR_GET_DEFAULT(rejectedPatchesAction_, "") };
      inline PatchBaseline& setRejectedPatchesAction(string rejectedPatchesAction) { DARABONBA_PTR_SET_VALUE(rejectedPatchesAction_, rejectedPatchesAction) };


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


      // sources Field Functions 
      bool hasSources() const { return this->sources_ != nullptr;};
      void deleteSources() { this->sources_ = nullptr;};
      inline const vector<string> & getSources() const { DARABONBA_PTR_GET_CONST(sources_, vector<string>) };
      inline vector<string> getSources() { DARABONBA_PTR_GET(sources_, vector<string>) };
      inline PatchBaseline& setSources(const vector<string> & sources) { DARABONBA_PTR_SET_VALUE(sources_, sources) };
      inline PatchBaseline& setSources(vector<string> && sources) { DARABONBA_PTR_SET_RVALUE(sources_, sources) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<PatchBaseline::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<PatchBaseline::Tags>) };
      inline vector<PatchBaseline::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<PatchBaseline::Tags>) };
      inline PatchBaseline& setTags(const vector<PatchBaseline::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline PatchBaseline& setTags(vector<PatchBaseline::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


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
      // The approved patches.
      shared_ptr<vector<string>> approvedPatches_ {};
      // Indicates whether the approved patch involves updates other than security-related updates.
      shared_ptr<bool> approvedPatchesEnableNonSecurity_ {};
      // The creator of the patch baseline.
      shared_ptr<string> createdBy_ {};
      // The time when the patch baseline was created.
      shared_ptr<string> createdDate_ {};
      // The description of the patch baseline.
      shared_ptr<string> description_ {};
      // The ID of the patch baseline.
      shared_ptr<string> id_ {};
      // The name of the patch baseline.
      shared_ptr<string> name_ {};
      // The type of the operating system.
      shared_ptr<string> operationSystem_ {};
      // The rejected patches.
      shared_ptr<vector<string>> rejectedPatches_ {};
      // The action of the rejected patch.
      shared_ptr<string> rejectedPatchesAction_ {};
      // The ID of the resource group.
      shared_ptr<string> resourceGroupId_ {};
      // The share type of the patch baseline.
      shared_ptr<string> shareType_ {};
      // The patch source configurations.
      shared_ptr<vector<string>> sources_ {};
      // The tags.
      shared_ptr<vector<PatchBaseline::Tags>> tags_ {};
      // The Alibaba Cloud account that last modified the information about the patch baseline.
      shared_ptr<string> updatedBy_ {};
      // The time when the information about the patch baseline was last modified.
      shared_ptr<string> updatedDate_ {};
    };

    virtual bool empty() const override { return this->patchBaseline_ == nullptr
        && this->requestId_ == nullptr; };
    // patchBaseline Field Functions 
    bool hasPatchBaseline() const { return this->patchBaseline_ != nullptr;};
    void deletePatchBaseline() { this->patchBaseline_ = nullptr;};
    inline const CreatePatchBaselineResponseBody::PatchBaseline & getPatchBaseline() const { DARABONBA_PTR_GET_CONST(patchBaseline_, CreatePatchBaselineResponseBody::PatchBaseline) };
    inline CreatePatchBaselineResponseBody::PatchBaseline getPatchBaseline() { DARABONBA_PTR_GET(patchBaseline_, CreatePatchBaselineResponseBody::PatchBaseline) };
    inline CreatePatchBaselineResponseBody& setPatchBaseline(const CreatePatchBaselineResponseBody::PatchBaseline & patchBaseline) { DARABONBA_PTR_SET_VALUE(patchBaseline_, patchBaseline) };
    inline CreatePatchBaselineResponseBody& setPatchBaseline(CreatePatchBaselineResponseBody::PatchBaseline && patchBaseline) { DARABONBA_PTR_SET_RVALUE(patchBaseline_, patchBaseline) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreatePatchBaselineResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the patch baseline.
    shared_ptr<CreatePatchBaselineResponseBody::PatchBaseline> patchBaseline_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
