// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPOLARCLAWAGENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPOLARCLAWAGENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class CreatePolarClawAgentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePolarClawAgentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentId, agentId_);
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(Avatar, avatar_);
      DARABONBA_PTR_TO_JSON(Emoji, emoji_);
      DARABONBA_PTR_TO_JSON(Restart, restart_);
      DARABONBA_PTR_TO_JSON(Workspace, workspace_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePolarClawAgentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(Avatar, avatar_);
      DARABONBA_PTR_FROM_JSON(Emoji, emoji_);
      DARABONBA_PTR_FROM_JSON(Restart, restart_);
      DARABONBA_PTR_FROM_JSON(Workspace, workspace_);
    };
    CreatePolarClawAgentRequest() = default ;
    CreatePolarClawAgentRequest(const CreatePolarClawAgentRequest &) = default ;
    CreatePolarClawAgentRequest(CreatePolarClawAgentRequest &&) = default ;
    CreatePolarClawAgentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePolarClawAgentRequest() = default ;
    CreatePolarClawAgentRequest& operator=(const CreatePolarClawAgentRequest &) = default ;
    CreatePolarClawAgentRequest& operator=(CreatePolarClawAgentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentId_ == nullptr
        && this->applicationId_ == nullptr && this->avatar_ == nullptr && this->emoji_ == nullptr && this->restart_ == nullptr && this->workspace_ == nullptr; };
    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
    inline CreatePolarClawAgentRequest& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline CreatePolarClawAgentRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // avatar Field Functions 
    bool hasAvatar() const { return this->avatar_ != nullptr;};
    void deleteAvatar() { this->avatar_ = nullptr;};
    inline string getAvatar() const { DARABONBA_PTR_GET_DEFAULT(avatar_, "") };
    inline CreatePolarClawAgentRequest& setAvatar(string avatar) { DARABONBA_PTR_SET_VALUE(avatar_, avatar) };


    // emoji Field Functions 
    bool hasEmoji() const { return this->emoji_ != nullptr;};
    void deleteEmoji() { this->emoji_ = nullptr;};
    inline string getEmoji() const { DARABONBA_PTR_GET_DEFAULT(emoji_, "") };
    inline CreatePolarClawAgentRequest& setEmoji(string emoji) { DARABONBA_PTR_SET_VALUE(emoji_, emoji) };


    // restart Field Functions 
    bool hasRestart() const { return this->restart_ != nullptr;};
    void deleteRestart() { this->restart_ = nullptr;};
    inline bool getRestart() const { DARABONBA_PTR_GET_DEFAULT(restart_, false) };
    inline CreatePolarClawAgentRequest& setRestart(bool restart) { DARABONBA_PTR_SET_VALUE(restart_, restart) };


    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline string getWorkspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
    inline CreatePolarClawAgentRequest& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


  protected:
    // This parameter is required.
    shared_ptr<string> agentId_ {};
    // This parameter is required.
    shared_ptr<string> applicationId_ {};
    shared_ptr<string> avatar_ {};
    shared_ptr<string> emoji_ {};
    shared_ptr<bool> restart_ {};
    // This parameter is required.
    shared_ptr<string> workspace_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
