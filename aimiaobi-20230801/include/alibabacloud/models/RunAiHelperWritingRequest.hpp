// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNAIHELPERWRITINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNAIHELPERWRITINGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunAiHelperWritingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunAiHelperWritingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DistributeWriting, distributeWriting_);
      DARABONBA_PTR_TO_JSON(Prompt, prompt_);
      DARABONBA_PTR_TO_JSON(PromptMode, promptMode_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_TO_JSON(WritingParams, writingParams_);
      DARABONBA_PTR_TO_JSON(WritingScene, writingScene_);
      DARABONBA_PTR_TO_JSON(WritingStyle, writingStyle_);
    };
    friend void from_json(const Darabonba::Json& j, RunAiHelperWritingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DistributeWriting, distributeWriting_);
      DARABONBA_PTR_FROM_JSON(Prompt, prompt_);
      DARABONBA_PTR_FROM_JSON(PromptMode, promptMode_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_FROM_JSON(WritingParams, writingParams_);
      DARABONBA_PTR_FROM_JSON(WritingScene, writingScene_);
      DARABONBA_PTR_FROM_JSON(WritingStyle, writingStyle_);
    };
    RunAiHelperWritingRequest() = default ;
    RunAiHelperWritingRequest(const RunAiHelperWritingRequest &) = default ;
    RunAiHelperWritingRequest(RunAiHelperWritingRequest &&) = default ;
    RunAiHelperWritingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunAiHelperWritingRequest() = default ;
    RunAiHelperWritingRequest& operator=(const RunAiHelperWritingRequest &) = default ;
    RunAiHelperWritingRequest& operator=(RunAiHelperWritingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->distributeWriting_ == nullptr
        && this->prompt_ == nullptr && this->promptMode_ == nullptr && this->workspaceId_ == nullptr && this->writingParams_ == nullptr && this->writingScene_ == nullptr
        && this->writingStyle_ == nullptr; };
    // distributeWriting Field Functions 
    bool hasDistributeWriting() const { return this->distributeWriting_ != nullptr;};
    void deleteDistributeWriting() { this->distributeWriting_ = nullptr;};
    inline bool getDistributeWriting() const { DARABONBA_PTR_GET_DEFAULT(distributeWriting_, false) };
    inline RunAiHelperWritingRequest& setDistributeWriting(bool distributeWriting) { DARABONBA_PTR_SET_VALUE(distributeWriting_, distributeWriting) };


    // prompt Field Functions 
    bool hasPrompt() const { return this->prompt_ != nullptr;};
    void deletePrompt() { this->prompt_ = nullptr;};
    inline string getPrompt() const { DARABONBA_PTR_GET_DEFAULT(prompt_, "") };
    inline RunAiHelperWritingRequest& setPrompt(string prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };


    // promptMode Field Functions 
    bool hasPromptMode() const { return this->promptMode_ != nullptr;};
    void deletePromptMode() { this->promptMode_ = nullptr;};
    inline string getPromptMode() const { DARABONBA_PTR_GET_DEFAULT(promptMode_, "") };
    inline RunAiHelperWritingRequest& setPromptMode(string promptMode) { DARABONBA_PTR_SET_VALUE(promptMode_, promptMode) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline RunAiHelperWritingRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    // writingParams Field Functions 
    bool hasWritingParams() const { return this->writingParams_ != nullptr;};
    void deleteWritingParams() { this->writingParams_ = nullptr;};
    inline const map<string, string> & getWritingParams() const { DARABONBA_PTR_GET_CONST(writingParams_, map<string, string>) };
    inline map<string, string> getWritingParams() { DARABONBA_PTR_GET(writingParams_, map<string, string>) };
    inline RunAiHelperWritingRequest& setWritingParams(const map<string, string> & writingParams) { DARABONBA_PTR_SET_VALUE(writingParams_, writingParams) };
    inline RunAiHelperWritingRequest& setWritingParams(map<string, string> && writingParams) { DARABONBA_PTR_SET_RVALUE(writingParams_, writingParams) };


    // writingScene Field Functions 
    bool hasWritingScene() const { return this->writingScene_ != nullptr;};
    void deleteWritingScene() { this->writingScene_ = nullptr;};
    inline string getWritingScene() const { DARABONBA_PTR_GET_DEFAULT(writingScene_, "") };
    inline RunAiHelperWritingRequest& setWritingScene(string writingScene) { DARABONBA_PTR_SET_VALUE(writingScene_, writingScene) };


    // writingStyle Field Functions 
    bool hasWritingStyle() const { return this->writingStyle_ != nullptr;};
    void deleteWritingStyle() { this->writingStyle_ = nullptr;};
    inline string getWritingStyle() const { DARABONBA_PTR_GET_DEFAULT(writingStyle_, "") };
    inline RunAiHelperWritingRequest& setWritingStyle(string writingStyle) { DARABONBA_PTR_SET_VALUE(writingStyle_, writingStyle) };


  protected:
    shared_ptr<bool> distributeWriting_ {};
    // This parameter is required.
    shared_ptr<string> prompt_ {};
    shared_ptr<string> promptMode_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
    shared_ptr<map<string, string>> writingParams_ {};
    // 写作场景：government(政务)、media(传媒)、market(营销)、office(办公)、custom(自定义)
    // 
    // This parameter is required.
    shared_ptr<string> writingScene_ {};
    // 写作文体唯一标识KEY，可通过ListWritingStyles接口获取对应写作场景下的文体列表
    // 
    // This parameter is required.
    shared_ptr<string> writingStyle_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
