// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELSERVICE_HPP_
#define ALIBABACLOUD_MODELS_MODELSERVICE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModelInfoConfig.hpp>
#include <alibabacloud/models/NetworkConfiguration.hpp>
#include <alibabacloud/models/ProviderSettings.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class ModelService : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelService& obj) { 
      DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
      DARABONBA_PTR_TO_JSON(credentialName, credentialName_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(lastUpdatedAt, lastUpdatedAt_);
      DARABONBA_PTR_TO_JSON(modelInfoConfigs, modelInfoConfigs_);
      DARABONBA_PTR_TO_JSON(modelServiceId, modelServiceId_);
      DARABONBA_PTR_TO_JSON(modelServiceName, modelServiceName_);
      DARABONBA_PTR_TO_JSON(modelType, modelType_);
      DARABONBA_PTR_TO_JSON(networkConfiguration, networkConfiguration_);
      DARABONBA_PTR_TO_JSON(provider, provider_);
      DARABONBA_PTR_TO_JSON(providerSettings, providerSettings_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(statusReason, statusReason_);
    };
    friend void from_json(const Darabonba::Json& j, ModelService& obj) { 
      DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(credentialName, credentialName_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(lastUpdatedAt, lastUpdatedAt_);
      DARABONBA_PTR_FROM_JSON(modelInfoConfigs, modelInfoConfigs_);
      DARABONBA_PTR_FROM_JSON(modelServiceId, modelServiceId_);
      DARABONBA_PTR_FROM_JSON(modelServiceName, modelServiceName_);
      DARABONBA_PTR_FROM_JSON(modelType, modelType_);
      DARABONBA_PTR_FROM_JSON(networkConfiguration, networkConfiguration_);
      DARABONBA_PTR_FROM_JSON(provider, provider_);
      DARABONBA_PTR_FROM_JSON(providerSettings, providerSettings_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(statusReason, statusReason_);
    };
    ModelService() = default ;
    ModelService(const ModelService &) = default ;
    ModelService(ModelService &&) = default ;
    ModelService(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelService() = default ;
    ModelService& operator=(const ModelService &) = default ;
    ModelService& operator=(ModelService &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createdAt_ == nullptr
        && this->credentialName_ == nullptr && this->description_ == nullptr && this->lastUpdatedAt_ == nullptr && this->modelInfoConfigs_ == nullptr && this->modelServiceId_ == nullptr
        && this->modelServiceName_ == nullptr && this->modelType_ == nullptr && this->networkConfiguration_ == nullptr && this->provider_ == nullptr && this->providerSettings_ == nullptr
        && this->status_ == nullptr && this->statusReason_ == nullptr; };
    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
    inline ModelService& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // credentialName Field Functions 
    bool hasCredentialName() const { return this->credentialName_ != nullptr;};
    void deleteCredentialName() { this->credentialName_ = nullptr;};
    inline string getCredentialName() const { DARABONBA_PTR_GET_DEFAULT(credentialName_, "") };
    inline ModelService& setCredentialName(string credentialName) { DARABONBA_PTR_SET_VALUE(credentialName_, credentialName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModelService& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // lastUpdatedAt Field Functions 
    bool hasLastUpdatedAt() const { return this->lastUpdatedAt_ != nullptr;};
    void deleteLastUpdatedAt() { this->lastUpdatedAt_ = nullptr;};
    inline string getLastUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(lastUpdatedAt_, "") };
    inline ModelService& setLastUpdatedAt(string lastUpdatedAt) { DARABONBA_PTR_SET_VALUE(lastUpdatedAt_, lastUpdatedAt) };


    // modelInfoConfigs Field Functions 
    bool hasModelInfoConfigs() const { return this->modelInfoConfigs_ != nullptr;};
    void deleteModelInfoConfigs() { this->modelInfoConfigs_ = nullptr;};
    inline const vector<ModelInfoConfig> & getModelInfoConfigs() const { DARABONBA_PTR_GET_CONST(modelInfoConfigs_, vector<ModelInfoConfig>) };
    inline vector<ModelInfoConfig> getModelInfoConfigs() { DARABONBA_PTR_GET(modelInfoConfigs_, vector<ModelInfoConfig>) };
    inline ModelService& setModelInfoConfigs(const vector<ModelInfoConfig> & modelInfoConfigs) { DARABONBA_PTR_SET_VALUE(modelInfoConfigs_, modelInfoConfigs) };
    inline ModelService& setModelInfoConfigs(vector<ModelInfoConfig> && modelInfoConfigs) { DARABONBA_PTR_SET_RVALUE(modelInfoConfigs_, modelInfoConfigs) };


    // modelServiceId Field Functions 
    bool hasModelServiceId() const { return this->modelServiceId_ != nullptr;};
    void deleteModelServiceId() { this->modelServiceId_ = nullptr;};
    inline string getModelServiceId() const { DARABONBA_PTR_GET_DEFAULT(modelServiceId_, "") };
    inline ModelService& setModelServiceId(string modelServiceId) { DARABONBA_PTR_SET_VALUE(modelServiceId_, modelServiceId) };


    // modelServiceName Field Functions 
    bool hasModelServiceName() const { return this->modelServiceName_ != nullptr;};
    void deleteModelServiceName() { this->modelServiceName_ = nullptr;};
    inline string getModelServiceName() const { DARABONBA_PTR_GET_DEFAULT(modelServiceName_, "") };
    inline ModelService& setModelServiceName(string modelServiceName) { DARABONBA_PTR_SET_VALUE(modelServiceName_, modelServiceName) };


    // modelType Field Functions 
    bool hasModelType() const { return this->modelType_ != nullptr;};
    void deleteModelType() { this->modelType_ = nullptr;};
    inline string getModelType() const { DARABONBA_PTR_GET_DEFAULT(modelType_, "") };
    inline ModelService& setModelType(string modelType) { DARABONBA_PTR_SET_VALUE(modelType_, modelType) };


    // networkConfiguration Field Functions 
    bool hasNetworkConfiguration() const { return this->networkConfiguration_ != nullptr;};
    void deleteNetworkConfiguration() { this->networkConfiguration_ = nullptr;};
    inline const NetworkConfiguration & getNetworkConfiguration() const { DARABONBA_PTR_GET_CONST(networkConfiguration_, NetworkConfiguration) };
    inline NetworkConfiguration getNetworkConfiguration() { DARABONBA_PTR_GET(networkConfiguration_, NetworkConfiguration) };
    inline ModelService& setNetworkConfiguration(const NetworkConfiguration & networkConfiguration) { DARABONBA_PTR_SET_VALUE(networkConfiguration_, networkConfiguration) };
    inline ModelService& setNetworkConfiguration(NetworkConfiguration && networkConfiguration) { DARABONBA_PTR_SET_RVALUE(networkConfiguration_, networkConfiguration) };


    // provider Field Functions 
    bool hasProvider() const { return this->provider_ != nullptr;};
    void deleteProvider() { this->provider_ = nullptr;};
    inline string getProvider() const { DARABONBA_PTR_GET_DEFAULT(provider_, "") };
    inline ModelService& setProvider(string provider) { DARABONBA_PTR_SET_VALUE(provider_, provider) };


    // providerSettings Field Functions 
    bool hasProviderSettings() const { return this->providerSettings_ != nullptr;};
    void deleteProviderSettings() { this->providerSettings_ = nullptr;};
    inline const ProviderSettings & getProviderSettings() const { DARABONBA_PTR_GET_CONST(providerSettings_, ProviderSettings) };
    inline ProviderSettings getProviderSettings() { DARABONBA_PTR_GET(providerSettings_, ProviderSettings) };
    inline ModelService& setProviderSettings(const ProviderSettings & providerSettings) { DARABONBA_PTR_SET_VALUE(providerSettings_, providerSettings) };
    inline ModelService& setProviderSettings(ProviderSettings && providerSettings) { DARABONBA_PTR_SET_RVALUE(providerSettings_, providerSettings) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ModelService& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusReason Field Functions 
    bool hasStatusReason() const { return this->statusReason_ != nullptr;};
    void deleteStatusReason() { this->statusReason_ = nullptr;};
    inline string getStatusReason() const { DARABONBA_PTR_GET_DEFAULT(statusReason_, "") };
    inline ModelService& setStatusReason(string statusReason) { DARABONBA_PTR_SET_VALUE(statusReason_, statusReason) };


  protected:
    shared_ptr<string> createdAt_ {};
    shared_ptr<string> credentialName_ {};
    shared_ptr<string> description_ {};
    shared_ptr<string> lastUpdatedAt_ {};
    shared_ptr<vector<ModelInfoConfig>> modelInfoConfigs_ {};
    shared_ptr<string> modelServiceId_ {};
    shared_ptr<string> modelServiceName_ {};
    shared_ptr<string> modelType_ {};
    shared_ptr<NetworkConfiguration> networkConfiguration_ {};
    shared_ptr<string> provider_ {};
    shared_ptr<ProviderSettings> providerSettings_ {};
    shared_ptr<string> status_ {};
    shared_ptr<string> statusReason_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
