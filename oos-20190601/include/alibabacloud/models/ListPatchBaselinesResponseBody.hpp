// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPATCHBASELINESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPATCHBASELINESRESPONSEBODY_HPP_
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
  class ListPatchBaselinesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPatchBaselinesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PatchBaselines, patchBaselines_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListPatchBaselinesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PatchBaselines, patchBaselines_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListPatchBaselinesResponseBody() = default ;
    ListPatchBaselinesResponseBody(const ListPatchBaselinesResponseBody &) = default ;
    ListPatchBaselinesResponseBody(ListPatchBaselinesResponseBody &&) = default ;
    ListPatchBaselinesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPatchBaselinesResponseBody() = default ;
    ListPatchBaselinesResponseBody& operator=(const ListPatchBaselinesResponseBody &) = default ;
    ListPatchBaselinesResponseBody& operator=(ListPatchBaselinesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PatchBaselines : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PatchBaselines& obj) { 
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
      friend void from_json(const Darabonba::Json& j, PatchBaselines& obj) { 
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
      PatchBaselines() = default ;
      PatchBaselines(const PatchBaselines &) = default ;
      PatchBaselines(PatchBaselines &&) = default ;
      PatchBaselines(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PatchBaselines() = default ;
      PatchBaselines& operator=(const PatchBaselines &) = default ;
      PatchBaselines& operator=(PatchBaselines &&) = default ;
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

      virtual bool empty() const override { return this->approvedPatches_ == nullptr
        && this->approvedPatchesEnableNonSecurity_ == nullptr && this->createdBy_ == nullptr && this->createdDate_ == nullptr && this->description_ == nullptr && this->id_ == nullptr
        && this->isDefault_ == nullptr && this->name_ == nullptr && this->operationSystem_ == nullptr && this->resourceGroupId_ == nullptr && this->shareType_ == nullptr
        && this->sources_ == nullptr && this->tags_ == nullptr && this->updatedBy_ == nullptr && this->updatedDate_ == nullptr; };
      // approvedPatches Field Functions 
      bool hasApprovedPatches() const { return this->approvedPatches_ != nullptr;};
      void deleteApprovedPatches() { this->approvedPatches_ = nullptr;};
      inline const vector<string> & getApprovedPatches() const { DARABONBA_PTR_GET_CONST(approvedPatches_, vector<string>) };
      inline vector<string> getApprovedPatches() { DARABONBA_PTR_GET(approvedPatches_, vector<string>) };
      inline PatchBaselines& setApprovedPatches(const vector<string> & approvedPatches) { DARABONBA_PTR_SET_VALUE(approvedPatches_, approvedPatches) };
      inline PatchBaselines& setApprovedPatches(vector<string> && approvedPatches) { DARABONBA_PTR_SET_RVALUE(approvedPatches_, approvedPatches) };


      // approvedPatchesEnableNonSecurity Field Functions 
      bool hasApprovedPatchesEnableNonSecurity() const { return this->approvedPatchesEnableNonSecurity_ != nullptr;};
      void deleteApprovedPatchesEnableNonSecurity() { this->approvedPatchesEnableNonSecurity_ = nullptr;};
      inline bool getApprovedPatchesEnableNonSecurity() const { DARABONBA_PTR_GET_DEFAULT(approvedPatchesEnableNonSecurity_, false) };
      inline PatchBaselines& setApprovedPatchesEnableNonSecurity(bool approvedPatchesEnableNonSecurity) { DARABONBA_PTR_SET_VALUE(approvedPatchesEnableNonSecurity_, approvedPatchesEnableNonSecurity) };


      // createdBy Field Functions 
      bool hasCreatedBy() const { return this->createdBy_ != nullptr;};
      void deleteCreatedBy() { this->createdBy_ = nullptr;};
      inline string getCreatedBy() const { DARABONBA_PTR_GET_DEFAULT(createdBy_, "") };
      inline PatchBaselines& setCreatedBy(string createdBy) { DARABONBA_PTR_SET_VALUE(createdBy_, createdBy) };


      // createdDate Field Functions 
      bool hasCreatedDate() const { return this->createdDate_ != nullptr;};
      void deleteCreatedDate() { this->createdDate_ = nullptr;};
      inline string getCreatedDate() const { DARABONBA_PTR_GET_DEFAULT(createdDate_, "") };
      inline PatchBaselines& setCreatedDate(string createdDate) { DARABONBA_PTR_SET_VALUE(createdDate_, createdDate) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline PatchBaselines& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline PatchBaselines& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // isDefault Field Functions 
      bool hasIsDefault() const { return this->isDefault_ != nullptr;};
      void deleteIsDefault() { this->isDefault_ = nullptr;};
      inline bool getIsDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
      inline PatchBaselines& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline PatchBaselines& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // operationSystem Field Functions 
      bool hasOperationSystem() const { return this->operationSystem_ != nullptr;};
      void deleteOperationSystem() { this->operationSystem_ = nullptr;};
      inline string getOperationSystem() const { DARABONBA_PTR_GET_DEFAULT(operationSystem_, "") };
      inline PatchBaselines& setOperationSystem(string operationSystem) { DARABONBA_PTR_SET_VALUE(operationSystem_, operationSystem) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline PatchBaselines& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // shareType Field Functions 
      bool hasShareType() const { return this->shareType_ != nullptr;};
      void deleteShareType() { this->shareType_ = nullptr;};
      inline string getShareType() const { DARABONBA_PTR_GET_DEFAULT(shareType_, "") };
      inline PatchBaselines& setShareType(string shareType) { DARABONBA_PTR_SET_VALUE(shareType_, shareType) };


      // sources Field Functions 
      bool hasSources() const { return this->sources_ != nullptr;};
      void deleteSources() { this->sources_ = nullptr;};
      inline const vector<string> & getSources() const { DARABONBA_PTR_GET_CONST(sources_, vector<string>) };
      inline vector<string> getSources() { DARABONBA_PTR_GET(sources_, vector<string>) };
      inline PatchBaselines& setSources(const vector<string> & sources) { DARABONBA_PTR_SET_VALUE(sources_, sources) };
      inline PatchBaselines& setSources(vector<string> && sources) { DARABONBA_PTR_SET_RVALUE(sources_, sources) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<PatchBaselines::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<PatchBaselines::Tags>) };
      inline vector<PatchBaselines::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<PatchBaselines::Tags>) };
      inline PatchBaselines& setTags(const vector<PatchBaselines::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline PatchBaselines& setTags(vector<PatchBaselines::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // updatedBy Field Functions 
      bool hasUpdatedBy() const { return this->updatedBy_ != nullptr;};
      void deleteUpdatedBy() { this->updatedBy_ = nullptr;};
      inline string getUpdatedBy() const { DARABONBA_PTR_GET_DEFAULT(updatedBy_, "") };
      inline PatchBaselines& setUpdatedBy(string updatedBy) { DARABONBA_PTR_SET_VALUE(updatedBy_, updatedBy) };


      // updatedDate Field Functions 
      bool hasUpdatedDate() const { return this->updatedDate_ != nullptr;};
      void deleteUpdatedDate() { this->updatedDate_ = nullptr;};
      inline string getUpdatedDate() const { DARABONBA_PTR_GET_DEFAULT(updatedDate_, "") };
      inline PatchBaselines& setUpdatedDate(string updatedDate) { DARABONBA_PTR_SET_VALUE(updatedDate_, updatedDate) };


    protected:
      // The approved patches.
      shared_ptr<vector<string>> approvedPatches_ {};
      // Indicates whether the approved patch involves updates other than security-related updates.
      shared_ptr<bool> approvedPatchesEnableNonSecurity_ {};
      // The user who created the patch baseline.
      shared_ptr<string> createdBy_ {};
      // The time when the patch baseline was created.
      shared_ptr<string> createdDate_ {};
      // The description of the patch baseline.
      shared_ptr<string> description_ {};
      // The ID of the patch baseline.
      shared_ptr<string> id_ {};
      // Indicates whether the patch baseline is set as the default patch baseline.
      shared_ptr<bool> isDefault_ {};
      // The name of the patch baseline.
      shared_ptr<string> name_ {};
      // The type of the operating system.
      shared_ptr<string> operationSystem_ {};
      // The ID of the resource group.
      shared_ptr<string> resourceGroupId_ {};
      // The share type of the patch baseline.
      shared_ptr<string> shareType_ {};
      // The configurations of patch sources.
      shared_ptr<vector<string>> sources_ {};
      // The tags of the patch baseline.
      shared_ptr<vector<PatchBaselines::Tags>> tags_ {};
      // The user who last updated the patch baseline.
      shared_ptr<string> updatedBy_ {};
      // The time when the patch baseline was updated.
      shared_ptr<string> updatedDate_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->patchBaselines_ == nullptr && this->requestId_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListPatchBaselinesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListPatchBaselinesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // patchBaselines Field Functions 
    bool hasPatchBaselines() const { return this->patchBaselines_ != nullptr;};
    void deletePatchBaselines() { this->patchBaselines_ = nullptr;};
    inline const vector<ListPatchBaselinesResponseBody::PatchBaselines> & getPatchBaselines() const { DARABONBA_PTR_GET_CONST(patchBaselines_, vector<ListPatchBaselinesResponseBody::PatchBaselines>) };
    inline vector<ListPatchBaselinesResponseBody::PatchBaselines> getPatchBaselines() { DARABONBA_PTR_GET(patchBaselines_, vector<ListPatchBaselinesResponseBody::PatchBaselines>) };
    inline ListPatchBaselinesResponseBody& setPatchBaselines(const vector<ListPatchBaselinesResponseBody::PatchBaselines> & patchBaselines) { DARABONBA_PTR_SET_VALUE(patchBaselines_, patchBaselines) };
    inline ListPatchBaselinesResponseBody& setPatchBaselines(vector<ListPatchBaselinesResponseBody::PatchBaselines> && patchBaselines) { DARABONBA_PTR_SET_RVALUE(patchBaselines_, patchBaselines) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPatchBaselinesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The number of entries per page.
    shared_ptr<int32_t> maxResults_ {};
    // The token that is used to retrieve the next page of results.
    shared_ptr<string> nextToken_ {};
    // The patch baselines.
    shared_ptr<vector<ListPatchBaselinesResponseBody::PatchBaselines>> patchBaselines_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
