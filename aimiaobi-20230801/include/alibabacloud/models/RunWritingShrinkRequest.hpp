// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNWRITINGSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNWRITINGSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunWritingShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunWritingShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OriginSessionId, originSessionId_);
      DARABONBA_PTR_TO_JSON(Prompt, prompt_);
      DARABONBA_PTR_TO_JSON(ReferenceData, referenceDataShrink_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_TO_JSON(WritingConfig, writingConfigShrink_);
    };
    friend void from_json(const Darabonba::Json& j, RunWritingShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OriginSessionId, originSessionId_);
      DARABONBA_PTR_FROM_JSON(Prompt, prompt_);
      DARABONBA_PTR_FROM_JSON(ReferenceData, referenceDataShrink_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_FROM_JSON(WritingConfig, writingConfigShrink_);
    };
    RunWritingShrinkRequest() = default ;
    RunWritingShrinkRequest(const RunWritingShrinkRequest &) = default ;
    RunWritingShrinkRequest(RunWritingShrinkRequest &&) = default ;
    RunWritingShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunWritingShrinkRequest() = default ;
    RunWritingShrinkRequest& operator=(const RunWritingShrinkRequest &) = default ;
    RunWritingShrinkRequest& operator=(RunWritingShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->originSessionId_ == nullptr
        && return this->prompt_ == nullptr && return this->referenceDataShrink_ == nullptr && return this->sessionId_ == nullptr && return this->taskId_ == nullptr && return this->workspaceId_ == nullptr
        && return this->writingConfigShrink_ == nullptr; };
    // originSessionId Field Functions 
    bool hasOriginSessionId() const { return this->originSessionId_ != nullptr;};
    void deleteOriginSessionId() { this->originSessionId_ = nullptr;};
    inline string originSessionId() const { DARABONBA_PTR_GET_DEFAULT(originSessionId_, "") };
    inline RunWritingShrinkRequest& setOriginSessionId(string originSessionId) { DARABONBA_PTR_SET_VALUE(originSessionId_, originSessionId) };


    // prompt Field Functions 
    bool hasPrompt() const { return this->prompt_ != nullptr;};
    void deletePrompt() { this->prompt_ = nullptr;};
    inline string prompt() const { DARABONBA_PTR_GET_DEFAULT(prompt_, "") };
    inline RunWritingShrinkRequest& setPrompt(string prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };


    // referenceDataShrink Field Functions 
    bool hasReferenceDataShrink() const { return this->referenceDataShrink_ != nullptr;};
    void deleteReferenceDataShrink() { this->referenceDataShrink_ = nullptr;};
    inline string referenceDataShrink() const { DARABONBA_PTR_GET_DEFAULT(referenceDataShrink_, "") };
    inline RunWritingShrinkRequest& setReferenceDataShrink(string referenceDataShrink) { DARABONBA_PTR_SET_VALUE(referenceDataShrink_, referenceDataShrink) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline RunWritingShrinkRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline RunWritingShrinkRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline RunWritingShrinkRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    // writingConfigShrink Field Functions 
    bool hasWritingConfigShrink() const { return this->writingConfigShrink_ != nullptr;};
    void deleteWritingConfigShrink() { this->writingConfigShrink_ = nullptr;};
    inline string writingConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(writingConfigShrink_, "") };
    inline RunWritingShrinkRequest& setWritingConfigShrink(string writingConfigShrink) { DARABONBA_PTR_SET_VALUE(writingConfigShrink_, writingConfigShrink) };


  protected:
    std::shared_ptr<string> originSessionId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> prompt_ = nullptr;
    std::shared_ptr<string> referenceDataShrink_ = nullptr;
    std::shared_ptr<string> sessionId_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
    std::shared_ptr<string> writingConfigShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
