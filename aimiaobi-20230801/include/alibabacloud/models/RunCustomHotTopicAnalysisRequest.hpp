// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNCUSTOMHOTTOPICANALYSISREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNCUSTOMHOTTOPICANALYSISREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunCustomHotTopicAnalysisRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunCustomHotTopicAnalysisRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AskUser, askUser_);
      DARABONBA_PTR_TO_JSON(ForceAnalysisExistsTopic, forceAnalysisExistsTopic_);
      DARABONBA_PTR_TO_JSON(Prompt, prompt_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(UserBack, userBack_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, RunCustomHotTopicAnalysisRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AskUser, askUser_);
      DARABONBA_PTR_FROM_JSON(ForceAnalysisExistsTopic, forceAnalysisExistsTopic_);
      DARABONBA_PTR_FROM_JSON(Prompt, prompt_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(UserBack, userBack_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    RunCustomHotTopicAnalysisRequest() = default ;
    RunCustomHotTopicAnalysisRequest(const RunCustomHotTopicAnalysisRequest &) = default ;
    RunCustomHotTopicAnalysisRequest(RunCustomHotTopicAnalysisRequest &&) = default ;
    RunCustomHotTopicAnalysisRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunCustomHotTopicAnalysisRequest() = default ;
    RunCustomHotTopicAnalysisRequest& operator=(const RunCustomHotTopicAnalysisRequest &) = default ;
    RunCustomHotTopicAnalysisRequest& operator=(RunCustomHotTopicAnalysisRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->askUser_ != nullptr
        && this->forceAnalysisExistsTopic_ != nullptr && this->prompt_ != nullptr && this->sessionId_ != nullptr && this->taskId_ != nullptr && this->userBack_ != nullptr
        && this->workspaceId_ != nullptr; };
    // askUser Field Functions 
    bool hasAskUser() const { return this->askUser_ != nullptr;};
    void deleteAskUser() { this->askUser_ = nullptr;};
    inline string askUser() const { DARABONBA_PTR_GET_DEFAULT(askUser_, "") };
    inline RunCustomHotTopicAnalysisRequest& setAskUser(string askUser) { DARABONBA_PTR_SET_VALUE(askUser_, askUser) };


    // forceAnalysisExistsTopic Field Functions 
    bool hasForceAnalysisExistsTopic() const { return this->forceAnalysisExistsTopic_ != nullptr;};
    void deleteForceAnalysisExistsTopic() { this->forceAnalysisExistsTopic_ = nullptr;};
    inline bool forceAnalysisExistsTopic() const { DARABONBA_PTR_GET_DEFAULT(forceAnalysisExistsTopic_, false) };
    inline RunCustomHotTopicAnalysisRequest& setForceAnalysisExistsTopic(bool forceAnalysisExistsTopic) { DARABONBA_PTR_SET_VALUE(forceAnalysisExistsTopic_, forceAnalysisExistsTopic) };


    // prompt Field Functions 
    bool hasPrompt() const { return this->prompt_ != nullptr;};
    void deletePrompt() { this->prompt_ = nullptr;};
    inline string prompt() const { DARABONBA_PTR_GET_DEFAULT(prompt_, "") };
    inline RunCustomHotTopicAnalysisRequest& setPrompt(string prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline RunCustomHotTopicAnalysisRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline RunCustomHotTopicAnalysisRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // userBack Field Functions 
    bool hasUserBack() const { return this->userBack_ != nullptr;};
    void deleteUserBack() { this->userBack_ = nullptr;};
    inline string userBack() const { DARABONBA_PTR_GET_DEFAULT(userBack_, "") };
    inline RunCustomHotTopicAnalysisRequest& setUserBack(string userBack) { DARABONBA_PTR_SET_VALUE(userBack_, userBack) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline RunCustomHotTopicAnalysisRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<string> askUser_ = nullptr;
    std::shared_ptr<bool> forceAnalysisExistsTopic_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> prompt_ = nullptr;
    std::shared_ptr<string> sessionId_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
    std::shared_ptr<string> userBack_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
