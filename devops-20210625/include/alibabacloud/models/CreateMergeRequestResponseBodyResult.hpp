// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMERGEREQUESTRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_CREATEMERGEREQUESTRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateMergeRequestResponseBodyResultAuthor.hpp>
#include <vector>
#include <alibabacloud/models/CreateMergeRequestResponseBodyResultReviewers.hpp>
#include <alibabacloud/models/CreateMergeRequestResponseBodyResultSubscribers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class CreateMergeRequestResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMergeRequestResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(ahead, ahead_);
      DARABONBA_PTR_TO_JSON(allRequirementsPass, allRequirementsPass_);
      DARABONBA_PTR_TO_JSON(author, author_);
      DARABONBA_PTR_TO_JSON(behind, behind_);
      DARABONBA_PTR_TO_JSON(createFrom, createFrom_);
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(detailUrl, detailUrl_);
      DARABONBA_PTR_TO_JSON(localId, localId_);
      DARABONBA_PTR_TO_JSON(mrBizId, mrBizId_);
      DARABONBA_PTR_TO_JSON(mrType, mrType_);
      DARABONBA_PTR_TO_JSON(projectId, projectId_);
      DARABONBA_PTR_TO_JSON(reviewers, reviewers_);
      DARABONBA_PTR_TO_JSON(sourceBranch, sourceBranch_);
      DARABONBA_PTR_TO_JSON(sourceProjectId, sourceProjectId_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(subscribers, subscribers_);
      DARABONBA_PTR_TO_JSON(supportMergeFastForwardOnly, supportMergeFastForwardOnly_);
      DARABONBA_PTR_TO_JSON(targetBranch, targetBranch_);
      DARABONBA_PTR_TO_JSON(targetProjectId, targetProjectId_);
      DARABONBA_PTR_TO_JSON(title, title_);
      DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(webUrl, webUrl_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMergeRequestResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(ahead, ahead_);
      DARABONBA_PTR_FROM_JSON(allRequirementsPass, allRequirementsPass_);
      DARABONBA_PTR_FROM_JSON(author, author_);
      DARABONBA_PTR_FROM_JSON(behind, behind_);
      DARABONBA_PTR_FROM_JSON(createFrom, createFrom_);
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(detailUrl, detailUrl_);
      DARABONBA_PTR_FROM_JSON(localId, localId_);
      DARABONBA_PTR_FROM_JSON(mrBizId, mrBizId_);
      DARABONBA_PTR_FROM_JSON(mrType, mrType_);
      DARABONBA_PTR_FROM_JSON(projectId, projectId_);
      DARABONBA_PTR_FROM_JSON(reviewers, reviewers_);
      DARABONBA_PTR_FROM_JSON(sourceBranch, sourceBranch_);
      DARABONBA_PTR_FROM_JSON(sourceProjectId, sourceProjectId_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(subscribers, subscribers_);
      DARABONBA_PTR_FROM_JSON(supportMergeFastForwardOnly, supportMergeFastForwardOnly_);
      DARABONBA_PTR_FROM_JSON(targetBranch, targetBranch_);
      DARABONBA_PTR_FROM_JSON(targetProjectId, targetProjectId_);
      DARABONBA_PTR_FROM_JSON(title, title_);
      DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(webUrl, webUrl_);
    };
    CreateMergeRequestResponseBodyResult() = default ;
    CreateMergeRequestResponseBodyResult(const CreateMergeRequestResponseBodyResult &) = default ;
    CreateMergeRequestResponseBodyResult(CreateMergeRequestResponseBodyResult &&) = default ;
    CreateMergeRequestResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMergeRequestResponseBodyResult() = default ;
    CreateMergeRequestResponseBodyResult& operator=(const CreateMergeRequestResponseBodyResult &) = default ;
    CreateMergeRequestResponseBodyResult& operator=(CreateMergeRequestResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ahead_ == nullptr
        && return this->allRequirementsPass_ == nullptr && return this->author_ == nullptr && return this->behind_ == nullptr && return this->createFrom_ == nullptr && return this->createTime_ == nullptr
        && return this->description_ == nullptr && return this->detailUrl_ == nullptr && return this->localId_ == nullptr && return this->mrBizId_ == nullptr && return this->mrType_ == nullptr
        && return this->projectId_ == nullptr && return this->reviewers_ == nullptr && return this->sourceBranch_ == nullptr && return this->sourceProjectId_ == nullptr && return this->status_ == nullptr
        && return this->subscribers_ == nullptr && return this->supportMergeFastForwardOnly_ == nullptr && return this->targetBranch_ == nullptr && return this->targetProjectId_ == nullptr && return this->title_ == nullptr
        && return this->updateTime_ == nullptr && return this->webUrl_ == nullptr; };
    // ahead Field Functions 
    bool hasAhead() const { return this->ahead_ != nullptr;};
    void deleteAhead() { this->ahead_ = nullptr;};
    inline int32_t ahead() const { DARABONBA_PTR_GET_DEFAULT(ahead_, 0) };
    inline CreateMergeRequestResponseBodyResult& setAhead(int32_t ahead) { DARABONBA_PTR_SET_VALUE(ahead_, ahead) };


    // allRequirementsPass Field Functions 
    bool hasAllRequirementsPass() const { return this->allRequirementsPass_ != nullptr;};
    void deleteAllRequirementsPass() { this->allRequirementsPass_ = nullptr;};
    inline bool allRequirementsPass() const { DARABONBA_PTR_GET_DEFAULT(allRequirementsPass_, false) };
    inline CreateMergeRequestResponseBodyResult& setAllRequirementsPass(bool allRequirementsPass) { DARABONBA_PTR_SET_VALUE(allRequirementsPass_, allRequirementsPass) };


    // author Field Functions 
    bool hasAuthor() const { return this->author_ != nullptr;};
    void deleteAuthor() { this->author_ = nullptr;};
    inline const Models::CreateMergeRequestResponseBodyResultAuthor & author() const { DARABONBA_PTR_GET_CONST(author_, Models::CreateMergeRequestResponseBodyResultAuthor) };
    inline Models::CreateMergeRequestResponseBodyResultAuthor author() { DARABONBA_PTR_GET(author_, Models::CreateMergeRequestResponseBodyResultAuthor) };
    inline CreateMergeRequestResponseBodyResult& setAuthor(const Models::CreateMergeRequestResponseBodyResultAuthor & author) { DARABONBA_PTR_SET_VALUE(author_, author) };
    inline CreateMergeRequestResponseBodyResult& setAuthor(Models::CreateMergeRequestResponseBodyResultAuthor && author) { DARABONBA_PTR_SET_RVALUE(author_, author) };


    // behind Field Functions 
    bool hasBehind() const { return this->behind_ != nullptr;};
    void deleteBehind() { this->behind_ = nullptr;};
    inline int32_t behind() const { DARABONBA_PTR_GET_DEFAULT(behind_, 0) };
    inline CreateMergeRequestResponseBodyResult& setBehind(int32_t behind) { DARABONBA_PTR_SET_VALUE(behind_, behind) };


    // createFrom Field Functions 
    bool hasCreateFrom() const { return this->createFrom_ != nullptr;};
    void deleteCreateFrom() { this->createFrom_ = nullptr;};
    inline string createFrom() const { DARABONBA_PTR_GET_DEFAULT(createFrom_, "") };
    inline CreateMergeRequestResponseBodyResult& setCreateFrom(string createFrom) { DARABONBA_PTR_SET_VALUE(createFrom_, createFrom) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline CreateMergeRequestResponseBodyResult& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateMergeRequestResponseBodyResult& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // detailUrl Field Functions 
    bool hasDetailUrl() const { return this->detailUrl_ != nullptr;};
    void deleteDetailUrl() { this->detailUrl_ = nullptr;};
    inline string detailUrl() const { DARABONBA_PTR_GET_DEFAULT(detailUrl_, "") };
    inline CreateMergeRequestResponseBodyResult& setDetailUrl(string detailUrl) { DARABONBA_PTR_SET_VALUE(detailUrl_, detailUrl) };


    // localId Field Functions 
    bool hasLocalId() const { return this->localId_ != nullptr;};
    void deleteLocalId() { this->localId_ = nullptr;};
    inline int64_t localId() const { DARABONBA_PTR_GET_DEFAULT(localId_, 0L) };
    inline CreateMergeRequestResponseBodyResult& setLocalId(int64_t localId) { DARABONBA_PTR_SET_VALUE(localId_, localId) };


    // mrBizId Field Functions 
    bool hasMrBizId() const { return this->mrBizId_ != nullptr;};
    void deleteMrBizId() { this->mrBizId_ = nullptr;};
    inline string mrBizId() const { DARABONBA_PTR_GET_DEFAULT(mrBizId_, "") };
    inline CreateMergeRequestResponseBodyResult& setMrBizId(string mrBizId) { DARABONBA_PTR_SET_VALUE(mrBizId_, mrBizId) };


    // mrType Field Functions 
    bool hasMrType() const { return this->mrType_ != nullptr;};
    void deleteMrType() { this->mrType_ = nullptr;};
    inline string mrType() const { DARABONBA_PTR_GET_DEFAULT(mrType_, "") };
    inline CreateMergeRequestResponseBodyResult& setMrType(string mrType) { DARABONBA_PTR_SET_VALUE(mrType_, mrType) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline CreateMergeRequestResponseBodyResult& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // reviewers Field Functions 
    bool hasReviewers() const { return this->reviewers_ != nullptr;};
    void deleteReviewers() { this->reviewers_ = nullptr;};
    inline const vector<Models::CreateMergeRequestResponseBodyResultReviewers> & reviewers() const { DARABONBA_PTR_GET_CONST(reviewers_, vector<Models::CreateMergeRequestResponseBodyResultReviewers>) };
    inline vector<Models::CreateMergeRequestResponseBodyResultReviewers> reviewers() { DARABONBA_PTR_GET(reviewers_, vector<Models::CreateMergeRequestResponseBodyResultReviewers>) };
    inline CreateMergeRequestResponseBodyResult& setReviewers(const vector<Models::CreateMergeRequestResponseBodyResultReviewers> & reviewers) { DARABONBA_PTR_SET_VALUE(reviewers_, reviewers) };
    inline CreateMergeRequestResponseBodyResult& setReviewers(vector<Models::CreateMergeRequestResponseBodyResultReviewers> && reviewers) { DARABONBA_PTR_SET_RVALUE(reviewers_, reviewers) };


    // sourceBranch Field Functions 
    bool hasSourceBranch() const { return this->sourceBranch_ != nullptr;};
    void deleteSourceBranch() { this->sourceBranch_ = nullptr;};
    inline string sourceBranch() const { DARABONBA_PTR_GET_DEFAULT(sourceBranch_, "") };
    inline CreateMergeRequestResponseBodyResult& setSourceBranch(string sourceBranch) { DARABONBA_PTR_SET_VALUE(sourceBranch_, sourceBranch) };


    // sourceProjectId Field Functions 
    bool hasSourceProjectId() const { return this->sourceProjectId_ != nullptr;};
    void deleteSourceProjectId() { this->sourceProjectId_ = nullptr;};
    inline int64_t sourceProjectId() const { DARABONBA_PTR_GET_DEFAULT(sourceProjectId_, 0L) };
    inline CreateMergeRequestResponseBodyResult& setSourceProjectId(int64_t sourceProjectId) { DARABONBA_PTR_SET_VALUE(sourceProjectId_, sourceProjectId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline CreateMergeRequestResponseBodyResult& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // subscribers Field Functions 
    bool hasSubscribers() const { return this->subscribers_ != nullptr;};
    void deleteSubscribers() { this->subscribers_ = nullptr;};
    inline const vector<Models::CreateMergeRequestResponseBodyResultSubscribers> & subscribers() const { DARABONBA_PTR_GET_CONST(subscribers_, vector<Models::CreateMergeRequestResponseBodyResultSubscribers>) };
    inline vector<Models::CreateMergeRequestResponseBodyResultSubscribers> subscribers() { DARABONBA_PTR_GET(subscribers_, vector<Models::CreateMergeRequestResponseBodyResultSubscribers>) };
    inline CreateMergeRequestResponseBodyResult& setSubscribers(const vector<Models::CreateMergeRequestResponseBodyResultSubscribers> & subscribers) { DARABONBA_PTR_SET_VALUE(subscribers_, subscribers) };
    inline CreateMergeRequestResponseBodyResult& setSubscribers(vector<Models::CreateMergeRequestResponseBodyResultSubscribers> && subscribers) { DARABONBA_PTR_SET_RVALUE(subscribers_, subscribers) };


    // supportMergeFastForwardOnly Field Functions 
    bool hasSupportMergeFastForwardOnly() const { return this->supportMergeFastForwardOnly_ != nullptr;};
    void deleteSupportMergeFastForwardOnly() { this->supportMergeFastForwardOnly_ = nullptr;};
    inline bool supportMergeFastForwardOnly() const { DARABONBA_PTR_GET_DEFAULT(supportMergeFastForwardOnly_, false) };
    inline CreateMergeRequestResponseBodyResult& setSupportMergeFastForwardOnly(bool supportMergeFastForwardOnly) { DARABONBA_PTR_SET_VALUE(supportMergeFastForwardOnly_, supportMergeFastForwardOnly) };


    // targetBranch Field Functions 
    bool hasTargetBranch() const { return this->targetBranch_ != nullptr;};
    void deleteTargetBranch() { this->targetBranch_ = nullptr;};
    inline string targetBranch() const { DARABONBA_PTR_GET_DEFAULT(targetBranch_, "") };
    inline CreateMergeRequestResponseBodyResult& setTargetBranch(string targetBranch) { DARABONBA_PTR_SET_VALUE(targetBranch_, targetBranch) };


    // targetProjectId Field Functions 
    bool hasTargetProjectId() const { return this->targetProjectId_ != nullptr;};
    void deleteTargetProjectId() { this->targetProjectId_ = nullptr;};
    inline int64_t targetProjectId() const { DARABONBA_PTR_GET_DEFAULT(targetProjectId_, 0L) };
    inline CreateMergeRequestResponseBodyResult& setTargetProjectId(int64_t targetProjectId) { DARABONBA_PTR_SET_VALUE(targetProjectId_, targetProjectId) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline CreateMergeRequestResponseBodyResult& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline CreateMergeRequestResponseBodyResult& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // webUrl Field Functions 
    bool hasWebUrl() const { return this->webUrl_ != nullptr;};
    void deleteWebUrl() { this->webUrl_ = nullptr;};
    inline string webUrl() const { DARABONBA_PTR_GET_DEFAULT(webUrl_, "") };
    inline CreateMergeRequestResponseBodyResult& setWebUrl(string webUrl) { DARABONBA_PTR_SET_VALUE(webUrl_, webUrl) };


  protected:
    std::shared_ptr<int32_t> ahead_ = nullptr;
    std::shared_ptr<bool> allRequirementsPass_ = nullptr;
    std::shared_ptr<Models::CreateMergeRequestResponseBodyResultAuthor> author_ = nullptr;
    std::shared_ptr<int32_t> behind_ = nullptr;
    std::shared_ptr<string> createFrom_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> detailUrl_ = nullptr;
    std::shared_ptr<int64_t> localId_ = nullptr;
    std::shared_ptr<string> mrBizId_ = nullptr;
    std::shared_ptr<string> mrType_ = nullptr;
    std::shared_ptr<int64_t> projectId_ = nullptr;
    std::shared_ptr<vector<Models::CreateMergeRequestResponseBodyResultReviewers>> reviewers_ = nullptr;
    std::shared_ptr<string> sourceBranch_ = nullptr;
    std::shared_ptr<int64_t> sourceProjectId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<vector<Models::CreateMergeRequestResponseBodyResultSubscribers>> subscribers_ = nullptr;
    std::shared_ptr<bool> supportMergeFastForwardOnly_ = nullptr;
    std::shared_ptr<string> targetBranch_ = nullptr;
    std::shared_ptr<int64_t> targetProjectId_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
    std::shared_ptr<string> updateTime_ = nullptr;
    std::shared_ptr<string> webUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
