// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATAAGENTSESSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATAAGENTSESSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class CreateDataAgentSessionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataAgentSessionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DMSUnit, DMSUnit_);
      DARABONBA_PTR_TO_JSON(File, file_);
      DARABONBA_PTR_TO_JSON(SessionConfig, sessionConfig_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataAgentSessionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DMSUnit, DMSUnit_);
      DARABONBA_PTR_FROM_JSON(File, file_);
      DARABONBA_PTR_FROM_JSON(SessionConfig, sessionConfig_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    CreateDataAgentSessionRequest() = default ;
    CreateDataAgentSessionRequest(const CreateDataAgentSessionRequest &) = default ;
    CreateDataAgentSessionRequest(CreateDataAgentSessionRequest &&) = default ;
    CreateDataAgentSessionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataAgentSessionRequest() = default ;
    CreateDataAgentSessionRequest& operator=(const CreateDataAgentSessionRequest &) = default ;
    CreateDataAgentSessionRequest& operator=(CreateDataAgentSessionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SessionConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SessionConfig& obj) { 
        DARABONBA_PTR_TO_JSON(CustomAgentId, customAgentId_);
        DARABONBA_PTR_TO_JSON(CustomAgentStage, customAgentStage_);
        DARABONBA_PTR_TO_JSON(EnableSearch, enableSearch_);
        DARABONBA_PTR_TO_JSON(Language, language_);
        DARABONBA_PTR_TO_JSON(McpServerIds, mcpServerIds_);
        DARABONBA_PTR_TO_JSON(Mode, mode_);
        DARABONBA_PTR_TO_JSON(UserOssBucket, userOssBucket_);
      };
      friend void from_json(const Darabonba::Json& j, SessionConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(CustomAgentId, customAgentId_);
        DARABONBA_PTR_FROM_JSON(CustomAgentStage, customAgentStage_);
        DARABONBA_PTR_FROM_JSON(EnableSearch, enableSearch_);
        DARABONBA_PTR_FROM_JSON(Language, language_);
        DARABONBA_PTR_FROM_JSON(McpServerIds, mcpServerIds_);
        DARABONBA_PTR_FROM_JSON(Mode, mode_);
        DARABONBA_PTR_FROM_JSON(UserOssBucket, userOssBucket_);
      };
      SessionConfig() = default ;
      SessionConfig(const SessionConfig &) = default ;
      SessionConfig(SessionConfig &&) = default ;
      SessionConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SessionConfig() = default ;
      SessionConfig& operator=(const SessionConfig &) = default ;
      SessionConfig& operator=(SessionConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->customAgentId_ == nullptr
        && this->customAgentStage_ == nullptr && this->enableSearch_ == nullptr && this->language_ == nullptr && this->mcpServerIds_ == nullptr && this->mode_ == nullptr
        && this->userOssBucket_ == nullptr; };
      // customAgentId Field Functions 
      bool hasCustomAgentId() const { return this->customAgentId_ != nullptr;};
      void deleteCustomAgentId() { this->customAgentId_ = nullptr;};
      inline string getCustomAgentId() const { DARABONBA_PTR_GET_DEFAULT(customAgentId_, "") };
      inline SessionConfig& setCustomAgentId(string customAgentId) { DARABONBA_PTR_SET_VALUE(customAgentId_, customAgentId) };


      // customAgentStage Field Functions 
      bool hasCustomAgentStage() const { return this->customAgentStage_ != nullptr;};
      void deleteCustomAgentStage() { this->customAgentStage_ = nullptr;};
      inline string getCustomAgentStage() const { DARABONBA_PTR_GET_DEFAULT(customAgentStage_, "") };
      inline SessionConfig& setCustomAgentStage(string customAgentStage) { DARABONBA_PTR_SET_VALUE(customAgentStage_, customAgentStage) };


      // enableSearch Field Functions 
      bool hasEnableSearch() const { return this->enableSearch_ != nullptr;};
      void deleteEnableSearch() { this->enableSearch_ = nullptr;};
      inline bool getEnableSearch() const { DARABONBA_PTR_GET_DEFAULT(enableSearch_, false) };
      inline SessionConfig& setEnableSearch(bool enableSearch) { DARABONBA_PTR_SET_VALUE(enableSearch_, enableSearch) };


      // language Field Functions 
      bool hasLanguage() const { return this->language_ != nullptr;};
      void deleteLanguage() { this->language_ = nullptr;};
      inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
      inline SessionConfig& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


      // mcpServerIds Field Functions 
      bool hasMcpServerIds() const { return this->mcpServerIds_ != nullptr;};
      void deleteMcpServerIds() { this->mcpServerIds_ = nullptr;};
      inline const vector<string> & getMcpServerIds() const { DARABONBA_PTR_GET_CONST(mcpServerIds_, vector<string>) };
      inline vector<string> getMcpServerIds() { DARABONBA_PTR_GET(mcpServerIds_, vector<string>) };
      inline SessionConfig& setMcpServerIds(const vector<string> & mcpServerIds) { DARABONBA_PTR_SET_VALUE(mcpServerIds_, mcpServerIds) };
      inline SessionConfig& setMcpServerIds(vector<string> && mcpServerIds) { DARABONBA_PTR_SET_RVALUE(mcpServerIds_, mcpServerIds) };


      // mode Field Functions 
      bool hasMode() const { return this->mode_ != nullptr;};
      void deleteMode() { this->mode_ = nullptr;};
      inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
      inline SessionConfig& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


      // userOssBucket Field Functions 
      bool hasUserOssBucket() const { return this->userOssBucket_ != nullptr;};
      void deleteUserOssBucket() { this->userOssBucket_ = nullptr;};
      inline string getUserOssBucket() const { DARABONBA_PTR_GET_DEFAULT(userOssBucket_, "") };
      inline SessionConfig& setUserOssBucket(string userOssBucket) { DARABONBA_PTR_SET_VALUE(userOssBucket_, userOssBucket) };


    protected:
      shared_ptr<string> customAgentId_ {};
      shared_ptr<string> customAgentStage_ {};
      shared_ptr<bool> enableSearch_ {};
      shared_ptr<string> language_ {};
      shared_ptr<vector<string>> mcpServerIds_ {};
      shared_ptr<string> mode_ {};
      shared_ptr<string> userOssBucket_ {};
    };

    virtual bool empty() const override { return this->DMSUnit_ == nullptr
        && this->file_ == nullptr && this->sessionConfig_ == nullptr && this->title_ == nullptr && this->workspaceId_ == nullptr; };
    // DMSUnit Field Functions 
    bool hasDMSUnit() const { return this->DMSUnit_ != nullptr;};
    void deleteDMSUnit() { this->DMSUnit_ = nullptr;};
    inline string getDMSUnit() const { DARABONBA_PTR_GET_DEFAULT(DMSUnit_, "") };
    inline CreateDataAgentSessionRequest& setDMSUnit(string DMSUnit) { DARABONBA_PTR_SET_VALUE(DMSUnit_, DMSUnit) };


    // file Field Functions 
    bool hasFile() const { return this->file_ != nullptr;};
    void deleteFile() { this->file_ = nullptr;};
    inline string getFile() const { DARABONBA_PTR_GET_DEFAULT(file_, "") };
    inline CreateDataAgentSessionRequest& setFile(string file) { DARABONBA_PTR_SET_VALUE(file_, file) };


    // sessionConfig Field Functions 
    bool hasSessionConfig() const { return this->sessionConfig_ != nullptr;};
    void deleteSessionConfig() { this->sessionConfig_ = nullptr;};
    inline const CreateDataAgentSessionRequest::SessionConfig & getSessionConfig() const { DARABONBA_PTR_GET_CONST(sessionConfig_, CreateDataAgentSessionRequest::SessionConfig) };
    inline CreateDataAgentSessionRequest::SessionConfig getSessionConfig() { DARABONBA_PTR_GET(sessionConfig_, CreateDataAgentSessionRequest::SessionConfig) };
    inline CreateDataAgentSessionRequest& setSessionConfig(const CreateDataAgentSessionRequest::SessionConfig & sessionConfig) { DARABONBA_PTR_SET_VALUE(sessionConfig_, sessionConfig) };
    inline CreateDataAgentSessionRequest& setSessionConfig(CreateDataAgentSessionRequest::SessionConfig && sessionConfig) { DARABONBA_PTR_SET_RVALUE(sessionConfig_, sessionConfig) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline CreateDataAgentSessionRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CreateDataAgentSessionRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<string> DMSUnit_ {};
    shared_ptr<string> file_ {};
    shared_ptr<CreateDataAgentSessionRequest::SessionConfig> sessionConfig_ {};
    shared_ptr<string> title_ {};
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
