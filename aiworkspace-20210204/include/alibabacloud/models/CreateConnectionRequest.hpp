// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECONNECTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECONNECTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
#include <alibabacloud/models/CreateConnectionRequestModels.hpp>
#include <alibabacloud/models/CreateConnectionRequestResourceMeta.hpp>
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
    virtual bool empty() const override { return this->accessibility_ == nullptr
        && return this->configs_ == nullptr && return this->connectionName_ == nullptr && return this->connectionType_ == nullptr && return this->description_ == nullptr && return this->models_ == nullptr
        && return this->resourceMeta_ == nullptr && return this->secrets_ == nullptr && return this->workspaceId_ == nullptr; };
    // accessibility Field Functions 
    bool hasAccessibility() const { return this->accessibility_ != nullptr;};
    void deleteAccessibility() { this->accessibility_ = nullptr;};
    inline string accessibility() const { DARABONBA_PTR_GET_DEFAULT(accessibility_, "") };
    inline CreateConnectionRequest& setAccessibility(string accessibility) { DARABONBA_PTR_SET_VALUE(accessibility_, accessibility) };


    // configs Field Functions 
    bool hasConfigs() const { return this->configs_ != nullptr;};
    void deleteConfigs() { this->configs_ = nullptr;};
    inline const map<string, string> & configs() const { DARABONBA_PTR_GET_CONST(configs_, map<string, string>) };
    inline map<string, string> configs() { DARABONBA_PTR_GET(configs_, map<string, string>) };
    inline CreateConnectionRequest& setConfigs(const map<string, string> & configs) { DARABONBA_PTR_SET_VALUE(configs_, configs) };
    inline CreateConnectionRequest& setConfigs(map<string, string> && configs) { DARABONBA_PTR_SET_RVALUE(configs_, configs) };


    // connectionName Field Functions 
    bool hasConnectionName() const { return this->connectionName_ != nullptr;};
    void deleteConnectionName() { this->connectionName_ = nullptr;};
    inline string connectionName() const { DARABONBA_PTR_GET_DEFAULT(connectionName_, "") };
    inline CreateConnectionRequest& setConnectionName(string connectionName) { DARABONBA_PTR_SET_VALUE(connectionName_, connectionName) };


    // connectionType Field Functions 
    bool hasConnectionType() const { return this->connectionType_ != nullptr;};
    void deleteConnectionType() { this->connectionType_ = nullptr;};
    inline string connectionType() const { DARABONBA_PTR_GET_DEFAULT(connectionType_, "") };
    inline CreateConnectionRequest& setConnectionType(string connectionType) { DARABONBA_PTR_SET_VALUE(connectionType_, connectionType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateConnectionRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // models Field Functions 
    bool hasModels() const { return this->models_ != nullptr;};
    void deleteModels() { this->models_ = nullptr;};
    inline const vector<CreateConnectionRequestModels> & models() const { DARABONBA_PTR_GET_CONST(models_, vector<CreateConnectionRequestModels>) };
    inline vector<CreateConnectionRequestModels> models() { DARABONBA_PTR_GET(models_, vector<CreateConnectionRequestModels>) };
    inline CreateConnectionRequest& setModels(const vector<CreateConnectionRequestModels> & models) { DARABONBA_PTR_SET_VALUE(models_, models) };
    inline CreateConnectionRequest& setModels(vector<CreateConnectionRequestModels> && models) { DARABONBA_PTR_SET_RVALUE(models_, models) };


    // resourceMeta Field Functions 
    bool hasResourceMeta() const { return this->resourceMeta_ != nullptr;};
    void deleteResourceMeta() { this->resourceMeta_ = nullptr;};
    inline const CreateConnectionRequestResourceMeta & resourceMeta() const { DARABONBA_PTR_GET_CONST(resourceMeta_, CreateConnectionRequestResourceMeta) };
    inline CreateConnectionRequestResourceMeta resourceMeta() { DARABONBA_PTR_GET(resourceMeta_, CreateConnectionRequestResourceMeta) };
    inline CreateConnectionRequest& setResourceMeta(const CreateConnectionRequestResourceMeta & resourceMeta) { DARABONBA_PTR_SET_VALUE(resourceMeta_, resourceMeta) };
    inline CreateConnectionRequest& setResourceMeta(CreateConnectionRequestResourceMeta && resourceMeta) { DARABONBA_PTR_SET_RVALUE(resourceMeta_, resourceMeta) };


    // secrets Field Functions 
    bool hasSecrets() const { return this->secrets_ != nullptr;};
    void deleteSecrets() { this->secrets_ = nullptr;};
    inline const map<string, string> & secrets() const { DARABONBA_PTR_GET_CONST(secrets_, map<string, string>) };
    inline map<string, string> secrets() { DARABONBA_PTR_GET(secrets_, map<string, string>) };
    inline CreateConnectionRequest& setSecrets(const map<string, string> & secrets) { DARABONBA_PTR_SET_VALUE(secrets_, secrets) };
    inline CreateConnectionRequest& setSecrets(map<string, string> && secrets) { DARABONBA_PTR_SET_RVALUE(secrets_, secrets) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CreateConnectionRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The accessibility of the workspace. Valid values:
    // 
    // *   PRIVATE: The workspace is accessible only to you and the administrator of the workspace. This is the default value.
    // *   PUBLIC: The workspace is accessible to all users in the workspace.
    std::shared_ptr<string> accessibility_ = nullptr;
    // The connection configurations, in key-value pairs. The key varies based on the connection type. For more information, see the supplementary notes below the request parameters.
    // 
    // This parameter is required.
    std::shared_ptr<map<string, string>> configs_ = nullptr;
    // The connection name.
    // 
    // This parameter is required.
    std::shared_ptr<string> connectionName_ = nullptr;
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
    std::shared_ptr<string> connectionType_ = nullptr;
    // The connection description.
    std::shared_ptr<string> description_ = nullptr;
    // The models, which apply to model service connections.
    std::shared_ptr<vector<CreateConnectionRequestModels>> models_ = nullptr;
    // The instance resource information of the connection, which applies to database connections.
    std::shared_ptr<CreateConnectionRequestResourceMeta> resourceMeta_ = nullptr;
    // The configuration to be encrypted. Examples: the database logon account and password and the key of the model service.
    std::shared_ptr<map<string, string>> secrets_ = nullptr;
    // The workspace ID. You can call [ListWorkspaces](https://help.aliyun.com/document_detail/449124.html) to obtain the workspace ID.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
