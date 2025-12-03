// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPFROMTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPFROMTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mobi20240411
{
namespace Models
{
  class CreateAppFromTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAppFromTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ActualParameters, actualParameters_);
      DARABONBA_PTR_TO_JSON(AgentId, agentId_);
      DARABONBA_PTR_TO_JSON(ConnectionsContent, connectionsContent_);
      DARABONBA_PTR_TO_JSON(DatabasesContent, databasesContent_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(From, from_);
      DARABONBA_PTR_TO_JSON(Icon, icon_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(VariablesContent, variablesContent_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAppFromTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ActualParameters, actualParameters_);
      DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
      DARABONBA_PTR_FROM_JSON(ConnectionsContent, connectionsContent_);
      DARABONBA_PTR_FROM_JSON(DatabasesContent, databasesContent_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(From, from_);
      DARABONBA_PTR_FROM_JSON(Icon, icon_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(VariablesContent, variablesContent_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    CreateAppFromTemplateRequest() = default ;
    CreateAppFromTemplateRequest(const CreateAppFromTemplateRequest &) = default ;
    CreateAppFromTemplateRequest(CreateAppFromTemplateRequest &&) = default ;
    CreateAppFromTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAppFromTemplateRequest() = default ;
    CreateAppFromTemplateRequest& operator=(const CreateAppFromTemplateRequest &) = default ;
    CreateAppFromTemplateRequest& operator=(CreateAppFromTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actualParameters_ == nullptr
        && return this->agentId_ == nullptr && return this->connectionsContent_ == nullptr && return this->databasesContent_ == nullptr && return this->description_ == nullptr && return this->from_ == nullptr
        && return this->icon_ == nullptr && return this->name_ == nullptr && return this->templateId_ == nullptr && return this->type_ == nullptr && return this->variablesContent_ == nullptr
        && return this->workspaceId_ == nullptr; };
    // actualParameters Field Functions 
    bool hasActualParameters() const { return this->actualParameters_ != nullptr;};
    void deleteActualParameters() { this->actualParameters_ = nullptr;};
    inline string actualParameters() const { DARABONBA_PTR_GET_DEFAULT(actualParameters_, "") };
    inline CreateAppFromTemplateRequest& setActualParameters(string actualParameters) { DARABONBA_PTR_SET_VALUE(actualParameters_, actualParameters) };


    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline string agentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
    inline CreateAppFromTemplateRequest& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // connectionsContent Field Functions 
    bool hasConnectionsContent() const { return this->connectionsContent_ != nullptr;};
    void deleteConnectionsContent() { this->connectionsContent_ = nullptr;};
    inline string connectionsContent() const { DARABONBA_PTR_GET_DEFAULT(connectionsContent_, "") };
    inline CreateAppFromTemplateRequest& setConnectionsContent(string connectionsContent) { DARABONBA_PTR_SET_VALUE(connectionsContent_, connectionsContent) };


    // databasesContent Field Functions 
    bool hasDatabasesContent() const { return this->databasesContent_ != nullptr;};
    void deleteDatabasesContent() { this->databasesContent_ = nullptr;};
    inline string databasesContent() const { DARABONBA_PTR_GET_DEFAULT(databasesContent_, "") };
    inline CreateAppFromTemplateRequest& setDatabasesContent(string databasesContent) { DARABONBA_PTR_SET_VALUE(databasesContent_, databasesContent) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateAppFromTemplateRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // from Field Functions 
    bool hasFrom() const { return this->from_ != nullptr;};
    void deleteFrom() { this->from_ = nullptr;};
    inline string from() const { DARABONBA_PTR_GET_DEFAULT(from_, "") };
    inline CreateAppFromTemplateRequest& setFrom(string from) { DARABONBA_PTR_SET_VALUE(from_, from) };


    // icon Field Functions 
    bool hasIcon() const { return this->icon_ != nullptr;};
    void deleteIcon() { this->icon_ = nullptr;};
    inline string icon() const { DARABONBA_PTR_GET_DEFAULT(icon_, "") };
    inline CreateAppFromTemplateRequest& setIcon(string icon) { DARABONBA_PTR_SET_VALUE(icon_, icon) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateAppFromTemplateRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline CreateAppFromTemplateRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateAppFromTemplateRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // variablesContent Field Functions 
    bool hasVariablesContent() const { return this->variablesContent_ != nullptr;};
    void deleteVariablesContent() { this->variablesContent_ = nullptr;};
    inline string variablesContent() const { DARABONBA_PTR_GET_DEFAULT(variablesContent_, "") };
    inline CreateAppFromTemplateRequest& setVariablesContent(string variablesContent) { DARABONBA_PTR_SET_VALUE(variablesContent_, variablesContent) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CreateAppFromTemplateRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<string> actualParameters_ = nullptr;
    std::shared_ptr<string> agentId_ = nullptr;
    std::shared_ptr<string> connectionsContent_ = nullptr;
    std::shared_ptr<string> databasesContent_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> from_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> icon_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> templateId_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> variablesContent_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mobi20240411
#endif
