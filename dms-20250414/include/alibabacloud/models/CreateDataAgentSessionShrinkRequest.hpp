// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATAAGENTSESSIONSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATAAGENTSESSIONSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class CreateDataAgentSessionShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataAgentSessionShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DMSUnit, DMSUnit_);
      DARABONBA_PTR_TO_JSON(File, file_);
      DARABONBA_PTR_TO_JSON(SessionConfig, sessionConfigShrink_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataAgentSessionShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DMSUnit, DMSUnit_);
      DARABONBA_PTR_FROM_JSON(File, file_);
      DARABONBA_PTR_FROM_JSON(SessionConfig, sessionConfigShrink_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    CreateDataAgentSessionShrinkRequest() = default ;
    CreateDataAgentSessionShrinkRequest(const CreateDataAgentSessionShrinkRequest &) = default ;
    CreateDataAgentSessionShrinkRequest(CreateDataAgentSessionShrinkRequest &&) = default ;
    CreateDataAgentSessionShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataAgentSessionShrinkRequest() = default ;
    CreateDataAgentSessionShrinkRequest& operator=(const CreateDataAgentSessionShrinkRequest &) = default ;
    CreateDataAgentSessionShrinkRequest& operator=(CreateDataAgentSessionShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DMSUnit_ == nullptr
        && return this->file_ == nullptr && return this->sessionConfigShrink_ == nullptr && return this->title_ == nullptr && return this->workspaceId_ == nullptr; };
    // DMSUnit Field Functions 
    bool hasDMSUnit() const { return this->DMSUnit_ != nullptr;};
    void deleteDMSUnit() { this->DMSUnit_ = nullptr;};
    inline string DMSUnit() const { DARABONBA_PTR_GET_DEFAULT(DMSUnit_, "") };
    inline CreateDataAgentSessionShrinkRequest& setDMSUnit(string DMSUnit) { DARABONBA_PTR_SET_VALUE(DMSUnit_, DMSUnit) };


    // file Field Functions 
    bool hasFile() const { return this->file_ != nullptr;};
    void deleteFile() { this->file_ = nullptr;};
    inline string file() const { DARABONBA_PTR_GET_DEFAULT(file_, "") };
    inline CreateDataAgentSessionShrinkRequest& setFile(string file) { DARABONBA_PTR_SET_VALUE(file_, file) };


    // sessionConfigShrink Field Functions 
    bool hasSessionConfigShrink() const { return this->sessionConfigShrink_ != nullptr;};
    void deleteSessionConfigShrink() { this->sessionConfigShrink_ = nullptr;};
    inline string sessionConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(sessionConfigShrink_, "") };
    inline CreateDataAgentSessionShrinkRequest& setSessionConfigShrink(string sessionConfigShrink) { DARABONBA_PTR_SET_VALUE(sessionConfigShrink_, sessionConfigShrink) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline CreateDataAgentSessionShrinkRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CreateDataAgentSessionShrinkRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<string> DMSUnit_ = nullptr;
    std::shared_ptr<string> file_ = nullptr;
    std::shared_ptr<string> sessionConfigShrink_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
