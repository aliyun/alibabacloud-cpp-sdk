// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESECURITYSTRATEGYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESECURITYSTRATEGYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateSecurityStrategyShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSecurityStrategyShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Content, contentShrink_);
      DARABONBA_PTR_TO_JSON(ControlDwScope, controlDwScope_);
      DARABONBA_PTR_TO_JSON(ControlModule, controlModule_);
      DARABONBA_PTR_TO_JSON(ControlSubModule, controlSubModule_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_TO_JSON(Workspaces, workspacesShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSecurityStrategyShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Content, contentShrink_);
      DARABONBA_PTR_FROM_JSON(ControlDwScope, controlDwScope_);
      DARABONBA_PTR_FROM_JSON(ControlModule, controlModule_);
      DARABONBA_PTR_FROM_JSON(ControlSubModule, controlSubModule_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_FROM_JSON(Workspaces, workspacesShrink_);
    };
    CreateSecurityStrategyShrinkRequest() = default ;
    CreateSecurityStrategyShrinkRequest(const CreateSecurityStrategyShrinkRequest &) = default ;
    CreateSecurityStrategyShrinkRequest(CreateSecurityStrategyShrinkRequest &&) = default ;
    CreateSecurityStrategyShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSecurityStrategyShrinkRequest() = default ;
    CreateSecurityStrategyShrinkRequest& operator=(const CreateSecurityStrategyShrinkRequest &) = default ;
    CreateSecurityStrategyShrinkRequest& operator=(CreateSecurityStrategyShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->contentShrink_ == nullptr && this->controlDwScope_ == nullptr && this->controlModule_ == nullptr && this->controlSubModule_ == nullptr && this->description_ == nullptr
        && this->name_ == nullptr && this->schemaName_ == nullptr && this->workspacesShrink_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateSecurityStrategyShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // contentShrink Field Functions 
    bool hasContentShrink() const { return this->contentShrink_ != nullptr;};
    void deleteContentShrink() { this->contentShrink_ = nullptr;};
    inline string getContentShrink() const { DARABONBA_PTR_GET_DEFAULT(contentShrink_, "") };
    inline CreateSecurityStrategyShrinkRequest& setContentShrink(string contentShrink) { DARABONBA_PTR_SET_VALUE(contentShrink_, contentShrink) };


    // controlDwScope Field Functions 
    bool hasControlDwScope() const { return this->controlDwScope_ != nullptr;};
    void deleteControlDwScope() { this->controlDwScope_ = nullptr;};
    inline string getControlDwScope() const { DARABONBA_PTR_GET_DEFAULT(controlDwScope_, "") };
    inline CreateSecurityStrategyShrinkRequest& setControlDwScope(string controlDwScope) { DARABONBA_PTR_SET_VALUE(controlDwScope_, controlDwScope) };


    // controlModule Field Functions 
    bool hasControlModule() const { return this->controlModule_ != nullptr;};
    void deleteControlModule() { this->controlModule_ = nullptr;};
    inline string getControlModule() const { DARABONBA_PTR_GET_DEFAULT(controlModule_, "") };
    inline CreateSecurityStrategyShrinkRequest& setControlModule(string controlModule) { DARABONBA_PTR_SET_VALUE(controlModule_, controlModule) };


    // controlSubModule Field Functions 
    bool hasControlSubModule() const { return this->controlSubModule_ != nullptr;};
    void deleteControlSubModule() { this->controlSubModule_ = nullptr;};
    inline string getControlSubModule() const { DARABONBA_PTR_GET_DEFAULT(controlSubModule_, "") };
    inline CreateSecurityStrategyShrinkRequest& setControlSubModule(string controlSubModule) { DARABONBA_PTR_SET_VALUE(controlSubModule_, controlSubModule) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateSecurityStrategyShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateSecurityStrategyShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // schemaName Field Functions 
    bool hasSchemaName() const { return this->schemaName_ != nullptr;};
    void deleteSchemaName() { this->schemaName_ = nullptr;};
    inline string getSchemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
    inline CreateSecurityStrategyShrinkRequest& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


    // workspacesShrink Field Functions 
    bool hasWorkspacesShrink() const { return this->workspacesShrink_ != nullptr;};
    void deleteWorkspacesShrink() { this->workspacesShrink_ = nullptr;};
    inline string getWorkspacesShrink() const { DARABONBA_PTR_GET_DEFAULT(workspacesShrink_, "") };
    inline CreateSecurityStrategyShrinkRequest& setWorkspacesShrink(string workspacesShrink) { DARABONBA_PTR_SET_VALUE(workspacesShrink_, workspacesShrink) };


  protected:
    // A client-generated token that ensures request idempotency, preventing duplicate operations if you retry the request.
    shared_ptr<string> clientToken_ {};
    // The content of the strategy. This value is constrained by the `SecurityStrategySchema`.
    // 
    // This parameter is required.
    shared_ptr<string> contentShrink_ {};
    // **The control scope. Valid values: Workspace and Tenant.**
    // 
    // This parameter is required.
    shared_ptr<string> controlDwScope_ {};
    // **Control module**
    // 
    // This parameter is required.
    shared_ptr<string> controlModule_ {};
    // **Control submodule**
    shared_ptr<string> controlSubModule_ {};
    // **Strategy description**
    shared_ptr<string> description_ {};
    // **Strategy name**
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // **Schema template name**
    // 
    // This parameter is required.
    shared_ptr<string> schemaName_ {};
    // A list of associated workspace IDs.
    shared_ptr<string> workspacesShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
