// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATAAGENTSESSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATAAGENTSESSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateDataAgentSessionRequestSessionConfig.hpp>
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
    virtual bool empty() const override { return this->DMSUnit_ == nullptr
        && return this->file_ == nullptr && return this->sessionConfig_ == nullptr && return this->title_ == nullptr && return this->workspaceId_ == nullptr; };
    // DMSUnit Field Functions 
    bool hasDMSUnit() const { return this->DMSUnit_ != nullptr;};
    void deleteDMSUnit() { this->DMSUnit_ = nullptr;};
    inline string DMSUnit() const { DARABONBA_PTR_GET_DEFAULT(DMSUnit_, "") };
    inline CreateDataAgentSessionRequest& setDMSUnit(string DMSUnit) { DARABONBA_PTR_SET_VALUE(DMSUnit_, DMSUnit) };


    // file Field Functions 
    bool hasFile() const { return this->file_ != nullptr;};
    void deleteFile() { this->file_ = nullptr;};
    inline string file() const { DARABONBA_PTR_GET_DEFAULT(file_, "") };
    inline CreateDataAgentSessionRequest& setFile(string file) { DARABONBA_PTR_SET_VALUE(file_, file) };


    // sessionConfig Field Functions 
    bool hasSessionConfig() const { return this->sessionConfig_ != nullptr;};
    void deleteSessionConfig() { this->sessionConfig_ = nullptr;};
    inline const CreateDataAgentSessionRequestSessionConfig & sessionConfig() const { DARABONBA_PTR_GET_CONST(sessionConfig_, CreateDataAgentSessionRequestSessionConfig) };
    inline CreateDataAgentSessionRequestSessionConfig sessionConfig() { DARABONBA_PTR_GET(sessionConfig_, CreateDataAgentSessionRequestSessionConfig) };
    inline CreateDataAgentSessionRequest& setSessionConfig(const CreateDataAgentSessionRequestSessionConfig & sessionConfig) { DARABONBA_PTR_SET_VALUE(sessionConfig_, sessionConfig) };
    inline CreateDataAgentSessionRequest& setSessionConfig(CreateDataAgentSessionRequestSessionConfig && sessionConfig) { DARABONBA_PTR_SET_RVALUE(sessionConfig_, sessionConfig) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline CreateDataAgentSessionRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CreateDataAgentSessionRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<string> DMSUnit_ = nullptr;
    std::shared_ptr<string> file_ = nullptr;
    std::shared_ptr<CreateDataAgentSessionRequestSessionConfig> sessionConfig_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
