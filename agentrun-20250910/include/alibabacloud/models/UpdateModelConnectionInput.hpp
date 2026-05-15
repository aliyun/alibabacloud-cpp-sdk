// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMODELCONNECTIONINPUT_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMODELCONNECTIONINPUT_HPP_
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
  class UpdateModelConnectionInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateModelConnectionInput& obj) { 
      DARABONBA_PTR_TO_JSON(consumerApiKeys, consumerApiKeys_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(modelInfoConfigs, modelInfoConfigs_);
      DARABONBA_PTR_TO_JSON(providerSettings, providerSettings_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateModelConnectionInput& obj) { 
      DARABONBA_PTR_FROM_JSON(consumerApiKeys, consumerApiKeys_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(modelInfoConfigs, modelInfoConfigs_);
      DARABONBA_PTR_FROM_JSON(providerSettings, providerSettings_);
    };
    UpdateModelConnectionInput() = default ;
    UpdateModelConnectionInput(const UpdateModelConnectionInput &) = default ;
    UpdateModelConnectionInput(UpdateModelConnectionInput &&) = default ;
    UpdateModelConnectionInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateModelConnectionInput() = default ;
    UpdateModelConnectionInput& operator=(const UpdateModelConnectionInput &) = default ;
    UpdateModelConnectionInput& operator=(UpdateModelConnectionInput &&) = default ;
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
        && this->description_ == nullptr && this->modelInfoConfigs_ == nullptr && this->providerSettings_ == nullptr; };
    // consumerApiKeys Field Functions 
    bool hasConsumerApiKeys() const { return this->consumerApiKeys_ != nullptr;};
    void deleteConsumerApiKeys() { this->consumerApiKeys_ = nullptr;};
    inline const vector<UpdateModelConnectionInput::ConsumerApiKeys> & getConsumerApiKeys() const { DARABONBA_PTR_GET_CONST(consumerApiKeys_, vector<UpdateModelConnectionInput::ConsumerApiKeys>) };
    inline vector<UpdateModelConnectionInput::ConsumerApiKeys> getConsumerApiKeys() { DARABONBA_PTR_GET(consumerApiKeys_, vector<UpdateModelConnectionInput::ConsumerApiKeys>) };
    inline UpdateModelConnectionInput& setConsumerApiKeys(const vector<UpdateModelConnectionInput::ConsumerApiKeys> & consumerApiKeys) { DARABONBA_PTR_SET_VALUE(consumerApiKeys_, consumerApiKeys) };
    inline UpdateModelConnectionInput& setConsumerApiKeys(vector<UpdateModelConnectionInput::ConsumerApiKeys> && consumerApiKeys) { DARABONBA_PTR_SET_RVALUE(consumerApiKeys_, consumerApiKeys) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateModelConnectionInput& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // modelInfoConfigs Field Functions 
    bool hasModelInfoConfigs() const { return this->modelInfoConfigs_ != nullptr;};
    void deleteModelInfoConfigs() { this->modelInfoConfigs_ = nullptr;};
    inline const vector<ModelInfoConfig> & getModelInfoConfigs() const { DARABONBA_PTR_GET_CONST(modelInfoConfigs_, vector<ModelInfoConfig>) };
    inline vector<ModelInfoConfig> getModelInfoConfigs() { DARABONBA_PTR_GET(modelInfoConfigs_, vector<ModelInfoConfig>) };
    inline UpdateModelConnectionInput& setModelInfoConfigs(const vector<ModelInfoConfig> & modelInfoConfigs) { DARABONBA_PTR_SET_VALUE(modelInfoConfigs_, modelInfoConfigs) };
    inline UpdateModelConnectionInput& setModelInfoConfigs(vector<ModelInfoConfig> && modelInfoConfigs) { DARABONBA_PTR_SET_RVALUE(modelInfoConfigs_, modelInfoConfigs) };


    // providerSettings Field Functions 
    bool hasProviderSettings() const { return this->providerSettings_ != nullptr;};
    void deleteProviderSettings() { this->providerSettings_ = nullptr;};
    inline const ModelConnectionProviderSettings & getProviderSettings() const { DARABONBA_PTR_GET_CONST(providerSettings_, ModelConnectionProviderSettings) };
    inline ModelConnectionProviderSettings getProviderSettings() { DARABONBA_PTR_GET(providerSettings_, ModelConnectionProviderSettings) };
    inline UpdateModelConnectionInput& setProviderSettings(const ModelConnectionProviderSettings & providerSettings) { DARABONBA_PTR_SET_VALUE(providerSettings_, providerSettings) };
    inline UpdateModelConnectionInput& setProviderSettings(ModelConnectionProviderSettings && providerSettings) { DARABONBA_PTR_SET_RVALUE(providerSettings_, providerSettings) };


  protected:
    // 更新绑定的消费者API密钥列表
    shared_ptr<vector<UpdateModelConnectionInput::ConsumerApiKeys>> consumerApiKeys_ {};
    // 更新后的描述信息
    shared_ptr<string> description_ {};
    // 更新后的模型元数据配置列表
    shared_ptr<vector<ModelInfoConfig>> modelInfoConfigs_ {};
    // 更新后的模型提供商配置信息
    shared_ptr<ModelConnectionProviderSettings> providerSettings_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
