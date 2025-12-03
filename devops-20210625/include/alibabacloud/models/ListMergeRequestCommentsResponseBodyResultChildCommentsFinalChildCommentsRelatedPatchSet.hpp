// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMERGEREQUESTCOMMENTSRESPONSEBODYRESULTCHILDCOMMENTSFINALCHILDCOMMENTSRELATEDPATCHSET_HPP_
#define ALIBABACLOUD_MODELS_LISTMERGEREQUESTCOMMENTSRESPONSEBODYRESULTCHILDCOMMENTSFINALCHILDCOMMENTSRELATEDPATCHSET_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListMergeRequestCommentsResponseBodyResultChildCommentsFinalChildCommentsRelatedPatchSet : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMergeRequestCommentsResponseBodyResultChildCommentsFinalChildCommentsRelatedPatchSet& obj) { 
      DARABONBA_PTR_TO_JSON(commitId, commitId_);
      DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
      DARABONBA_PTR_TO_JSON(patchSetBizId, patchSetBizId_);
      DARABONBA_PTR_TO_JSON(patchSetName, patchSetName_);
      DARABONBA_PTR_TO_JSON(patchSetNo, patchSetNo_);
      DARABONBA_PTR_TO_JSON(relatedMergeItemType, relatedMergeItemType_);
      DARABONBA_PTR_TO_JSON(shortId, shortId_);
    };
    friend void from_json(const Darabonba::Json& j, ListMergeRequestCommentsResponseBodyResultChildCommentsFinalChildCommentsRelatedPatchSet& obj) { 
      DARABONBA_PTR_FROM_JSON(commitId, commitId_);
      DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(patchSetBizId, patchSetBizId_);
      DARABONBA_PTR_FROM_JSON(patchSetName, patchSetName_);
      DARABONBA_PTR_FROM_JSON(patchSetNo, patchSetNo_);
      DARABONBA_PTR_FROM_JSON(relatedMergeItemType, relatedMergeItemType_);
      DARABONBA_PTR_FROM_JSON(shortId, shortId_);
    };
    ListMergeRequestCommentsResponseBodyResultChildCommentsFinalChildCommentsRelatedPatchSet() = default ;
    ListMergeRequestCommentsResponseBodyResultChildCommentsFinalChildCommentsRelatedPatchSet(const ListMergeRequestCommentsResponseBodyResultChildCommentsFinalChildCommentsRelatedPatchSet &) = default ;
    ListMergeRequestCommentsResponseBodyResultChildCommentsFinalChildCommentsRelatedPatchSet(ListMergeRequestCommentsResponseBodyResultChildCommentsFinalChildCommentsRelatedPatchSet &&) = default ;
    ListMergeRequestCommentsResponseBodyResultChildCommentsFinalChildCommentsRelatedPatchSet(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMergeRequestCommentsResponseBodyResultChildCommentsFinalChildCommentsRelatedPatchSet() = default ;
    ListMergeRequestCommentsResponseBodyResultChildCommentsFinalChildCommentsRelatedPatchSet& operator=(const ListMergeRequestCommentsResponseBodyResultChildCommentsFinalChildCommentsRelatedPatchSet &) = default ;
    ListMergeRequestCommentsResponseBodyResultChildCommentsFinalChildCommentsRelatedPatchSet& operator=(ListMergeRequestCommentsResponseBodyResultChildCommentsFinalChildCommentsRelatedPatchSet &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->commitId_ == nullptr
        && return this->createdAt_ == nullptr && return this->patchSetBizId_ == nullptr && return this->patchSetName_ == nullptr && return this->patchSetNo_ == nullptr && return this->relatedMergeItemType_ == nullptr
        && return this->shortId_ == nullptr; };
    // commitId Field Functions 
    bool hasCommitId() const { return this->commitId_ != nullptr;};
    void deleteCommitId() { this->commitId_ = nullptr;};
    inline string commitId() const { DARABONBA_PTR_GET_DEFAULT(commitId_, "") };
    inline ListMergeRequestCommentsResponseBodyResultChildCommentsFinalChildCommentsRelatedPatchSet& setCommitId(string commitId) { DARABONBA_PTR_SET_VALUE(commitId_, commitId) };


    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline string createdAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
    inline ListMergeRequestCommentsResponseBodyResultChildCommentsFinalChildCommentsRelatedPatchSet& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // patchSetBizId Field Functions 
    bool hasPatchSetBizId() const { return this->patchSetBizId_ != nullptr;};
    void deletePatchSetBizId() { this->patchSetBizId_ = nullptr;};
    inline string patchSetBizId() const { DARABONBA_PTR_GET_DEFAULT(patchSetBizId_, "") };
    inline ListMergeRequestCommentsResponseBodyResultChildCommentsFinalChildCommentsRelatedPatchSet& setPatchSetBizId(string patchSetBizId) { DARABONBA_PTR_SET_VALUE(patchSetBizId_, patchSetBizId) };


    // patchSetName Field Functions 
    bool hasPatchSetName() const { return this->patchSetName_ != nullptr;};
    void deletePatchSetName() { this->patchSetName_ = nullptr;};
    inline string patchSetName() const { DARABONBA_PTR_GET_DEFAULT(patchSetName_, "") };
    inline ListMergeRequestCommentsResponseBodyResultChildCommentsFinalChildCommentsRelatedPatchSet& setPatchSetName(string patchSetName) { DARABONBA_PTR_SET_VALUE(patchSetName_, patchSetName) };


    // patchSetNo Field Functions 
    bool hasPatchSetNo() const { return this->patchSetNo_ != nullptr;};
    void deletePatchSetNo() { this->patchSetNo_ = nullptr;};
    inline string patchSetNo() const { DARABONBA_PTR_GET_DEFAULT(patchSetNo_, "") };
    inline ListMergeRequestCommentsResponseBodyResultChildCommentsFinalChildCommentsRelatedPatchSet& setPatchSetNo(string patchSetNo) { DARABONBA_PTR_SET_VALUE(patchSetNo_, patchSetNo) };


    // relatedMergeItemType Field Functions 
    bool hasRelatedMergeItemType() const { return this->relatedMergeItemType_ != nullptr;};
    void deleteRelatedMergeItemType() { this->relatedMergeItemType_ = nullptr;};
    inline string relatedMergeItemType() const { DARABONBA_PTR_GET_DEFAULT(relatedMergeItemType_, "") };
    inline ListMergeRequestCommentsResponseBodyResultChildCommentsFinalChildCommentsRelatedPatchSet& setRelatedMergeItemType(string relatedMergeItemType) { DARABONBA_PTR_SET_VALUE(relatedMergeItemType_, relatedMergeItemType) };


    // shortId Field Functions 
    bool hasShortId() const { return this->shortId_ != nullptr;};
    void deleteShortId() { this->shortId_ = nullptr;};
    inline string shortId() const { DARABONBA_PTR_GET_DEFAULT(shortId_, "") };
    inline ListMergeRequestCommentsResponseBodyResultChildCommentsFinalChildCommentsRelatedPatchSet& setShortId(string shortId) { DARABONBA_PTR_SET_VALUE(shortId_, shortId) };


  protected:
    std::shared_ptr<string> commitId_ = nullptr;
    std::shared_ptr<string> createdAt_ = nullptr;
    std::shared_ptr<string> patchSetBizId_ = nullptr;
    std::shared_ptr<string> patchSetName_ = nullptr;
    std::shared_ptr<string> patchSetNo_ = nullptr;
    std::shared_ptr<string> relatedMergeItemType_ = nullptr;
    std::shared_ptr<string> shortId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
