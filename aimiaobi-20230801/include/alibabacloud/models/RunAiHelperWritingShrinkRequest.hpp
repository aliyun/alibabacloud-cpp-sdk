// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNAIHELPERWRITINGSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNAIHELPERWRITINGSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunAiHelperWritingShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunAiHelperWritingShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DistributeWriting, distributeWriting_);
      DARABONBA_PTR_TO_JSON(Prompt, prompt_);
      DARABONBA_PTR_TO_JSON(PromptMode, promptMode_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_TO_JSON(WritingParams, writingParamsShrink_);
      DARABONBA_PTR_TO_JSON(WritingScene, writingScene_);
      DARABONBA_PTR_TO_JSON(WritingStyle, writingStyle_);
    };
    friend void from_json(const Darabonba::Json& j, RunAiHelperWritingShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DistributeWriting, distributeWriting_);
      DARABONBA_PTR_FROM_JSON(Prompt, prompt_);
      DARABONBA_PTR_FROM_JSON(PromptMode, promptMode_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_FROM_JSON(WritingParams, writingParamsShrink_);
      DARABONBA_PTR_FROM_JSON(WritingScene, writingScene_);
      DARABONBA_PTR_FROM_JSON(WritingStyle, writingStyle_);
    };
    RunAiHelperWritingShrinkRequest() = default ;
    RunAiHelperWritingShrinkRequest(const RunAiHelperWritingShrinkRequest &) = default ;
    RunAiHelperWritingShrinkRequest(RunAiHelperWritingShrinkRequest &&) = default ;
    RunAiHelperWritingShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunAiHelperWritingShrinkRequest() = default ;
    RunAiHelperWritingShrinkRequest& operator=(const RunAiHelperWritingShrinkRequest &) = default ;
    RunAiHelperWritingShrinkRequest& operator=(RunAiHelperWritingShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->distributeWriting_ == nullptr
        && this->prompt_ == nullptr && this->promptMode_ == nullptr && this->workspaceId_ == nullptr && this->writingParamsShrink_ == nullptr && this->writingScene_ == nullptr
        && this->writingStyle_ == nullptr; };
    // distributeWriting Field Functions 
    bool hasDistributeWriting() const { return this->distributeWriting_ != nullptr;};
    void deleteDistributeWriting() { this->distributeWriting_ = nullptr;};
    inline bool getDistributeWriting() const { DARABONBA_PTR_GET_DEFAULT(distributeWriting_, false) };
    inline RunAiHelperWritingShrinkRequest& setDistributeWriting(bool distributeWriting) { DARABONBA_PTR_SET_VALUE(distributeWriting_, distributeWriting) };


    // prompt Field Functions 
    bool hasPrompt() const { return this->prompt_ != nullptr;};
    void deletePrompt() { this->prompt_ = nullptr;};
    inline string getPrompt() const { DARABONBA_PTR_GET_DEFAULT(prompt_, "") };
    inline RunAiHelperWritingShrinkRequest& setPrompt(string prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };


    // promptMode Field Functions 
    bool hasPromptMode() const { return this->promptMode_ != nullptr;};
    void deletePromptMode() { this->promptMode_ = nullptr;};
    inline string getPromptMode() const { DARABONBA_PTR_GET_DEFAULT(promptMode_, "") };
    inline RunAiHelperWritingShrinkRequest& setPromptMode(string promptMode) { DARABONBA_PTR_SET_VALUE(promptMode_, promptMode) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline RunAiHelperWritingShrinkRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    // writingParamsShrink Field Functions 
    bool hasWritingParamsShrink() const { return this->writingParamsShrink_ != nullptr;};
    void deleteWritingParamsShrink() { this->writingParamsShrink_ = nullptr;};
    inline string getWritingParamsShrink() const { DARABONBA_PTR_GET_DEFAULT(writingParamsShrink_, "") };
    inline RunAiHelperWritingShrinkRequest& setWritingParamsShrink(string writingParamsShrink) { DARABONBA_PTR_SET_VALUE(writingParamsShrink_, writingParamsShrink) };


    // writingScene Field Functions 
    bool hasWritingScene() const { return this->writingScene_ != nullptr;};
    void deleteWritingScene() { this->writingScene_ = nullptr;};
    inline string getWritingScene() const { DARABONBA_PTR_GET_DEFAULT(writingScene_, "") };
    inline RunAiHelperWritingShrinkRequest& setWritingScene(string writingScene) { DARABONBA_PTR_SET_VALUE(writingScene_, writingScene) };


    // writingStyle Field Functions 
    bool hasWritingStyle() const { return this->writingStyle_ != nullptr;};
    void deleteWritingStyle() { this->writingStyle_ = nullptr;};
    inline string getWritingStyle() const { DARABONBA_PTR_GET_DEFAULT(writingStyle_, "") };
    inline RunAiHelperWritingShrinkRequest& setWritingStyle(string writingStyle) { DARABONBA_PTR_SET_VALUE(writingStyle_, writingStyle) };


  protected:
    shared_ptr<bool> distributeWriting_ {};
    // This parameter is required.
    shared_ptr<string> prompt_ {};
    shared_ptr<string> promptMode_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
    shared_ptr<string> writingParamsShrink_ {};
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
