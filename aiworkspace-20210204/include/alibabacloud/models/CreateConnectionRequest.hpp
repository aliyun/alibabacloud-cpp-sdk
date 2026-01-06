// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECONNECTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECONNECTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class CreateConnectionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateConnectionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_TO_JSON(Configs, configs_);
      DARABONBA_PTR_TO_JSON(ConnectionName, connectionName_);
      DARABONBA_PTR_TO_JSON(ConnectionType, connectionType_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Models, models_);
      DARABONBA_PTR_TO_JSON(ResourceMeta, resourceMeta_);
      DARABONBA_PTR_TO_JSON(Secrets, secrets_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateConnectionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_FROM_JSON(Configs, configs_);
      DARABONBA_PTR_FROM_JSON(ConnectionName, connectionName_);
      DARABONBA_PTR_FROM_JSON(ConnectionType, connectionType_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Models, models_);
      DARABONBA_PTR_FROM_JSON(ResourceMeta, resourceMeta_);
      DARABONBA_PTR_FROM_JSON(Secrets, secrets_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    CreateConnectionRequest() = default ;
    CreateConnectionRequest(const CreateConnectionRequest &) = default ;
    CreateConnectionRequest(CreateConnectionRequest &&) = default ;
    CreateConnectionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateConnectionRequest() = default ;
    CreateConnectionRequest& operator=(const CreateConnectionRequest &) = default ;
    CreateConnectionRequest& operator=(CreateConnectionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResourceMeta : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResourceMeta& obj) { 
        DARABONBA_PTR_TO_JSON(Extra, extra_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      };
      friend void from_json(const Darabonba::Json& j, ResourceMeta& obj) { 
        DARABONBA_PTR_FROM_JSON(Extra, extra_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      };
      ResourceMeta() = default ;
      ResourceMeta(const ResourceMeta &) = default ;
      ResourceMeta(ResourceMeta &&) = default ;
      ResourceMeta(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResourceMeta() = default ;
      ResourceMeta& operator=(const ResourceMeta &) = default ;
      ResourceMeta& operator=(ResourceMeta &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->extra_ == nullptr
        && this->instanceId_ == nullptr && this->instanceName_ == nullptr; };
      // extra Field Functions 
      bool hasExtra() const { return this->extra_ != nullptr;};
      void deleteExtra() { this->extra_ = nullptr;};
      inline string getExtra() const { DARABONBA_PTR_GET_DEFAULT(extra_, "") };
      inline ResourceMeta& setExtra(string extra) { DARABONBA_PTR_SET_VALUE(extra_, extra) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline ResourceMeta& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline ResourceMeta& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    protected:
      shared_ptr<string> extra_ {};
      // The instance ID.
      shared_ptr<string> instanceId_ {};
      // The instance name.
      shared_ptr<string> instanceName_ {};
    };

    class Models : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Models& obj) { 
        DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
        DARABONBA_PTR_TO_JSON(Model, model_);
        DARABONBA_PTR_TO_JSON(ModelType, modelType_);
        DARABONBA_PTR_TO_JSON(ToolCall, toolCall_);
      };
      friend void from_json(const Darabonba::Json& j, Models& obj) { 
        DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
        DARABONBA_PTR_FROM_JSON(Model, model_);
        DARABONBA_PTR_FROM_JSON(ModelType, modelType_);
        DARABONBA_PTR_FROM_JSON(ToolCall, toolCall_);
      };
      Models() = default ;
      Models(const Models &) = default ;
      Models(Models &&) = default ;
      Models(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Models() = default ;
      Models& operator=(const Models &) = default ;
      Models& operator=(Models &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->displayName_ == nullptr
        && this->model_ == nullptr && this->modelType_ == nullptr && this->toolCall_ == nullptr; };
      // displayName Field Functions 
      bool hasDisplayName() const { return this->displayName_ != nullptr;};
      void deleteDisplayName() { this->displayName_ = nullptr;};
      inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
      inline Models& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


      // model Field Functions 
      bool hasModel() const { return this->model_ != nullptr;};
      void deleteModel() { this->model_ = nullptr;};
      inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
      inline Models& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


      // modelType Field Functions 
      bool hasModelType() const { return this->modelType_ != nullptr;};
      void deleteModelType() { this->modelType_ = nullptr;};
      inline string getModelType() const { DARABONBA_PTR_GET_DEFAULT(modelType_, "") };
      inline Models& setModelType(string modelType) { DARABONBA_PTR_SET_VALUE(modelType_, modelType) };


      // toolCall Field Functions 
      bool hasToolCall() const { return this->toolCall_ != nullptr;};
      void deleteToolCall() { this->toolCall_ = nullptr;};
      inline bool getToolCall() const { DARABONBA_PTR_GET_DEFAULT(toolCall_, false) };
      inline Models& setToolCall(bool toolCall) { DARABONBA_PTR_SET_VALUE(toolCall_, toolCall) };


    protected:
      // The display name of the model.
      shared_ptr<string> displayName_ {};
      // The model identifier.
      shared_ptr<string> model_ {};
      // The model type. Valid values:
      // 
      // *   LLM
      // *   Embedding
      // *   ReRank
      shared_ptr<string> modelType_ {};
      // Specifies whether a tool can be called by using ToolCall. Valid values:
      // 
      // *   true
      // *   false
      shared_ptr<bool> toolCall_ {};
    };

    virtual bool empty() const override { return this->accessibility_ == nullptr
        && this->configs_ == nullptr && this->connectionName_ == nullptr && this->connectionType_ == nullptr && this->description_ == nullptr && this->models_ == nullptr
        && this->resourceMeta_ == nullptr && this->secrets_ == nullptr && this->workspaceId_ == nullptr; };
    // accessibility Field Functions 
    bool hasAccessibility() const { return this->accessibility_ != nullptr;};
    void deleteAccessibility() { this->accessibility_ = nullptr;};
    inline string getAccessibility() const { DARABONBA_PTR_GET_DEFAULT(accessibility_, "") };
    inline CreateConnectionRequest& setAccessibility(string accessibility) { DARABONBA_PTR_SET_VALUE(accessibility_, accessibility) };


    // configs Field Functions 
    bool hasConfigs() const { return this->configs_ != nullptr;};
    void deleteConfigs() { this->configs_ = nullptr;};
    inline const map<string, string> & getConfigs() const { DARABONBA_PTR_GET_CONST(configs_, map<string, string>) };
    inline map<string, string> getConfigs() { DARABONBA_PTR_GET(configs_, map<string, string>) };
    inline CreateConnectionRequest& setConfigs(const map<string, string> & configs) { DARABONBA_PTR_SET_VALUE(configs_, configs) };
    inline CreateConnectionRequest& setConfigs(map<string, string> && configs) { DARABONBA_PTR_SET_RVALUE(configs_, configs) };


    // connectionName Field Functions 
    bool hasConnectionName() const { return this->connectionName_ != nullptr;};
    void deleteConnectionName() { this->connectionName_ = nullptr;};
    inline string getConnectionName() const { DARABONBA_PTR_GET_DEFAULT(connectionName_, "") };
    inline CreateConnectionRequest& setConnectionName(string connectionName) { DARABONBA_PTR_SET_VALUE(connectionName_, connectionName) };


    // connectionType Field Functions 
    bool hasConnectionType() const { return this->connectionType_ != nullptr;};
    void deleteConnectionType() { this->connectionType_ = nullptr;};
    inline string getConnectionType() const { DARABONBA_PTR_GET_DEFAULT(connectionType_, "") };
    inline CreateConnectionRequest& setConnectionType(string connectionType) { DARABONBA_PTR_SET_VALUE(connectionType_, connectionType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateConnectionRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // models Field Functions 
    bool hasModels() const { return this->models_ != nullptr;};
    void deleteModels() { this->models_ = nullptr;};
    inline const vector<CreateConnectionRequest::Models> & getModels() const { DARABONBA_PTR_GET_CONST(models_, vector<CreateConnectionRequest::Models>) };
    inline vector<CreateConnectionRequest::Models> getModels() { DARABONBA_PTR_GET(models_, vector<CreateConnectionRequest::Models>) };
    inline CreateConnectionRequest& setModels(const vector<CreateConnectionRequest::Models> & models) { DARABONBA_PTR_SET_VALUE(models_, models) };
    inline CreateConnectionRequest& setModels(vector<CreateConnectionRequest::Models> && models) { DARABONBA_PTR_SET_RVALUE(models_, models) };


    // resourceMeta Field Functions 
    bool hasResourceMeta() const { return this->resourceMeta_ != nullptr;};
    void deleteResourceMeta() { this->resourceMeta_ = nullptr;};
    inline const CreateConnectionRequest::ResourceMeta & getResourceMeta() const { DARABONBA_PTR_GET_CONST(resourceMeta_, CreateConnectionRequest::ResourceMeta) };
    inline CreateConnectionRequest::ResourceMeta getResourceMeta() { DARABONBA_PTR_GET(resourceMeta_, CreateConnectionRequest::ResourceMeta) };
    inline CreateConnectionRequest& setResourceMeta(const CreateConnectionRequest::ResourceMeta & resourceMeta) { DARABONBA_PTR_SET_VALUE(resourceMeta_, resourceMeta) };
    inline CreateConnectionRequest& setResourceMeta(CreateConnectionRequest::ResourceMeta && resourceMeta) { DARABONBA_PTR_SET_RVALUE(resourceMeta_, resourceMeta) };


    // secrets Field Functions 
    bool hasSecrets() const { return this->secrets_ != nullptr;};
    void deleteSecrets() { this->secrets_ = nullptr;};
    inline const map<string, string> & getSecrets() const { DARABONBA_PTR_GET_CONST(secrets_, map<string, string>) };
    inline map<string, string> getSecrets() { DARABONBA_PTR_GET(secrets_, map<string, string>) };
    inline CreateConnectionRequest& setSecrets(const map<string, string> & secrets) { DARABONBA_PTR_SET_VALUE(secrets_, secrets) };
    inline CreateConnectionRequest& setSecrets(map<string, string> && secrets) { DARABONBA_PTR_SET_RVALUE(secrets_, secrets) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CreateConnectionRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The accessibility of the workspace. Valid values:
    // 
    // *   PRIVATE: The workspace is accessible only to you and the administrator of the workspace. This is the default value.
    // *   PUBLIC: The workspace is accessible to all users in the workspace.
    shared_ptr<string> accessibility_ {};
    // The connection configurations, in key-value pairs. The key varies based on the connection type. For more information, see the supplementary notes below the request parameters.
    // 
    // This parameter is required.
    shared_ptr<map<string, string>> configs_ {};
    // The connection name.
    // 
    // This parameter is required.
    shared_ptr<string> connectionName_ {};
    // The connection type. Valid values:
    // 
    // *   DashScopeConnection: Alibaba Cloud Model Studio connection
    // *   OpenLLMConnection: open source model connection
    // *   MilvusConnection: Milvus connection
    // *   OpenSearchConnection: OpenSearch connection
    // *   LindormConnection: Lindorm connection
    // *   ElasticsearchConnection: Elasticsearch connection
    // *   HologresConnection: Hologres connection
    // *   RDSConnection: RDS connection
    // *   CustomConnection: custom connection
    shared_ptr<string> connectionType_ {};
    // The connection description.
    shared_ptr<string> description_ {};
    // The models, which apply to model service connections.
    shared_ptr<vector<CreateConnectionRequest::Models>> models_ {};
    // The instance resource information of the connection, which applies to database connections.
    shared_ptr<CreateConnectionRequest::ResourceMeta> resourceMeta_ {};
    // The configuration to be encrypted. Examples: the database logon account and password and the key of the model service.
    shared_ptr<map<string, string>> secrets_ {};
    // The workspace ID. You can call [ListWorkspaces](https://help.aliyun.com/document_detail/449124.html) to obtain the workspace ID.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
