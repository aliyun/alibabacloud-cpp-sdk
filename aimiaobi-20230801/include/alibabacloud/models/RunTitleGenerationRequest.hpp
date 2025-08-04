// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNTITLEGENERATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNTITLEGENERATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RunTitleGenerationRequestReferenceData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunTitleGenerationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunTitleGenerationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeduplicatedTitles, deduplicatedTitles_);
      DARABONBA_PTR_TO_JSON(ReferenceData, referenceData_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TitleCount, titleCount_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, RunTitleGenerationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeduplicatedTitles, deduplicatedTitles_);
      DARABONBA_PTR_FROM_JSON(ReferenceData, referenceData_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TitleCount, titleCount_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    RunTitleGenerationRequest() = default ;
    RunTitleGenerationRequest(const RunTitleGenerationRequest &) = default ;
    RunTitleGenerationRequest(RunTitleGenerationRequest &&) = default ;
    RunTitleGenerationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunTitleGenerationRequest() = default ;
    RunTitleGenerationRequest& operator=(const RunTitleGenerationRequest &) = default ;
    RunTitleGenerationRequest& operator=(RunTitleGenerationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deduplicatedTitles_ != nullptr
        && this->referenceData_ != nullptr && this->taskId_ != nullptr && this->titleCount_ != nullptr && this->workspaceId_ != nullptr; };
    // deduplicatedTitles Field Functions 
    bool hasDeduplicatedTitles() const { return this->deduplicatedTitles_ != nullptr;};
    void deleteDeduplicatedTitles() { this->deduplicatedTitles_ = nullptr;};
    inline const vector<string> & deduplicatedTitles() const { DARABONBA_PTR_GET_CONST(deduplicatedTitles_, vector<string>) };
    inline vector<string> deduplicatedTitles() { DARABONBA_PTR_GET(deduplicatedTitles_, vector<string>) };
    inline RunTitleGenerationRequest& setDeduplicatedTitles(const vector<string> & deduplicatedTitles) { DARABONBA_PTR_SET_VALUE(deduplicatedTitles_, deduplicatedTitles) };
    inline RunTitleGenerationRequest& setDeduplicatedTitles(vector<string> && deduplicatedTitles) { DARABONBA_PTR_SET_RVALUE(deduplicatedTitles_, deduplicatedTitles) };


    // referenceData Field Functions 
    bool hasReferenceData() const { return this->referenceData_ != nullptr;};
    void deleteReferenceData() { this->referenceData_ = nullptr;};
    inline const RunTitleGenerationRequestReferenceData & referenceData() const { DARABONBA_PTR_GET_CONST(referenceData_, RunTitleGenerationRequestReferenceData) };
    inline RunTitleGenerationRequestReferenceData referenceData() { DARABONBA_PTR_GET(referenceData_, RunTitleGenerationRequestReferenceData) };
    inline RunTitleGenerationRequest& setReferenceData(const RunTitleGenerationRequestReferenceData & referenceData) { DARABONBA_PTR_SET_VALUE(referenceData_, referenceData) };
    inline RunTitleGenerationRequest& setReferenceData(RunTitleGenerationRequestReferenceData && referenceData) { DARABONBA_PTR_SET_RVALUE(referenceData_, referenceData) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline RunTitleGenerationRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // titleCount Field Functions 
    bool hasTitleCount() const { return this->titleCount_ != nullptr;};
    void deleteTitleCount() { this->titleCount_ = nullptr;};
    inline string titleCount() const { DARABONBA_PTR_GET_DEFAULT(titleCount_, "") };
    inline RunTitleGenerationRequest& setTitleCount(string titleCount) { DARABONBA_PTR_SET_VALUE(titleCount_, titleCount) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline RunTitleGenerationRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<vector<string>> deduplicatedTitles_ = nullptr;
    // This parameter is required.
    std::shared_ptr<RunTitleGenerationRequestReferenceData> referenceData_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
    std::shared_ptr<string> titleCount_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
