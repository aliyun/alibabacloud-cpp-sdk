// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMODELCONNECTIONINPUT_HPP_
#define ALIBABACLOUD_MODELS_CREATEMODELCONNECTIONINPUT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
  class CreateModelConnectionInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateModelConnectionInput& obj) { 
      DARABONBA_PTR_TO_JSON(consumerApiKeys, consumerApiKeys_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(modelConnectionName, modelConnectionName_);
      DARABONBA_PTR_TO_JSON(modelInfoConfigs, modelInfoConfigs_);
      DARABONBA_PTR_TO_JSON(provider, provider_);
      DARABONBA_PTR_TO_JSON(providerSettings, providerSettings_);
      DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateModelConnectionInput& obj) { 
      DARABONBA_PTR_FROM_JSON(consumerApiKeys, consumerApiKeys_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(modelConnectionName, modelConnectionName_);
      DARABONBA_PTR_FROM_JSON(modelInfoConfigs, modelInfoConfigs_);
      DARABONBA_PTR_FROM_JSON(provider, provider_);
      DARABONBA_PTR_FROM_JSON(providerSettings, providerSettings_);
      DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
    };
    CreateModelConnectionInput() = default ;
    CreateModelConnectionInput(const CreateModelConnectionInput &) = default ;
    CreateModelConnectionInput(CreateModelConnectionInput &&) = default ;
    CreateModelConnectionInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateModelConnectionInput() = default ;
    CreateModelConnectionInput& operator=(const CreateModelConnectionInput &) = default ;
    CreateModelConnectionInput& operator=(CreateModelConnectionInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ConsumerApiKeys : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ConsumerApiKeys& obj) { 
        DARABONBA_PTR_TO_JSON(apiKeyId, apiKeyId_);
        DARABONBA_PTR_TO_JSON(value, value_);
      };
      friend void from_json(const Darabonba::Json& j, ConsumerApiKeys& obj) { 
        DARABONBA_PTR_FROM_JSON(apiKeyId, apiKeyId_);
        DARABONBA_PTR_FROM_JSON(value, value_);
      };
      ConsumerApiKeys() = default ;
      ConsumerApiKeys(const ConsumerApiKeys &) = default ;
      ConsumerApiKeys(ConsumerApiKeys &&) = default ;
      ConsumerApiKeys(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ConsumerApiKeys() = default ;
      ConsumerApiKeys& operator=(const ConsumerApiKeys &) = default ;
      ConsumerApiKeys& operator=(ConsumerApiKeys &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->apiKeyId_ == nullptr
        && this->value_ == nullptr; };
      // apiKeyId Field Functions 
      bool hasApiKeyId() const { return this->apiKeyId_ != nullptr;};
      void deleteApiKeyId() { this->apiKeyId_ = nullptr;};
      inline string getApiKeyId() const { DARABONBA_PTR_GET_DEFAULT(apiKeyId_, "") };
      inline ConsumerApiKeys& setApiKeyId(string apiKeyId) { DARABONBA_PTR_SET_VALUE(apiKeyId_, apiKeyId) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline ConsumerApiKeys& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      shared_ptr<string> apiKeyId_ {};
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->consumerApiKeys_ == nullptr
        && this->description_ == nullptr && this->modelConnectionName_ == nullptr && this->modelInfoConfigs_ == nullptr && this->provider_ == nullptr && this->providerSettings_ == nullptr
        && this->workspaceId_ == nullptr; };
    // consumerApiKeys Field Functions 
    bool hasConsumerApiKeys() const { return this->consumerApiKeys_ != nullptr;};
    void deleteConsumerApiKeys() { this->consumerApiKeys_ = nullptr;};
    inline const vector<CreateModelConnectionInput::ConsumerApiKeys> & getConsumerApiKeys() const { DARABONBA_PTR_GET_CONST(consumerApiKeys_, vector<CreateModelConnectionInput::ConsumerApiKeys>) };
    inline vector<CreateModelConnectionInput::ConsumerApiKeys> getConsumerApiKeys() { DARABONBA_PTR_GET(consumerApiKeys_, vector<CreateModelConnectionInput::ConsumerApiKeys>) };
    inline CreateModelConnectionInput& setConsumerApiKeys(const vector<CreateModelConnectionInput::ConsumerApiKeys> & consumerApiKeys) { DARABONBA_PTR_SET_VALUE(consumerApiKeys_, consumerApiKeys) };
    inline CreateModelConnectionInput& setConsumerApiKeys(vector<CreateModelConnectionInput::ConsumerApiKeys> && consumerApiKeys) { DARABONBA_PTR_SET_RVALUE(consumerApiKeys_, consumerApiKeys) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateModelConnectionInput& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // modelConnectionName Field Functions 
    bool hasModelConnectionName() const { return this->modelConnectionName_ != nullptr;};
    void deleteModelConnectionName() { this->modelConnectionName_ = nullptr;};
    inline string getModelConnectionName() const { DARABONBA_PTR_GET_DEFAULT(modelConnectionName_, "") };
    inline CreateModelConnectionInput& setModelConnectionName(string modelConnectionName) { DARABONBA_PTR_SET_VALUE(modelConnectionName_, modelConnectionName) };


    // modelInfoConfigs Field Functions 
    bool hasModelInfoConfigs() const { return this->modelInfoConfigs_ != nullptr;};
    void deleteModelInfoConfigs() { this->modelInfoConfigs_ = nullptr;};
    inline const vector<ModelInfoConfig> & getModelInfoConfigs() const { DARABONBA_PTR_GET_CONST(modelInfoConfigs_, vector<ModelInfoConfig>) };
    inline vector<ModelInfoConfig> getModelInfoConfigs() { DARABONBA_PTR_GET(modelInfoConfigs_, vector<ModelInfoConfig>) };
    inline CreateModelConnectionInput& setModelInfoConfigs(const vector<ModelInfoConfig> & modelInfoConfigs) { DARABONBA_PTR_SET_VALUE(modelInfoConfigs_, modelInfoConfigs) };
    inline CreateModelConnectionInput& setModelInfoConfigs(vector<ModelInfoConfig> && modelInfoConfigs) { DARABONBA_PTR_SET_RVALUE(modelInfoConfigs_, modelInfoConfigs) };


    // provider Field Functions 
    bool hasProvider() const { return this->provider_ != nullptr;};
    void deleteProvider() { this->provider_ = nullptr;};
    inline string getProvider() const { DARABONBA_PTR_GET_DEFAULT(provider_, "") };
    inline CreateModelConnectionInput& setProvider(string provider) { DARABONBA_PTR_SET_VALUE(provider_, provider) };


    // providerSettings Field Functions 
    bool hasProviderSettings() const { return this->providerSettings_ != nullptr;};
    void deleteProviderSettings() { this->providerSettings_ = nullptr;};
    inline const ModelConnectionProviderSettings & getProviderSettings() const { DARABONBA_PTR_GET_CONST(providerSettings_, ModelConnectionProviderSettings) };
    inline ModelConnectionProviderSettings getProviderSettings() { DARABONBA_PTR_GET(providerSettings_, ModelConnectionProviderSettings) };
    inline CreateModelConnectionInput& setProviderSettings(const ModelConnectionProviderSettings & providerSettings) { DARABONBA_PTR_SET_VALUE(providerSettings_, providerSettings) };
    inline CreateModelConnectionInput& setProviderSettings(ModelConnectionProviderSettings && providerSettings) { DARABONBA_PTR_SET_RVALUE(providerSettings_, providerSettings) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CreateModelConnectionInput& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // 要绑定的消费者API密钥列表；空表示开放模式
    shared_ptr<vector<CreateModelConnectionInput::ConsumerApiKeys>> consumerApiKeys_ {};
    // 模型连接的描述信息
    shared_ptr<string> description_ {};
    // 模型连接的唯一名称标识
    // 
    // This parameter is required.
    shared_ptr<string> modelConnectionName_ {};
    // 模型元数据配置列表
    shared_ptr<vector<ModelInfoConfig>> modelInfoConfigs_ {};
    // 模型提供商名称
    // 
    // This parameter is required.
    shared_ptr<string> provider_ {};
    // 模型提供商的配置信息，包括基础URL、模型列表等
    // 
    // This parameter is required.
    shared_ptr<ModelConnectionProviderSettings> providerSettings_ {};
    // 模型连接所属的工作空间标识符
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
