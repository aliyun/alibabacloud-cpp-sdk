// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELCONNECTION_HPP_
#define ALIBABACLOUD_MODELS_MODELCONNECTION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModelConnectionConsumerAPIKey.hpp>
#include <alibabacloud/models/ModelInfoConfig.hpp>
#include <alibabacloud/models/ModelConnectionProviderSettings.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class ModelConnection : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelConnection& obj) { 
      DARABONBA_PTR_TO_JSON(consumerApiKeys, consumerApiKeys_);
      DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(lastUpdatedAt, lastUpdatedAt_);
      DARABONBA_PTR_TO_JSON(modelConnectionId, modelConnectionId_);
      DARABONBA_PTR_TO_JSON(modelConnectionName, modelConnectionName_);
      DARABONBA_PTR_TO_JSON(modelInfoConfigs, modelInfoConfigs_);
      DARABONBA_PTR_TO_JSON(provider, provider_);
      DARABONBA_PTR_TO_JSON(providerSettings, providerSettings_);
      DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, ModelConnection& obj) { 
      DARABONBA_PTR_FROM_JSON(consumerApiKeys, consumerApiKeys_);
      DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(lastUpdatedAt, lastUpdatedAt_);
      DARABONBA_PTR_FROM_JSON(modelConnectionId, modelConnectionId_);
      DARABONBA_PTR_FROM_JSON(modelConnectionName, modelConnectionName_);
      DARABONBA_PTR_FROM_JSON(modelInfoConfigs, modelInfoConfigs_);
      DARABONBA_PTR_FROM_JSON(provider, provider_);
      DARABONBA_PTR_FROM_JSON(providerSettings, providerSettings_);
      DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
    };
    ModelConnection() = default ;
    ModelConnection(const ModelConnection &) = default ;
    ModelConnection(ModelConnection &&) = default ;
    ModelConnection(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelConnection() = default ;
    ModelConnection& operator=(const ModelConnection &) = default ;
    ModelConnection& operator=(ModelConnection &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->consumerApiKeys_ == nullptr
        && this->createdAt_ == nullptr && this->description_ == nullptr && this->lastUpdatedAt_ == nullptr && this->modelConnectionId_ == nullptr && this->modelConnectionName_ == nullptr
        && this->modelInfoConfigs_ == nullptr && this->provider_ == nullptr && this->providerSettings_ == nullptr && this->workspaceId_ == nullptr; };
    // consumerApiKeys Field Functions 
    bool hasConsumerApiKeys() const { return this->consumerApiKeys_ != nullptr;};
    void deleteConsumerApiKeys() { this->consumerApiKeys_ = nullptr;};
    inline const vector<ModelConnectionConsumerAPIKey> & getConsumerApiKeys() const { DARABONBA_PTR_GET_CONST(consumerApiKeys_, vector<ModelConnectionConsumerAPIKey>) };
    inline vector<ModelConnectionConsumerAPIKey> getConsumerApiKeys() { DARABONBA_PTR_GET(consumerApiKeys_, vector<ModelConnectionConsumerAPIKey>) };
    inline ModelConnection& setConsumerApiKeys(const vector<ModelConnectionConsumerAPIKey> & consumerApiKeys) { DARABONBA_PTR_SET_VALUE(consumerApiKeys_, consumerApiKeys) };
    inline ModelConnection& setConsumerApiKeys(vector<ModelConnectionConsumerAPIKey> && consumerApiKeys) { DARABONBA_PTR_SET_RVALUE(consumerApiKeys_, consumerApiKeys) };


    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
    inline ModelConnection& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModelConnection& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // lastUpdatedAt Field Functions 
    bool hasLastUpdatedAt() const { return this->lastUpdatedAt_ != nullptr;};
    void deleteLastUpdatedAt() { this->lastUpdatedAt_ = nullptr;};
    inline string getLastUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(lastUpdatedAt_, "") };
    inline ModelConnection& setLastUpdatedAt(string lastUpdatedAt) { DARABONBA_PTR_SET_VALUE(lastUpdatedAt_, lastUpdatedAt) };


    // modelConnectionId Field Functions 
    bool hasModelConnectionId() const { return this->modelConnectionId_ != nullptr;};
    void deleteModelConnectionId() { this->modelConnectionId_ = nullptr;};
    inline string getModelConnectionId() const { DARABONBA_PTR_GET_DEFAULT(modelConnectionId_, "") };
    inline ModelConnection& setModelConnectionId(string modelConnectionId) { DARABONBA_PTR_SET_VALUE(modelConnectionId_, modelConnectionId) };


    // modelConnectionName Field Functions 
    bool hasModelConnectionName() const { return this->modelConnectionName_ != nullptr;};
    void deleteModelConnectionName() { this->modelConnectionName_ = nullptr;};
    inline string getModelConnectionName() const { DARABONBA_PTR_GET_DEFAULT(modelConnectionName_, "") };
    inline ModelConnection& setModelConnectionName(string modelConnectionName) { DARABONBA_PTR_SET_VALUE(modelConnectionName_, modelConnectionName) };


    // modelInfoConfigs Field Functions 
    bool hasModelInfoConfigs() const { return this->modelInfoConfigs_ != nullptr;};
    void deleteModelInfoConfigs() { this->modelInfoConfigs_ = nullptr;};
    inline const vector<ModelInfoConfig> & getModelInfoConfigs() const { DARABONBA_PTR_GET_CONST(modelInfoConfigs_, vector<ModelInfoConfig>) };
    inline vector<ModelInfoConfig> getModelInfoConfigs() { DARABONBA_PTR_GET(modelInfoConfigs_, vector<ModelInfoConfig>) };
    inline ModelConnection& setModelInfoConfigs(const vector<ModelInfoConfig> & modelInfoConfigs) { DARABONBA_PTR_SET_VALUE(modelInfoConfigs_, modelInfoConfigs) };
    inline ModelConnection& setModelInfoConfigs(vector<ModelInfoConfig> && modelInfoConfigs) { DARABONBA_PTR_SET_RVALUE(modelInfoConfigs_, modelInfoConfigs) };


    // provider Field Functions 
    bool hasProvider() const { return this->provider_ != nullptr;};
    void deleteProvider() { this->provider_ = nullptr;};
    inline string getProvider() const { DARABONBA_PTR_GET_DEFAULT(provider_, "") };
    inline ModelConnection& setProvider(string provider) { DARABONBA_PTR_SET_VALUE(provider_, provider) };


    // providerSettings Field Functions 
    bool hasProviderSettings() const { return this->providerSettings_ != nullptr;};
    void deleteProviderSettings() { this->providerSettings_ = nullptr;};
    inline const ModelConnectionProviderSettings & getProviderSettings() const { DARABONBA_PTR_GET_CONST(providerSettings_, ModelConnectionProviderSettings) };
    inline ModelConnectionProviderSettings getProviderSettings() { DARABONBA_PTR_GET(providerSettings_, ModelConnectionProviderSettings) };
    inline ModelConnection& setProviderSettings(const ModelConnectionProviderSettings & providerSettings) { DARABONBA_PTR_SET_VALUE(providerSettings_, providerSettings) };
    inline ModelConnection& setProviderSettings(ModelConnectionProviderSettings && providerSettings) { DARABONBA_PTR_SET_RVALUE(providerSettings_, providerSettings) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ModelConnection& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // 绑定的消费者API密钥列表
    shared_ptr<vector<ModelConnectionConsumerAPIKey>> consumerApiKeys_ {};
    // 模型连接的创建时间，采用ISO 8601格式
    shared_ptr<string> createdAt_ {};
    // 模型连接的描述信息
    shared_ptr<string> description_ {};
    // 模型连接最后一次更新的时间，采用ISO 8601格式
    shared_ptr<string> lastUpdatedAt_ {};
    // 模型连接的唯一标识符
    shared_ptr<string> modelConnectionId_ {};
    // 模型连接的唯一名称标识
    shared_ptr<string> modelConnectionName_ {};
    // 模型元数据配置列表，包含各个模型的功能特性和参数规则
    shared_ptr<vector<ModelInfoConfig>> modelInfoConfigs_ {};
    // 模型提供商名称
    shared_ptr<string> provider_ {};
    // 模型提供商的配置信息
    shared_ptr<ModelConnectionProviderSettings> providerSettings_ {};
    // 模型连接所属的工作空间标识符
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
