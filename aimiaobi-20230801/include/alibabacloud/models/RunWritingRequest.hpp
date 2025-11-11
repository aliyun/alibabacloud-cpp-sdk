// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNWRITINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNWRITINGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunWritingRequestReferenceData.hpp>
#include <alibabacloud/models/RunWritingRequestWritingConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunWritingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunWritingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OriginSessionId, originSessionId_);
      DARABONBA_PTR_TO_JSON(Prompt, prompt_);
      DARABONBA_PTR_TO_JSON(ReferenceData, referenceData_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_TO_JSON(WritingConfig, writingConfig_);
    };
    friend void from_json(const Darabonba::Json& j, RunWritingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OriginSessionId, originSessionId_);
      DARABONBA_PTR_FROM_JSON(Prompt, prompt_);
      DARABONBA_PTR_FROM_JSON(ReferenceData, referenceData_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_FROM_JSON(WritingConfig, writingConfig_);
    };
    RunWritingRequest() = default ;
    RunWritingRequest(const RunWritingRequest &) = default ;
    RunWritingRequest(RunWritingRequest &&) = default ;
    RunWritingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunWritingRequest() = default ;
    RunWritingRequest& operator=(const RunWritingRequest &) = default ;
    RunWritingRequest& operator=(RunWritingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->originSessionId_ == nullptr
        && return this->prompt_ == nullptr && return this->referenceData_ == nullptr && return this->sessionId_ == nullptr && return this->taskId_ == nullptr && return this->workspaceId_ == nullptr
        && return this->writingConfig_ == nullptr; };
    // originSessionId Field Functions 
    bool hasOriginSessionId() const { return this->originSessionId_ != nullptr;};
    void deleteOriginSessionId() { this->originSessionId_ = nullptr;};
    inline string originSessionId() const { DARABONBA_PTR_GET_DEFAULT(originSessionId_, "") };
    inline RunWritingRequest& setOriginSessionId(string originSessionId) { DARABONBA_PTR_SET_VALUE(originSessionId_, originSessionId) };


    // prompt Field Functions 
    bool hasPrompt() const { return this->prompt_ != nullptr;};
    void deletePrompt() { this->prompt_ = nullptr;};
    inline string prompt() const { DARABONBA_PTR_GET_DEFAULT(prompt_, "") };
    inline RunWritingRequest& setPrompt(string prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };


    // referenceData Field Functions 
    bool hasReferenceData() const { return this->referenceData_ != nullptr;};
    void deleteReferenceData() { this->referenceData_ = nullptr;};
    inline const RunWritingRequestReferenceData & referenceData() const { DARABONBA_PTR_GET_CONST(referenceData_, RunWritingRequestReferenceData) };
    inline RunWritingRequestReferenceData referenceData() { DARABONBA_PTR_GET(referenceData_, RunWritingRequestReferenceData) };
    inline RunWritingRequest& setReferenceData(const RunWritingRequestReferenceData & referenceData) { DARABONBA_PTR_SET_VALUE(referenceData_, referenceData) };
    inline RunWritingRequest& setReferenceData(RunWritingRequestReferenceData && referenceData) { DARABONBA_PTR_SET_RVALUE(referenceData_, referenceData) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline RunWritingRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline RunWritingRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline RunWritingRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    // writingConfig Field Functions 
    bool hasWritingConfig() const { return this->writingConfig_ != nullptr;};
    void deleteWritingConfig() { this->writingConfig_ = nullptr;};
    inline const RunWritingRequestWritingConfig & writingConfig() const { DARABONBA_PTR_GET_CONST(writingConfig_, RunWritingRequestWritingConfig) };
    inline RunWritingRequestWritingConfig writingConfig() { DARABONBA_PTR_GET(writingConfig_, RunWritingRequestWritingConfig) };
    inline RunWritingRequest& setWritingConfig(const RunWritingRequestWritingConfig & writingConfig) { DARABONBA_PTR_SET_VALUE(writingConfig_, writingConfig) };
    inline RunWritingRequest& setWritingConfig(RunWritingRequestWritingConfig && writingConfig) { DARABONBA_PTR_SET_RVALUE(writingConfig_, writingConfig) };


  protected:
    std::shared_ptr<string> originSessionId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> prompt_ = nullptr;
    std::shared_ptr<RunWritingRequestReferenceData> referenceData_ = nullptr;
    std::shared_ptr<string> sessionId_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
    std::shared_ptr<RunWritingRequestWritingConfig> writingConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
