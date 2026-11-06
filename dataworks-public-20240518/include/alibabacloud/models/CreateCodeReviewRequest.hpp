// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECODEREVIEWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECODEREVIEWREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateCodeReviewRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCodeReviewRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(PipelineRunId, pipelineRunId_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(Reviewers, reviewers_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCodeReviewRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(PipelineRunId, pipelineRunId_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(Reviewers, reviewers_);
    };
    CreateCodeReviewRequest() = default ;
    CreateCodeReviewRequest(const CreateCodeReviewRequest &) = default ;
    CreateCodeReviewRequest(CreateCodeReviewRequest &&) = default ;
    CreateCodeReviewRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCodeReviewRequest() = default ;
    CreateCodeReviewRequest& operator=(const CreateCodeReviewRequest &) = default ;
    CreateCodeReviewRequest& operator=(CreateCodeReviewRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->pipelineRunId_ == nullptr && this->projectId_ == nullptr && this->reviewers_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateCodeReviewRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // pipelineRunId Field Functions 
    bool hasPipelineRunId() const { return this->pipelineRunId_ != nullptr;};
    void deletePipelineRunId() { this->pipelineRunId_ = nullptr;};
    inline string getPipelineRunId() const { DARABONBA_PTR_GET_DEFAULT(pipelineRunId_, "") };
    inline CreateCodeReviewRequest& setPipelineRunId(string pipelineRunId) { DARABONBA_PTR_SET_VALUE(pipelineRunId_, pipelineRunId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline CreateCodeReviewRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // reviewers Field Functions 
    bool hasReviewers() const { return this->reviewers_ != nullptr;};
    void deleteReviewers() { this->reviewers_ = nullptr;};
    inline string getReviewers() const { DARABONBA_PTR_GET_DEFAULT(reviewers_, "") };
    inline CreateCodeReviewRequest& setReviewers(string reviewers) { DARABONBA_PTR_SET_VALUE(reviewers_, reviewers) };


  protected:
    // The description of the code review. The maximum length is 1,024 characters.
    shared_ptr<string> description_ {};
    // The ID of a single release pipeline.
    // 
    // This parameter is required.
    shared_ptr<string> pipelineRunId_ {};
    // The workspace ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> projectId_ {};
    // Specifies the reviewers. Separate multiple accounts with commas (,). At least one reviewer is required, and the maximum length is 512 characters after deduplication.
    // 
    // This parameter is required.
    shared_ptr<string> reviewers_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
