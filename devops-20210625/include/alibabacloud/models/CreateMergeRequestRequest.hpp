// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMERGEREQUESTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMERGEREQUESTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class CreateMergeRequestRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMergeRequestRequest& obj) { 
      DARABONBA_PTR_TO_JSON(accessToken, accessToken_);
      DARABONBA_PTR_TO_JSON(createFrom, createFrom_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(reviewerIds, reviewerIds_);
      DARABONBA_PTR_TO_JSON(sourceBranch, sourceBranch_);
      DARABONBA_PTR_TO_JSON(sourceProjectId, sourceProjectId_);
      DARABONBA_PTR_TO_JSON(targetBranch, targetBranch_);
      DARABONBA_PTR_TO_JSON(targetProjectId, targetProjectId_);
      DARABONBA_PTR_TO_JSON(title, title_);
      DARABONBA_PTR_TO_JSON(workItemIds, workItemIds_);
      DARABONBA_PTR_TO_JSON(organizationId, organizationId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMergeRequestRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(accessToken, accessToken_);
      DARABONBA_PTR_FROM_JSON(createFrom, createFrom_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(reviewerIds, reviewerIds_);
      DARABONBA_PTR_FROM_JSON(sourceBranch, sourceBranch_);
      DARABONBA_PTR_FROM_JSON(sourceProjectId, sourceProjectId_);
      DARABONBA_PTR_FROM_JSON(targetBranch, targetBranch_);
      DARABONBA_PTR_FROM_JSON(targetProjectId, targetProjectId_);
      DARABONBA_PTR_FROM_JSON(title, title_);
      DARABONBA_PTR_FROM_JSON(workItemIds, workItemIds_);
      DARABONBA_PTR_FROM_JSON(organizationId, organizationId_);
    };
    CreateMergeRequestRequest() = default ;
    CreateMergeRequestRequest(const CreateMergeRequestRequest &) = default ;
    CreateMergeRequestRequest(CreateMergeRequestRequest &&) = default ;
    CreateMergeRequestRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMergeRequestRequest() = default ;
    CreateMergeRequestRequest& operator=(const CreateMergeRequestRequest &) = default ;
    CreateMergeRequestRequest& operator=(CreateMergeRequestRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessToken_ == nullptr
        && return this->createFrom_ == nullptr && return this->description_ == nullptr && return this->reviewerIds_ == nullptr && return this->sourceBranch_ == nullptr && return this->sourceProjectId_ == nullptr
        && return this->targetBranch_ == nullptr && return this->targetProjectId_ == nullptr && return this->title_ == nullptr && return this->workItemIds_ == nullptr && return this->organizationId_ == nullptr; };
    // accessToken Field Functions 
    bool hasAccessToken() const { return this->accessToken_ != nullptr;};
    void deleteAccessToken() { this->accessToken_ = nullptr;};
    inline string accessToken() const { DARABONBA_PTR_GET_DEFAULT(accessToken_, "") };
    inline CreateMergeRequestRequest& setAccessToken(string accessToken) { DARABONBA_PTR_SET_VALUE(accessToken_, accessToken) };


    // createFrom Field Functions 
    bool hasCreateFrom() const { return this->createFrom_ != nullptr;};
    void deleteCreateFrom() { this->createFrom_ = nullptr;};
    inline string createFrom() const { DARABONBA_PTR_GET_DEFAULT(createFrom_, "") };
    inline CreateMergeRequestRequest& setCreateFrom(string createFrom) { DARABONBA_PTR_SET_VALUE(createFrom_, createFrom) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateMergeRequestRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // reviewerIds Field Functions 
    bool hasReviewerIds() const { return this->reviewerIds_ != nullptr;};
    void deleteReviewerIds() { this->reviewerIds_ = nullptr;};
    inline const vector<string> & reviewerIds() const { DARABONBA_PTR_GET_CONST(reviewerIds_, vector<string>) };
    inline vector<string> reviewerIds() { DARABONBA_PTR_GET(reviewerIds_, vector<string>) };
    inline CreateMergeRequestRequest& setReviewerIds(const vector<string> & reviewerIds) { DARABONBA_PTR_SET_VALUE(reviewerIds_, reviewerIds) };
    inline CreateMergeRequestRequest& setReviewerIds(vector<string> && reviewerIds) { DARABONBA_PTR_SET_RVALUE(reviewerIds_, reviewerIds) };


    // sourceBranch Field Functions 
    bool hasSourceBranch() const { return this->sourceBranch_ != nullptr;};
    void deleteSourceBranch() { this->sourceBranch_ = nullptr;};
    inline string sourceBranch() const { DARABONBA_PTR_GET_DEFAULT(sourceBranch_, "") };
    inline CreateMergeRequestRequest& setSourceBranch(string sourceBranch) { DARABONBA_PTR_SET_VALUE(sourceBranch_, sourceBranch) };


    // sourceProjectId Field Functions 
    bool hasSourceProjectId() const { return this->sourceProjectId_ != nullptr;};
    void deleteSourceProjectId() { this->sourceProjectId_ = nullptr;};
    inline int64_t sourceProjectId() const { DARABONBA_PTR_GET_DEFAULT(sourceProjectId_, 0L) };
    inline CreateMergeRequestRequest& setSourceProjectId(int64_t sourceProjectId) { DARABONBA_PTR_SET_VALUE(sourceProjectId_, sourceProjectId) };


    // targetBranch Field Functions 
    bool hasTargetBranch() const { return this->targetBranch_ != nullptr;};
    void deleteTargetBranch() { this->targetBranch_ = nullptr;};
    inline string targetBranch() const { DARABONBA_PTR_GET_DEFAULT(targetBranch_, "") };
    inline CreateMergeRequestRequest& setTargetBranch(string targetBranch) { DARABONBA_PTR_SET_VALUE(targetBranch_, targetBranch) };


    // targetProjectId Field Functions 
    bool hasTargetProjectId() const { return this->targetProjectId_ != nullptr;};
    void deleteTargetProjectId() { this->targetProjectId_ = nullptr;};
    inline int64_t targetProjectId() const { DARABONBA_PTR_GET_DEFAULT(targetProjectId_, 0L) };
    inline CreateMergeRequestRequest& setTargetProjectId(int64_t targetProjectId) { DARABONBA_PTR_SET_VALUE(targetProjectId_, targetProjectId) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline CreateMergeRequestRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // workItemIds Field Functions 
    bool hasWorkItemIds() const { return this->workItemIds_ != nullptr;};
    void deleteWorkItemIds() { this->workItemIds_ = nullptr;};
    inline string workItemIds() const { DARABONBA_PTR_GET_DEFAULT(workItemIds_, "") };
    inline CreateMergeRequestRequest& setWorkItemIds(string workItemIds) { DARABONBA_PTR_SET_VALUE(workItemIds_, workItemIds) };


    // organizationId Field Functions 
    bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
    void deleteOrganizationId() { this->organizationId_ = nullptr;};
    inline string organizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
    inline CreateMergeRequestRequest& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


  protected:
    std::shared_ptr<string> accessToken_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> createFrom_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<vector<string>> reviewerIds_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> sourceBranch_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> sourceProjectId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> targetBranch_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> targetProjectId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> title_ = nullptr;
    std::shared_ptr<string> workItemIds_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> organizationId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
