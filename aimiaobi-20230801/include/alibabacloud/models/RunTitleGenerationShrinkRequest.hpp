// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNTITLEGENERATIONSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNTITLEGENERATIONSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunTitleGenerationShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunTitleGenerationShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeduplicatedTitles, deduplicatedTitlesShrink_);
      DARABONBA_PTR_TO_JSON(ReferenceData, referenceDataShrink_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TitleCount, titleCount_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, RunTitleGenerationShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeduplicatedTitles, deduplicatedTitlesShrink_);
      DARABONBA_PTR_FROM_JSON(ReferenceData, referenceDataShrink_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TitleCount, titleCount_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    RunTitleGenerationShrinkRequest() = default ;
    RunTitleGenerationShrinkRequest(const RunTitleGenerationShrinkRequest &) = default ;
    RunTitleGenerationShrinkRequest(RunTitleGenerationShrinkRequest &&) = default ;
    RunTitleGenerationShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunTitleGenerationShrinkRequest() = default ;
    RunTitleGenerationShrinkRequest& operator=(const RunTitleGenerationShrinkRequest &) = default ;
    RunTitleGenerationShrinkRequest& operator=(RunTitleGenerationShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deduplicatedTitlesShrink_ == nullptr
        && this->referenceDataShrink_ == nullptr && this->taskId_ == nullptr && this->titleCount_ == nullptr && this->workspaceId_ == nullptr; };
    // deduplicatedTitlesShrink Field Functions 
    bool hasDeduplicatedTitlesShrink() const { return this->deduplicatedTitlesShrink_ != nullptr;};
    void deleteDeduplicatedTitlesShrink() { this->deduplicatedTitlesShrink_ = nullptr;};
    inline string getDeduplicatedTitlesShrink() const { DARABONBA_PTR_GET_DEFAULT(deduplicatedTitlesShrink_, "") };
    inline RunTitleGenerationShrinkRequest& setDeduplicatedTitlesShrink(string deduplicatedTitlesShrink) { DARABONBA_PTR_SET_VALUE(deduplicatedTitlesShrink_, deduplicatedTitlesShrink) };


    // referenceDataShrink Field Functions 
    bool hasReferenceDataShrink() const { return this->referenceDataShrink_ != nullptr;};
    void deleteReferenceDataShrink() { this->referenceDataShrink_ = nullptr;};
    inline string getReferenceDataShrink() const { DARABONBA_PTR_GET_DEFAULT(referenceDataShrink_, "") };
    inline RunTitleGenerationShrinkRequest& setReferenceDataShrink(string referenceDataShrink) { DARABONBA_PTR_SET_VALUE(referenceDataShrink_, referenceDataShrink) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline RunTitleGenerationShrinkRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // titleCount Field Functions 
    bool hasTitleCount() const { return this->titleCount_ != nullptr;};
    void deleteTitleCount() { this->titleCount_ = nullptr;};
    inline string getTitleCount() const { DARABONBA_PTR_GET_DEFAULT(titleCount_, "") };
    inline RunTitleGenerationShrinkRequest& setTitleCount(string titleCount) { DARABONBA_PTR_SET_VALUE(titleCount_, titleCount) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline RunTitleGenerationShrinkRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<string> deduplicatedTitlesShrink_ {};
    // This parameter is required.
    shared_ptr<string> referenceDataShrink_ {};
    shared_ptr<string> taskId_ {};
    shared_ptr<string> titleCount_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
