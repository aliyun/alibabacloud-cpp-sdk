// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPOLARCLAWAGENTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPOLARCLAWAGENTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class UpdatePolarClawAgentShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePolarClawAgentShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentId, agentId_);
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(Avatar, avatar_);
      DARABONBA_PTR_TO_JSON(Files, filesShrink_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Restart, restart_);
      DARABONBA_PTR_TO_JSON(Workspace, workspace_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePolarClawAgentShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(Avatar, avatar_);
      DARABONBA_PTR_FROM_JSON(Files, filesShrink_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Restart, restart_);
      DARABONBA_PTR_FROM_JSON(Workspace, workspace_);
    };
    UpdatePolarClawAgentShrinkRequest() = default ;
    UpdatePolarClawAgentShrinkRequest(const UpdatePolarClawAgentShrinkRequest &) = default ;
    UpdatePolarClawAgentShrinkRequest(UpdatePolarClawAgentShrinkRequest &&) = default ;
    UpdatePolarClawAgentShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePolarClawAgentShrinkRequest() = default ;
    UpdatePolarClawAgentShrinkRequest& operator=(const UpdatePolarClawAgentShrinkRequest &) = default ;
    UpdatePolarClawAgentShrinkRequest& operator=(UpdatePolarClawAgentShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentId_ == nullptr
        && this->applicationId_ == nullptr && this->avatar_ == nullptr && this->filesShrink_ == nullptr && this->model_ == nullptr && this->name_ == nullptr
        && this->restart_ == nullptr && this->workspace_ == nullptr; };
    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
    inline UpdatePolarClawAgentShrinkRequest& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline UpdatePolarClawAgentShrinkRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // avatar Field Functions 
    bool hasAvatar() const { return this->avatar_ != nullptr;};
    void deleteAvatar() { this->avatar_ = nullptr;};
    inline string getAvatar() const { DARABONBA_PTR_GET_DEFAULT(avatar_, "") };
    inline UpdatePolarClawAgentShrinkRequest& setAvatar(string avatar) { DARABONBA_PTR_SET_VALUE(avatar_, avatar) };


    // filesShrink Field Functions 
    bool hasFilesShrink() const { return this->filesShrink_ != nullptr;};
    void deleteFilesShrink() { this->filesShrink_ = nullptr;};
    inline string getFilesShrink() const { DARABONBA_PTR_GET_DEFAULT(filesShrink_, "") };
    inline UpdatePolarClawAgentShrinkRequest& setFilesShrink(string filesShrink) { DARABONBA_PTR_SET_VALUE(filesShrink_, filesShrink) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline UpdatePolarClawAgentShrinkRequest& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdatePolarClawAgentShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // restart Field Functions 
    bool hasRestart() const { return this->restart_ != nullptr;};
    void deleteRestart() { this->restart_ = nullptr;};
    inline bool getRestart() const { DARABONBA_PTR_GET_DEFAULT(restart_, false) };
    inline UpdatePolarClawAgentShrinkRequest& setRestart(bool restart) { DARABONBA_PTR_SET_VALUE(restart_, restart) };


    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline string getWorkspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
    inline UpdatePolarClawAgentShrinkRequest& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


  protected:
    // This parameter is required.
    shared_ptr<string> agentId_ {};
    // This parameter is required.
    shared_ptr<string> applicationId_ {};
    shared_ptr<string> avatar_ {};
    shared_ptr<string> filesShrink_ {};
    shared_ptr<string> model_ {};
    shared_ptr<string> name_ {};
    shared_ptr<bool> restart_ {};
    shared_ptr<string> workspace_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
