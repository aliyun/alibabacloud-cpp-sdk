// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONNECTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCONNECTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
#include <alibabacloud/models/GetConnectionResponseBodyModels.hpp>
#include <alibabacloud/models/GetConnectionResponseBodyResourceMeta.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class GetConnectionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetConnectionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_TO_JSON(Configs, configs_);
      DARABONBA_PTR_TO_JSON(ConnectionId, connectionId_);
      DARABONBA_PTR_TO_JSON(ConnectionName, connectionName_);
      DARABONBA_PTR_TO_JSON(ConnectionType, connectionType_);
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_TO_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_TO_JSON(Models, models_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceMeta, resourceMeta_);
      DARABONBA_PTR_TO_JSON(Secrets, secrets_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetConnectionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_FROM_JSON(Configs, configs_);
      DARABONBA_PTR_FROM_JSON(ConnectionId, connectionId_);
      DARABONBA_PTR_FROM_JSON(ConnectionName, connectionName_);
      DARABONBA_PTR_FROM_JSON(ConnectionType, connectionType_);
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_FROM_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_FROM_JSON(Models, models_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceMeta, resourceMeta_);
      DARABONBA_PTR_FROM_JSON(Secrets, secrets_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    GetConnectionResponseBody() = default ;
    GetConnectionResponseBody(const GetConnectionResponseBody &) = default ;
    GetConnectionResponseBody(GetConnectionResponseBody &&) = default ;
    GetConnectionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetConnectionResponseBody() = default ;
    GetConnectionResponseBody& operator=(const GetConnectionResponseBody &) = default ;
    GetConnectionResponseBody& operator=(GetConnectionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessibility_ == nullptr
        && return this->configs_ == nullptr && return this->connectionId_ == nullptr && return this->connectionName_ == nullptr && return this->connectionType_ == nullptr && return this->creator_ == nullptr
        && return this->description_ == nullptr && return this->gmtCreateTime_ == nullptr && return this->gmtModifiedTime_ == nullptr && return this->models_ == nullptr && return this->requestId_ == nullptr
        && return this->resourceMeta_ == nullptr && return this->secrets_ == nullptr && return this->workspaceId_ == nullptr; };
    // accessibility Field Functions 
    bool hasAccessibility() const { return this->accessibility_ != nullptr;};
    void deleteAccessibility() { this->accessibility_ = nullptr;};
    inline string accessibility() const { DARABONBA_PTR_GET_DEFAULT(accessibility_, "") };
    inline GetConnectionResponseBody& setAccessibility(string accessibility) { DARABONBA_PTR_SET_VALUE(accessibility_, accessibility) };


    // configs Field Functions 
    bool hasConfigs() const { return this->configs_ != nullptr;};
    void deleteConfigs() { this->configs_ = nullptr;};
    inline const map<string, string> & configs() const { DARABONBA_PTR_GET_CONST(configs_, map<string, string>) };
    inline map<string, string> configs() { DARABONBA_PTR_GET(configs_, map<string, string>) };
    inline GetConnectionResponseBody& setConfigs(const map<string, string> & configs) { DARABONBA_PTR_SET_VALUE(configs_, configs) };
    inline GetConnectionResponseBody& setConfigs(map<string, string> && configs) { DARABONBA_PTR_SET_RVALUE(configs_, configs) };


    // connectionId Field Functions 
    bool hasConnectionId() const { return this->connectionId_ != nullptr;};
    void deleteConnectionId() { this->connectionId_ = nullptr;};
    inline string connectionId() const { DARABONBA_PTR_GET_DEFAULT(connectionId_, "") };
    inline GetConnectionResponseBody& setConnectionId(string connectionId) { DARABONBA_PTR_SET_VALUE(connectionId_, connectionId) };


    // connectionName Field Functions 
    bool hasConnectionName() const { return this->connectionName_ != nullptr;};
    void deleteConnectionName() { this->connectionName_ = nullptr;};
    inline string connectionName() const { DARABONBA_PTR_GET_DEFAULT(connectionName_, "") };
    inline GetConnectionResponseBody& setConnectionName(string connectionName) { DARABONBA_PTR_SET_VALUE(connectionName_, connectionName) };


    // connectionType Field Functions 
    bool hasConnectionType() const { return this->connectionType_ != nullptr;};
    void deleteConnectionType() { this->connectionType_ = nullptr;};
    inline string connectionType() const { DARABONBA_PTR_GET_DEFAULT(connectionType_, "") };
    inline GetConnectionResponseBody& setConnectionType(string connectionType) { DARABONBA_PTR_SET_VALUE(connectionType_, connectionType) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline GetConnectionResponseBody& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetConnectionResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string gmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline GetConnectionResponseBody& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // gmtModifiedTime Field Functions 
    bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
    void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
    inline string gmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
    inline GetConnectionResponseBody& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


    // models Field Functions 
    bool hasModels() const { return this->models_ != nullptr;};
    void deleteModels() { this->models_ = nullptr;};
    inline const vector<GetConnectionResponseBodyModels> & models() const { DARABONBA_PTR_GET_CONST(models_, vector<GetConnectionResponseBodyModels>) };
    inline vector<GetConnectionResponseBodyModels> models() { DARABONBA_PTR_GET(models_, vector<GetConnectionResponseBodyModels>) };
    inline GetConnectionResponseBody& setModels(const vector<GetConnectionResponseBodyModels> & models) { DARABONBA_PTR_SET_VALUE(models_, models) };
    inline GetConnectionResponseBody& setModels(vector<GetConnectionResponseBodyModels> && models) { DARABONBA_PTR_SET_RVALUE(models_, models) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetConnectionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceMeta Field Functions 
    bool hasResourceMeta() const { return this->resourceMeta_ != nullptr;};
    void deleteResourceMeta() { this->resourceMeta_ = nullptr;};
    inline const GetConnectionResponseBodyResourceMeta & resourceMeta() const { DARABONBA_PTR_GET_CONST(resourceMeta_, GetConnectionResponseBodyResourceMeta) };
    inline GetConnectionResponseBodyResourceMeta resourceMeta() { DARABONBA_PTR_GET(resourceMeta_, GetConnectionResponseBodyResourceMeta) };
    inline GetConnectionResponseBody& setResourceMeta(const GetConnectionResponseBodyResourceMeta & resourceMeta) { DARABONBA_PTR_SET_VALUE(resourceMeta_, resourceMeta) };
    inline GetConnectionResponseBody& setResourceMeta(GetConnectionResponseBodyResourceMeta && resourceMeta) { DARABONBA_PTR_SET_RVALUE(resourceMeta_, resourceMeta) };


    // secrets Field Functions 
    bool hasSecrets() const { return this->secrets_ != nullptr;};
    void deleteSecrets() { this->secrets_ = nullptr;};
    inline const map<string, string> & secrets() const { DARABONBA_PTR_GET_CONST(secrets_, map<string, string>) };
    inline map<string, string> secrets() { DARABONBA_PTR_GET(secrets_, map<string, string>) };
    inline GetConnectionResponseBody& setSecrets(const map<string, string> & secrets) { DARABONBA_PTR_SET_VALUE(secrets_, secrets) };
    inline GetConnectionResponseBody& setSecrets(map<string, string> && secrets) { DARABONBA_PTR_SET_RVALUE(secrets_, secrets) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline GetConnectionResponseBody& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The resource accessibility. Valid values:
    // 
    // *   PUBLIC: All members in the workspace can access the workspace.
    // *   PRIVATE: Only the creator can access the workspace.
    std::shared_ptr<string> accessibility_ = nullptr;
    // The connection configuration.
    std::shared_ptr<map<string, string>> configs_ = nullptr;
    // The connection ID.
    std::shared_ptr<string> connectionId_ = nullptr;
    // The connection name.
    std::shared_ptr<string> connectionName_ = nullptr;
    // The type of the connection. Valid values:
    // 
    // *   DashScopeConnection: Alibaba Cloud Model Studio connection.
    // *   OpenLLMConnection: Open source model connection.
    // *   MilvusConnection: Milvus connection.
    // *   OpenSearchConnection: OpenSearch connection.
    // *   LindormConnection: Lindorm connection.
    // *   ElasticsearchConnection: Elasticsearch connection.
    // *   HologresConnection: Hologres connection.
    // *   RDSConnection: RDS connection.
    // *   CustomConnection: Custom connection.
    std::shared_ptr<string> connectionType_ = nullptr;
    // The creator of the connection.
    std::shared_ptr<string> creator_ = nullptr;
    // The connection description.
    std::shared_ptr<string> description_ = nullptr;
    // The time when the connection is created, in UTC. The time follows the ISO 8601 standard.
    std::shared_ptr<string> gmtCreateTime_ = nullptr;
    // The time when the connection is modified, in UTC. The time follows the ISO 8601 standard.
    std::shared_ptr<string> gmtModifiedTime_ = nullptr;
    // The models, which apply to model service connections.
    std::shared_ptr<vector<GetConnectionResponseBodyModels>> models_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The instance resource information of the connection, which applies to database connections.
    std::shared_ptr<GetConnectionResponseBodyResourceMeta> resourceMeta_ = nullptr;
    // The encrypted configuration, in key-value pairs. Examples: the database logon password and the key of the model connection.
    std::shared_ptr<map<string, string>> secrets_ = nullptr;
    // The workspace ID.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
