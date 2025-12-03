// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMERGEREQUESTPATCHSETSRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTMERGEREQUESTPATCHSETSRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListMergeRequestPatchSetsResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMergeRequestPatchSetsResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(commitId, commitId_);
      DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
      DARABONBA_PTR_TO_JSON(patchSetBizId, patchSetBizId_);
      DARABONBA_PTR_TO_JSON(patchSetName, patchSetName_);
      DARABONBA_PTR_TO_JSON(patchSetNo, patchSetNo_);
      DARABONBA_PTR_TO_JSON(relatedMergeItemType, relatedMergeItemType_);
      DARABONBA_PTR_TO_JSON(shortCommitId, shortCommitId_);
    };
    friend void from_json(const Darabonba::Json& j, ListMergeRequestPatchSetsResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(commitId, commitId_);
      DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(patchSetBizId, patchSetBizId_);
      DARABONBA_PTR_FROM_JSON(patchSetName, patchSetName_);
      DARABONBA_PTR_FROM_JSON(patchSetNo, patchSetNo_);
      DARABONBA_PTR_FROM_JSON(relatedMergeItemType, relatedMergeItemType_);
      DARABONBA_PTR_FROM_JSON(shortCommitId, shortCommitId_);
    };
    ListMergeRequestPatchSetsResponseBodyResult() = default ;
    ListMergeRequestPatchSetsResponseBodyResult(const ListMergeRequestPatchSetsResponseBodyResult &) = default ;
    ListMergeRequestPatchSetsResponseBodyResult(ListMergeRequestPatchSetsResponseBodyResult &&) = default ;
    ListMergeRequestPatchSetsResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMergeRequestPatchSetsResponseBodyResult() = default ;
    ListMergeRequestPatchSetsResponseBodyResult& operator=(const ListMergeRequestPatchSetsResponseBodyResult &) = default ;
    ListMergeRequestPatchSetsResponseBodyResult& operator=(ListMergeRequestPatchSetsResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->commitId_ == nullptr
        && return this->createdAt_ == nullptr && return this->patchSetBizId_ == nullptr && return this->patchSetName_ == nullptr && return this->patchSetNo_ == nullptr && return this->relatedMergeItemType_ == nullptr
        && return this->shortCommitId_ == nullptr; };
    // commitId Field Functions 
    bool hasCommitId() const { return this->commitId_ != nullptr;};
    void deleteCommitId() { this->commitId_ = nullptr;};
    inline string commitId() const { DARABONBA_PTR_GET_DEFAULT(commitId_, "") };
    inline ListMergeRequestPatchSetsResponseBodyResult& setCommitId(string commitId) { DARABONBA_PTR_SET_VALUE(commitId_, commitId) };


    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline string createdAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
    inline ListMergeRequestPatchSetsResponseBodyResult& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // patchSetBizId Field Functions 
    bool hasPatchSetBizId() const { return this->patchSetBizId_ != nullptr;};
    void deletePatchSetBizId() { this->patchSetBizId_ = nullptr;};
    inline string patchSetBizId() const { DARABONBA_PTR_GET_DEFAULT(patchSetBizId_, "") };
    inline ListMergeRequestPatchSetsResponseBodyResult& setPatchSetBizId(string patchSetBizId) { DARABONBA_PTR_SET_VALUE(patchSetBizId_, patchSetBizId) };


    // patchSetName Field Functions 
    bool hasPatchSetName() const { return this->patchSetName_ != nullptr;};
    void deletePatchSetName() { this->patchSetName_ = nullptr;};
    inline string patchSetName() const { DARABONBA_PTR_GET_DEFAULT(patchSetName_, "") };
    inline ListMergeRequestPatchSetsResponseBodyResult& setPatchSetName(string patchSetName) { DARABONBA_PTR_SET_VALUE(patchSetName_, patchSetName) };


    // patchSetNo Field Functions 
    bool hasPatchSetNo() const { return this->patchSetNo_ != nullptr;};
    void deletePatchSetNo() { this->patchSetNo_ = nullptr;};
    inline int64_t patchSetNo() const { DARABONBA_PTR_GET_DEFAULT(patchSetNo_, 0L) };
    inline ListMergeRequestPatchSetsResponseBodyResult& setPatchSetNo(int64_t patchSetNo) { DARABONBA_PTR_SET_VALUE(patchSetNo_, patchSetNo) };


    // relatedMergeItemType Field Functions 
    bool hasRelatedMergeItemType() const { return this->relatedMergeItemType_ != nullptr;};
    void deleteRelatedMergeItemType() { this->relatedMergeItemType_ = nullptr;};
    inline string relatedMergeItemType() const { DARABONBA_PTR_GET_DEFAULT(relatedMergeItemType_, "") };
    inline ListMergeRequestPatchSetsResponseBodyResult& setRelatedMergeItemType(string relatedMergeItemType) { DARABONBA_PTR_SET_VALUE(relatedMergeItemType_, relatedMergeItemType) };


    // shortCommitId Field Functions 
    bool hasShortCommitId() const { return this->shortCommitId_ != nullptr;};
    void deleteShortCommitId() { this->shortCommitId_ = nullptr;};
    inline string shortCommitId() const { DARABONBA_PTR_GET_DEFAULT(shortCommitId_, "") };
    inline ListMergeRequestPatchSetsResponseBodyResult& setShortCommitId(string shortCommitId) { DARABONBA_PTR_SET_VALUE(shortCommitId_, shortCommitId) };


  protected:
    std::shared_ptr<string> commitId_ = nullptr;
    std::shared_ptr<string> createdAt_ = nullptr;
    std::shared_ptr<string> patchSetBizId_ = nullptr;
    std::shared_ptr<string> patchSetName_ = nullptr;
    std::shared_ptr<int64_t> patchSetNo_ = nullptr;
    std::shared_ptr<string> relatedMergeItemType_ = nullptr;
    std::shared_ptr<string> shortCommitId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
