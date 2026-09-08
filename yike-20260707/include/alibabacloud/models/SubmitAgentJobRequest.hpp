// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITAGENTJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITAGENTJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Yike20260707
{
namespace Models
{
  class SubmitAgentJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitAgentJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(NotifyUrl, notifyUrl_);
      DARABONBA_PTR_TO_JSON(Prompt, prompt_);
      DARABONBA_PTR_TO_JSON(Skill, skill_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitAgentJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(NotifyUrl, notifyUrl_);
      DARABONBA_PTR_FROM_JSON(Prompt, prompt_);
      DARABONBA_PTR_FROM_JSON(Skill, skill_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    SubmitAgentJobRequest() = default ;
    SubmitAgentJobRequest(const SubmitAgentJobRequest &) = default ;
    SubmitAgentJobRequest(SubmitAgentJobRequest &&) = default ;
    SubmitAgentJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitAgentJobRequest() = default ;
    SubmitAgentJobRequest& operator=(const SubmitAgentJobRequest &) = default ;
    SubmitAgentJobRequest& operator=(SubmitAgentJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->model_ == nullptr
        && this->notifyUrl_ == nullptr && this->prompt_ == nullptr && this->skill_ == nullptr && this->userData_ == nullptr && this->workspaceId_ == nullptr; };
    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline SubmitAgentJobRequest& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // notifyUrl Field Functions 
    bool hasNotifyUrl() const { return this->notifyUrl_ != nullptr;};
    void deleteNotifyUrl() { this->notifyUrl_ = nullptr;};
    inline string getNotifyUrl() const { DARABONBA_PTR_GET_DEFAULT(notifyUrl_, "") };
    inline SubmitAgentJobRequest& setNotifyUrl(string notifyUrl) { DARABONBA_PTR_SET_VALUE(notifyUrl_, notifyUrl) };


    // prompt Field Functions 
    bool hasPrompt() const { return this->prompt_ != nullptr;};
    void deletePrompt() { this->prompt_ = nullptr;};
    inline string getPrompt() const { DARABONBA_PTR_GET_DEFAULT(prompt_, "") };
    inline SubmitAgentJobRequest& setPrompt(string prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };


    // skill Field Functions 
    bool hasSkill() const { return this->skill_ != nullptr;};
    void deleteSkill() { this->skill_ = nullptr;};
    inline string getSkill() const { DARABONBA_PTR_GET_DEFAULT(skill_, "") };
    inline SubmitAgentJobRequest& setSkill(string skill) { DARABONBA_PTR_SET_VALUE(skill_, skill) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline SubmitAgentJobRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline SubmitAgentJobRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The large language model (LLM) used to execute the agent task.
    shared_ptr<string> model_ {};
    // The callback URL. Currently, only HTTP and HTTPS addresses are supported.
    shared_ptr<string> notifyUrl_ {};
    // The prompt. Defined by the business as needed.
    // 
    // This parameter is required.
    shared_ptr<string> prompt_ {};
    // The skill identifier, provided by the skill provider.
    shared_ptr<string> skill_ {};
    // The custom user data. This value is returned as-is in the callback.
    shared_ptr<string> userData_ {};
    // The workspace ID.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yike20260707
#endif
