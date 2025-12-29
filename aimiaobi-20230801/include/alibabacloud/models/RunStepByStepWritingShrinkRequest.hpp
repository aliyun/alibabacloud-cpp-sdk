// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSTEPBYSTEPWRITINGSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNSTEPBYSTEPWRITINGSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunStepByStepWritingShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunStepByStepWritingShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OriginSessionId, originSessionId_);
      DARABONBA_PTR_TO_JSON(Prompt, prompt_);
      DARABONBA_PTR_TO_JSON(ReferenceData, referenceDataShrink_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_TO_JSON(WritingConfig, writingConfigShrink_);
    };
    friend void from_json(const Darabonba::Json& j, RunStepByStepWritingShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OriginSessionId, originSessionId_);
      DARABONBA_PTR_FROM_JSON(Prompt, prompt_);
      DARABONBA_PTR_FROM_JSON(ReferenceData, referenceDataShrink_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_FROM_JSON(WritingConfig, writingConfigShrink_);
    };
    RunStepByStepWritingShrinkRequest() = default ;
    RunStepByStepWritingShrinkRequest(const RunStepByStepWritingShrinkRequest &) = default ;
    RunStepByStepWritingShrinkRequest(RunStepByStepWritingShrinkRequest &&) = default ;
    RunStepByStepWritingShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunStepByStepWritingShrinkRequest() = default ;
    RunStepByStepWritingShrinkRequest& operator=(const RunStepByStepWritingShrinkRequest &) = default ;
    RunStepByStepWritingShrinkRequest& operator=(RunStepByStepWritingShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->originSessionId_ == nullptr
        && this->prompt_ == nullptr && this->referenceDataShrink_ == nullptr && this->sessionId_ == nullptr && this->taskId_ == nullptr && this->workspaceId_ == nullptr
        && this->writingConfigShrink_ == nullptr; };
    // originSessionId Field Functions 
    bool hasOriginSessionId() const { return this->originSessionId_ != nullptr;};
    void deleteOriginSessionId() { this->originSessionId_ = nullptr;};
    inline string getOriginSessionId() const { DARABONBA_PTR_GET_DEFAULT(originSessionId_, "") };
    inline RunStepByStepWritingShrinkRequest& setOriginSessionId(string originSessionId) { DARABONBA_PTR_SET_VALUE(originSessionId_, originSessionId) };


    // prompt Field Functions 
    bool hasPrompt() const { return this->prompt_ != nullptr;};
    void deletePrompt() { this->prompt_ = nullptr;};
    inline string getPrompt() const { DARABONBA_PTR_GET_DEFAULT(prompt_, "") };
    inline RunStepByStepWritingShrinkRequest& setPrompt(string prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };


    // referenceDataShrink Field Functions 
    bool hasReferenceDataShrink() const { return this->referenceDataShrink_ != nullptr;};
    void deleteReferenceDataShrink() { this->referenceDataShrink_ = nullptr;};
    inline string getReferenceDataShrink() const { DARABONBA_PTR_GET_DEFAULT(referenceDataShrink_, "") };
    inline RunStepByStepWritingShrinkRequest& setReferenceDataShrink(string referenceDataShrink) { DARABONBA_PTR_SET_VALUE(referenceDataShrink_, referenceDataShrink) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline RunStepByStepWritingShrinkRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline RunStepByStepWritingShrinkRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline RunStepByStepWritingShrinkRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    // writingConfigShrink Field Functions 
    bool hasWritingConfigShrink() const { return this->writingConfigShrink_ != nullptr;};
    void deleteWritingConfigShrink() { this->writingConfigShrink_ = nullptr;};
    inline string getWritingConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(writingConfigShrink_, "") };
    inline RunStepByStepWritingShrinkRequest& setWritingConfigShrink(string writingConfigShrink) { DARABONBA_PTR_SET_VALUE(writingConfigShrink_, writingConfigShrink) };


  protected:
    shared_ptr<string> originSessionId_ {};
    // This parameter is required.
    shared_ptr<string> prompt_ {};
    shared_ptr<string> referenceDataShrink_ {};
    shared_ptr<string> sessionId_ {};
    shared_ptr<string> taskId_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
    shared_ptr<string> writingConfigShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
