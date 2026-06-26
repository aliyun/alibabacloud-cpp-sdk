// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPOLARCLAWAGENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPOLARCLAWAGENTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class UpdatePolarClawAgentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePolarClawAgentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentId, agentId_);
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(Avatar, avatar_);
      DARABONBA_PTR_TO_JSON(Files, files_);
      DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_TO_JSON(KeepWorkspaceFiles, keepWorkspaceFiles_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Restart, restart_);
      DARABONBA_PTR_TO_JSON(Workspace, workspace_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePolarClawAgentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(Avatar, avatar_);
      DARABONBA_PTR_FROM_JSON(Files, files_);
      DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_FROM_JSON(KeepWorkspaceFiles, keepWorkspaceFiles_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Restart, restart_);
      DARABONBA_PTR_FROM_JSON(Workspace, workspace_);
    };
    UpdatePolarClawAgentRequest() = default ;
    UpdatePolarClawAgentRequest(const UpdatePolarClawAgentRequest &) = default ;
    UpdatePolarClawAgentRequest(UpdatePolarClawAgentRequest &&) = default ;
    UpdatePolarClawAgentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePolarClawAgentRequest() = default ;
    UpdatePolarClawAgentRequest& operator=(const UpdatePolarClawAgentRequest &) = default ;
    UpdatePolarClawAgentRequest& operator=(UpdatePolarClawAgentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Files : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Files& obj) { 
        DARABONBA_PTR_TO_JSON(FileContent, fileContent_);
        DARABONBA_PTR_TO_JSON(FileName, fileName_);
      };
      friend void from_json(const Darabonba::Json& j, Files& obj) { 
        DARABONBA_PTR_FROM_JSON(FileContent, fileContent_);
        DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      };
      Files() = default ;
      Files(const Files &) = default ;
      Files(Files &&) = default ;
      Files(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Files() = default ;
      Files& operator=(const Files &) = default ;
      Files& operator=(Files &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->fileContent_ == nullptr
        && this->fileName_ == nullptr; };
      // fileContent Field Functions 
      bool hasFileContent() const { return this->fileContent_ != nullptr;};
      void deleteFileContent() { this->fileContent_ = nullptr;};
      inline string getFileContent() const { DARABONBA_PTR_GET_DEFAULT(fileContent_, "") };
      inline Files& setFileContent(string fileContent) { DARABONBA_PTR_SET_VALUE(fileContent_, fileContent) };


      // fileName Field Functions 
      bool hasFileName() const { return this->fileName_ != nullptr;};
      void deleteFileName() { this->fileName_ = nullptr;};
      inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
      inline Files& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    protected:
      // File content
      shared_ptr<string> fileContent_ {};
      // File name, must be one of the allowed file names (AGENTS.md, SOUL.md, TOOLS.md, IDENTITY.md, USER.md, HEARTBEAT.md, BOOTSTRAP.md, MEMORY.md, MEMORY.alt.md)
      shared_ptr<string> fileName_ {};
    };

    virtual bool empty() const override { return this->agentId_ == nullptr
        && this->applicationId_ == nullptr && this->avatar_ == nullptr && this->files_ == nullptr && this->isDefault_ == nullptr && this->keepWorkspaceFiles_ == nullptr
        && this->model_ == nullptr && this->name_ == nullptr && this->restart_ == nullptr && this->workspace_ == nullptr; };
    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
    inline UpdatePolarClawAgentRequest& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline UpdatePolarClawAgentRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // avatar Field Functions 
    bool hasAvatar() const { return this->avatar_ != nullptr;};
    void deleteAvatar() { this->avatar_ = nullptr;};
    inline string getAvatar() const { DARABONBA_PTR_GET_DEFAULT(avatar_, "") };
    inline UpdatePolarClawAgentRequest& setAvatar(string avatar) { DARABONBA_PTR_SET_VALUE(avatar_, avatar) };


    // files Field Functions 
    bool hasFiles() const { return this->files_ != nullptr;};
    void deleteFiles() { this->files_ = nullptr;};
    inline const vector<UpdatePolarClawAgentRequest::Files> & getFiles() const { DARABONBA_PTR_GET_CONST(files_, vector<UpdatePolarClawAgentRequest::Files>) };
    inline vector<UpdatePolarClawAgentRequest::Files> getFiles() { DARABONBA_PTR_GET(files_, vector<UpdatePolarClawAgentRequest::Files>) };
    inline UpdatePolarClawAgentRequest& setFiles(const vector<UpdatePolarClawAgentRequest::Files> & files) { DARABONBA_PTR_SET_VALUE(files_, files) };
    inline UpdatePolarClawAgentRequest& setFiles(vector<UpdatePolarClawAgentRequest::Files> && files) { DARABONBA_PTR_SET_RVALUE(files_, files) };


    // isDefault Field Functions 
    bool hasIsDefault() const { return this->isDefault_ != nullptr;};
    void deleteIsDefault() { this->isDefault_ = nullptr;};
    inline bool getIsDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
    inline UpdatePolarClawAgentRequest& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


    // keepWorkspaceFiles Field Functions 
    bool hasKeepWorkspaceFiles() const { return this->keepWorkspaceFiles_ != nullptr;};
    void deleteKeepWorkspaceFiles() { this->keepWorkspaceFiles_ = nullptr;};
    inline bool getKeepWorkspaceFiles() const { DARABONBA_PTR_GET_DEFAULT(keepWorkspaceFiles_, false) };
    inline UpdatePolarClawAgentRequest& setKeepWorkspaceFiles(bool keepWorkspaceFiles) { DARABONBA_PTR_SET_VALUE(keepWorkspaceFiles_, keepWorkspaceFiles) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline UpdatePolarClawAgentRequest& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdatePolarClawAgentRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // restart Field Functions 
    bool hasRestart() const { return this->restart_ != nullptr;};
    void deleteRestart() { this->restart_ = nullptr;};
    inline bool getRestart() const { DARABONBA_PTR_GET_DEFAULT(restart_, false) };
    inline UpdatePolarClawAgentRequest& setRestart(bool restart) { DARABONBA_PTR_SET_VALUE(restart_, restart) };


    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline string getWorkspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
    inline UpdatePolarClawAgentRequest& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


  protected:
    // Agent ID to update
    // 
    // This parameter is required.
    shared_ptr<string> agentId_ {};
    // Application ID
    // 
    // This parameter is required.
    shared_ptr<string> applicationId_ {};
    // New avatar
    shared_ptr<string> avatar_ {};
    // List of files to update
    shared_ptr<vector<UpdatePolarClawAgentRequest::Files>> files_ {};
    shared_ptr<bool> isDefault_ {};
    shared_ptr<bool> keepWorkspaceFiles_ {};
    // Model override
    shared_ptr<string> model_ {};
    // New display name
    shared_ptr<string> name_ {};
    // Whether to restart the gateway after creation, default is true
    shared_ptr<bool> restart_ {};
    // New workspace directory path
    shared_ptr<string> workspace_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
