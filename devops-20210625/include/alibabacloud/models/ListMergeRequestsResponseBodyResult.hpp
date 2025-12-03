// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMERGEREQUESTSRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTMERGEREQUESTSRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListMergeRequestsResponseBodyResultAuthor.hpp>
#include <vector>
#include <alibabacloud/models/ListMergeRequestsResponseBodyResultLabels.hpp>
#include <alibabacloud/models/ListMergeRequestsResponseBodyResultReviewers.hpp>
#include <alibabacloud/models/ListMergeRequestsResponseBodyResultSubscribers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListMergeRequestsResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMergeRequestsResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(author, author_);
      DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
      DARABONBA_PTR_TO_JSON(creationMethod, creationMethod_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(detailUrl, detailUrl_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(iid, iid_);
      DARABONBA_PTR_TO_JSON(labels, labels_);
      DARABONBA_PTR_TO_JSON(localId, localId_);
      DARABONBA_PTR_TO_JSON(mergedRevision, mergedRevision_);
      DARABONBA_PTR_TO_JSON(mrBizId, mrBizId_);
      DARABONBA_PTR_TO_JSON(nameWithNamespace, nameWithNamespace_);
      DARABONBA_PTR_TO_JSON(newMergeRequestIdentifier, newMergeRequestIdentifier_);
      DARABONBA_PTR_TO_JSON(newVersionState, newVersionState_);
      DARABONBA_PTR_TO_JSON(projectId, projectId_);
      DARABONBA_PTR_TO_JSON(reviewers, reviewers_);
      DARABONBA_PTR_TO_JSON(sourceBranch, sourceBranch_);
      DARABONBA_PTR_TO_JSON(sourceProjectId, sourceProjectId_);
      DARABONBA_PTR_TO_JSON(sourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(sshUrl, sshUrl_);
      DARABONBA_PTR_TO_JSON(state, state_);
      DARABONBA_PTR_TO_JSON(subscribers, subscribers_);
      DARABONBA_PTR_TO_JSON(supportMergeFFOnly, supportMergeFFOnly_);
      DARABONBA_PTR_TO_JSON(targetBranch, targetBranch_);
      DARABONBA_PTR_TO_JSON(targetProjectId, targetProjectId_);
      DARABONBA_PTR_TO_JSON(targetType, targetType_);
      DARABONBA_PTR_TO_JSON(title, title_);
      DARABONBA_PTR_TO_JSON(updatedAt, updatedAt_);
      DARABONBA_PTR_TO_JSON(webUrl, webUrl_);
      DARABONBA_PTR_TO_JSON(workInProgress, workInProgress_);
    };
    friend void from_json(const Darabonba::Json& j, ListMergeRequestsResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(author, author_);
      DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(creationMethod, creationMethod_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(detailUrl, detailUrl_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(iid, iid_);
      DARABONBA_PTR_FROM_JSON(labels, labels_);
      DARABONBA_PTR_FROM_JSON(localId, localId_);
      DARABONBA_PTR_FROM_JSON(mergedRevision, mergedRevision_);
      DARABONBA_PTR_FROM_JSON(mrBizId, mrBizId_);
      DARABONBA_PTR_FROM_JSON(nameWithNamespace, nameWithNamespace_);
      DARABONBA_PTR_FROM_JSON(newMergeRequestIdentifier, newMergeRequestIdentifier_);
      DARABONBA_PTR_FROM_JSON(newVersionState, newVersionState_);
      DARABONBA_PTR_FROM_JSON(projectId, projectId_);
      DARABONBA_PTR_FROM_JSON(reviewers, reviewers_);
      DARABONBA_PTR_FROM_JSON(sourceBranch, sourceBranch_);
      DARABONBA_PTR_FROM_JSON(sourceProjectId, sourceProjectId_);
      DARABONBA_PTR_FROM_JSON(sourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(sshUrl, sshUrl_);
      DARABONBA_PTR_FROM_JSON(state, state_);
      DARABONBA_PTR_FROM_JSON(subscribers, subscribers_);
      DARABONBA_PTR_FROM_JSON(supportMergeFFOnly, supportMergeFFOnly_);
      DARABONBA_PTR_FROM_JSON(targetBranch, targetBranch_);
      DARABONBA_PTR_FROM_JSON(targetProjectId, targetProjectId_);
      DARABONBA_PTR_FROM_JSON(targetType, targetType_);
      DARABONBA_PTR_FROM_JSON(title, title_);
      DARABONBA_PTR_FROM_JSON(updatedAt, updatedAt_);
      DARABONBA_PTR_FROM_JSON(webUrl, webUrl_);
      DARABONBA_PTR_FROM_JSON(workInProgress, workInProgress_);
    };
    ListMergeRequestsResponseBodyResult() = default ;
    ListMergeRequestsResponseBodyResult(const ListMergeRequestsResponseBodyResult &) = default ;
    ListMergeRequestsResponseBodyResult(ListMergeRequestsResponseBodyResult &&) = default ;
    ListMergeRequestsResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMergeRequestsResponseBodyResult() = default ;
    ListMergeRequestsResponseBodyResult& operator=(const ListMergeRequestsResponseBodyResult &) = default ;
    ListMergeRequestsResponseBodyResult& operator=(ListMergeRequestsResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->author_ == nullptr
        && return this->createdAt_ == nullptr && return this->creationMethod_ == nullptr && return this->description_ == nullptr && return this->detailUrl_ == nullptr && return this->id_ == nullptr
        && return this->iid_ == nullptr && return this->labels_ == nullptr && return this->localId_ == nullptr && return this->mergedRevision_ == nullptr && return this->mrBizId_ == nullptr
        && return this->nameWithNamespace_ == nullptr && return this->newMergeRequestIdentifier_ == nullptr && return this->newVersionState_ == nullptr && return this->projectId_ == nullptr && return this->reviewers_ == nullptr
        && return this->sourceBranch_ == nullptr && return this->sourceProjectId_ == nullptr && return this->sourceType_ == nullptr && return this->sshUrl_ == nullptr && return this->state_ == nullptr
        && return this->subscribers_ == nullptr && return this->supportMergeFFOnly_ == nullptr && return this->targetBranch_ == nullptr && return this->targetProjectId_ == nullptr && return this->targetType_ == nullptr
        && return this->title_ == nullptr && return this->updatedAt_ == nullptr && return this->webUrl_ == nullptr && return this->workInProgress_ == nullptr; };
    // author Field Functions 
    bool hasAuthor() const { return this->author_ != nullptr;};
    void deleteAuthor() { this->author_ = nullptr;};
    inline const Models::ListMergeRequestsResponseBodyResultAuthor & author() const { DARABONBA_PTR_GET_CONST(author_, Models::ListMergeRequestsResponseBodyResultAuthor) };
    inline Models::ListMergeRequestsResponseBodyResultAuthor author() { DARABONBA_PTR_GET(author_, Models::ListMergeRequestsResponseBodyResultAuthor) };
    inline ListMergeRequestsResponseBodyResult& setAuthor(const Models::ListMergeRequestsResponseBodyResultAuthor & author) { DARABONBA_PTR_SET_VALUE(author_, author) };
    inline ListMergeRequestsResponseBodyResult& setAuthor(Models::ListMergeRequestsResponseBodyResultAuthor && author) { DARABONBA_PTR_SET_RVALUE(author_, author) };


    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline string createdAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
    inline ListMergeRequestsResponseBodyResult& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // creationMethod Field Functions 
    bool hasCreationMethod() const { return this->creationMethod_ != nullptr;};
    void deleteCreationMethod() { this->creationMethod_ = nullptr;};
    inline string creationMethod() const { DARABONBA_PTR_GET_DEFAULT(creationMethod_, "") };
    inline ListMergeRequestsResponseBodyResult& setCreationMethod(string creationMethod) { DARABONBA_PTR_SET_VALUE(creationMethod_, creationMethod) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListMergeRequestsResponseBodyResult& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // detailUrl Field Functions 
    bool hasDetailUrl() const { return this->detailUrl_ != nullptr;};
    void deleteDetailUrl() { this->detailUrl_ = nullptr;};
    inline string detailUrl() const { DARABONBA_PTR_GET_DEFAULT(detailUrl_, "") };
    inline ListMergeRequestsResponseBodyResult& setDetailUrl(string detailUrl) { DARABONBA_PTR_SET_VALUE(detailUrl_, detailUrl) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListMergeRequestsResponseBodyResult& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // iid Field Functions 
    bool hasIid() const { return this->iid_ != nullptr;};
    void deleteIid() { this->iid_ = nullptr;};
    inline int64_t iid() const { DARABONBA_PTR_GET_DEFAULT(iid_, 0L) };
    inline ListMergeRequestsResponseBodyResult& setIid(int64_t iid) { DARABONBA_PTR_SET_VALUE(iid_, iid) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<Models::ListMergeRequestsResponseBodyResultLabels> & labels() const { DARABONBA_PTR_GET_CONST(labels_, vector<Models::ListMergeRequestsResponseBodyResultLabels>) };
    inline vector<Models::ListMergeRequestsResponseBodyResultLabels> labels() { DARABONBA_PTR_GET(labels_, vector<Models::ListMergeRequestsResponseBodyResultLabels>) };
    inline ListMergeRequestsResponseBodyResult& setLabels(const vector<Models::ListMergeRequestsResponseBodyResultLabels> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline ListMergeRequestsResponseBodyResult& setLabels(vector<Models::ListMergeRequestsResponseBodyResultLabels> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // localId Field Functions 
    bool hasLocalId() const { return this->localId_ != nullptr;};
    void deleteLocalId() { this->localId_ = nullptr;};
    inline int64_t localId() const { DARABONBA_PTR_GET_DEFAULT(localId_, 0L) };
    inline ListMergeRequestsResponseBodyResult& setLocalId(int64_t localId) { DARABONBA_PTR_SET_VALUE(localId_, localId) };


    // mergedRevision Field Functions 
    bool hasMergedRevision() const { return this->mergedRevision_ != nullptr;};
    void deleteMergedRevision() { this->mergedRevision_ = nullptr;};
    inline string mergedRevision() const { DARABONBA_PTR_GET_DEFAULT(mergedRevision_, "") };
    inline ListMergeRequestsResponseBodyResult& setMergedRevision(string mergedRevision) { DARABONBA_PTR_SET_VALUE(mergedRevision_, mergedRevision) };


    // mrBizId Field Functions 
    bool hasMrBizId() const { return this->mrBizId_ != nullptr;};
    void deleteMrBizId() { this->mrBizId_ = nullptr;};
    inline string mrBizId() const { DARABONBA_PTR_GET_DEFAULT(mrBizId_, "") };
    inline ListMergeRequestsResponseBodyResult& setMrBizId(string mrBizId) { DARABONBA_PTR_SET_VALUE(mrBizId_, mrBizId) };


    // nameWithNamespace Field Functions 
    bool hasNameWithNamespace() const { return this->nameWithNamespace_ != nullptr;};
    void deleteNameWithNamespace() { this->nameWithNamespace_ = nullptr;};
    inline string nameWithNamespace() const { DARABONBA_PTR_GET_DEFAULT(nameWithNamespace_, "") };
    inline ListMergeRequestsResponseBodyResult& setNameWithNamespace(string nameWithNamespace) { DARABONBA_PTR_SET_VALUE(nameWithNamespace_, nameWithNamespace) };


    // newMergeRequestIdentifier Field Functions 
    bool hasNewMergeRequestIdentifier() const { return this->newMergeRequestIdentifier_ != nullptr;};
    void deleteNewMergeRequestIdentifier() { this->newMergeRequestIdentifier_ = nullptr;};
    inline bool newMergeRequestIdentifier() const { DARABONBA_PTR_GET_DEFAULT(newMergeRequestIdentifier_, false) };
    inline ListMergeRequestsResponseBodyResult& setNewMergeRequestIdentifier(bool newMergeRequestIdentifier) { DARABONBA_PTR_SET_VALUE(newMergeRequestIdentifier_, newMergeRequestIdentifier) };


    // newVersionState Field Functions 
    bool hasNewVersionState() const { return this->newVersionState_ != nullptr;};
    void deleteNewVersionState() { this->newVersionState_ = nullptr;};
    inline string newVersionState() const { DARABONBA_PTR_GET_DEFAULT(newVersionState_, "") };
    inline ListMergeRequestsResponseBodyResult& setNewVersionState(string newVersionState) { DARABONBA_PTR_SET_VALUE(newVersionState_, newVersionState) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ListMergeRequestsResponseBodyResult& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // reviewers Field Functions 
    bool hasReviewers() const { return this->reviewers_ != nullptr;};
    void deleteReviewers() { this->reviewers_ = nullptr;};
    inline const vector<Models::ListMergeRequestsResponseBodyResultReviewers> & reviewers() const { DARABONBA_PTR_GET_CONST(reviewers_, vector<Models::ListMergeRequestsResponseBodyResultReviewers>) };
    inline vector<Models::ListMergeRequestsResponseBodyResultReviewers> reviewers() { DARABONBA_PTR_GET(reviewers_, vector<Models::ListMergeRequestsResponseBodyResultReviewers>) };
    inline ListMergeRequestsResponseBodyResult& setReviewers(const vector<Models::ListMergeRequestsResponseBodyResultReviewers> & reviewers) { DARABONBA_PTR_SET_VALUE(reviewers_, reviewers) };
    inline ListMergeRequestsResponseBodyResult& setReviewers(vector<Models::ListMergeRequestsResponseBodyResultReviewers> && reviewers) { DARABONBA_PTR_SET_RVALUE(reviewers_, reviewers) };


    // sourceBranch Field Functions 
    bool hasSourceBranch() const { return this->sourceBranch_ != nullptr;};
    void deleteSourceBranch() { this->sourceBranch_ = nullptr;};
    inline string sourceBranch() const { DARABONBA_PTR_GET_DEFAULT(sourceBranch_, "") };
    inline ListMergeRequestsResponseBodyResult& setSourceBranch(string sourceBranch) { DARABONBA_PTR_SET_VALUE(sourceBranch_, sourceBranch) };


    // sourceProjectId Field Functions 
    bool hasSourceProjectId() const { return this->sourceProjectId_ != nullptr;};
    void deleteSourceProjectId() { this->sourceProjectId_ = nullptr;};
    inline int64_t sourceProjectId() const { DARABONBA_PTR_GET_DEFAULT(sourceProjectId_, 0L) };
    inline ListMergeRequestsResponseBodyResult& setSourceProjectId(int64_t sourceProjectId) { DARABONBA_PTR_SET_VALUE(sourceProjectId_, sourceProjectId) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline ListMergeRequestsResponseBodyResult& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // sshUrl Field Functions 
    bool hasSshUrl() const { return this->sshUrl_ != nullptr;};
    void deleteSshUrl() { this->sshUrl_ = nullptr;};
    inline string sshUrl() const { DARABONBA_PTR_GET_DEFAULT(sshUrl_, "") };
    inline ListMergeRequestsResponseBodyResult& setSshUrl(string sshUrl) { DARABONBA_PTR_SET_VALUE(sshUrl_, sshUrl) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline ListMergeRequestsResponseBodyResult& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // subscribers Field Functions 
    bool hasSubscribers() const { return this->subscribers_ != nullptr;};
    void deleteSubscribers() { this->subscribers_ = nullptr;};
    inline const vector<Models::ListMergeRequestsResponseBodyResultSubscribers> & subscribers() const { DARABONBA_PTR_GET_CONST(subscribers_, vector<Models::ListMergeRequestsResponseBodyResultSubscribers>) };
    inline vector<Models::ListMergeRequestsResponseBodyResultSubscribers> subscribers() { DARABONBA_PTR_GET(subscribers_, vector<Models::ListMergeRequestsResponseBodyResultSubscribers>) };
    inline ListMergeRequestsResponseBodyResult& setSubscribers(const vector<Models::ListMergeRequestsResponseBodyResultSubscribers> & subscribers) { DARABONBA_PTR_SET_VALUE(subscribers_, subscribers) };
    inline ListMergeRequestsResponseBodyResult& setSubscribers(vector<Models::ListMergeRequestsResponseBodyResultSubscribers> && subscribers) { DARABONBA_PTR_SET_RVALUE(subscribers_, subscribers) };


    // supportMergeFFOnly Field Functions 
    bool hasSupportMergeFFOnly() const { return this->supportMergeFFOnly_ != nullptr;};
    void deleteSupportMergeFFOnly() { this->supportMergeFFOnly_ = nullptr;};
    inline bool supportMergeFFOnly() const { DARABONBA_PTR_GET_DEFAULT(supportMergeFFOnly_, false) };
    inline ListMergeRequestsResponseBodyResult& setSupportMergeFFOnly(bool supportMergeFFOnly) { DARABONBA_PTR_SET_VALUE(supportMergeFFOnly_, supportMergeFFOnly) };


    // targetBranch Field Functions 
    bool hasTargetBranch() const { return this->targetBranch_ != nullptr;};
    void deleteTargetBranch() { this->targetBranch_ = nullptr;};
    inline string targetBranch() const { DARABONBA_PTR_GET_DEFAULT(targetBranch_, "") };
    inline ListMergeRequestsResponseBodyResult& setTargetBranch(string targetBranch) { DARABONBA_PTR_SET_VALUE(targetBranch_, targetBranch) };


    // targetProjectId Field Functions 
    bool hasTargetProjectId() const { return this->targetProjectId_ != nullptr;};
    void deleteTargetProjectId() { this->targetProjectId_ = nullptr;};
    inline int64_t targetProjectId() const { DARABONBA_PTR_GET_DEFAULT(targetProjectId_, 0L) };
    inline ListMergeRequestsResponseBodyResult& setTargetProjectId(int64_t targetProjectId) { DARABONBA_PTR_SET_VALUE(targetProjectId_, targetProjectId) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string targetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline ListMergeRequestsResponseBodyResult& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline ListMergeRequestsResponseBodyResult& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // updatedAt Field Functions 
    bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
    void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
    inline string updatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
    inline ListMergeRequestsResponseBodyResult& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


    // webUrl Field Functions 
    bool hasWebUrl() const { return this->webUrl_ != nullptr;};
    void deleteWebUrl() { this->webUrl_ = nullptr;};
    inline string webUrl() const { DARABONBA_PTR_GET_DEFAULT(webUrl_, "") };
    inline ListMergeRequestsResponseBodyResult& setWebUrl(string webUrl) { DARABONBA_PTR_SET_VALUE(webUrl_, webUrl) };


    // workInProgress Field Functions 
    bool hasWorkInProgress() const { return this->workInProgress_ != nullptr;};
    void deleteWorkInProgress() { this->workInProgress_ = nullptr;};
    inline bool workInProgress() const { DARABONBA_PTR_GET_DEFAULT(workInProgress_, false) };
    inline ListMergeRequestsResponseBodyResult& setWorkInProgress(bool workInProgress) { DARABONBA_PTR_SET_VALUE(workInProgress_, workInProgress) };


  protected:
    std::shared_ptr<Models::ListMergeRequestsResponseBodyResultAuthor> author_ = nullptr;
    std::shared_ptr<string> createdAt_ = nullptr;
    std::shared_ptr<string> creationMethod_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> detailUrl_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<int64_t> iid_ = nullptr;
    std::shared_ptr<vector<Models::ListMergeRequestsResponseBodyResultLabels>> labels_ = nullptr;
    std::shared_ptr<int64_t> localId_ = nullptr;
    std::shared_ptr<string> mergedRevision_ = nullptr;
    std::shared_ptr<string> mrBizId_ = nullptr;
    std::shared_ptr<string> nameWithNamespace_ = nullptr;
    std::shared_ptr<bool> newMergeRequestIdentifier_ = nullptr;
    std::shared_ptr<string> newVersionState_ = nullptr;
    std::shared_ptr<int64_t> projectId_ = nullptr;
    std::shared_ptr<vector<Models::ListMergeRequestsResponseBodyResultReviewers>> reviewers_ = nullptr;
    std::shared_ptr<string> sourceBranch_ = nullptr;
    std::shared_ptr<int64_t> sourceProjectId_ = nullptr;
    std::shared_ptr<string> sourceType_ = nullptr;
    std::shared_ptr<string> sshUrl_ = nullptr;
    std::shared_ptr<string> state_ = nullptr;
    std::shared_ptr<vector<Models::ListMergeRequestsResponseBodyResultSubscribers>> subscribers_ = nullptr;
    std::shared_ptr<bool> supportMergeFFOnly_ = nullptr;
    std::shared_ptr<string> targetBranch_ = nullptr;
    std::shared_ptr<int64_t> targetProjectId_ = nullptr;
    std::shared_ptr<string> targetType_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
    std::shared_ptr<string> updatedAt_ = nullptr;
    std::shared_ptr<string> webUrl_ = nullptr;
    std::shared_ptr<bool> workInProgress_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
