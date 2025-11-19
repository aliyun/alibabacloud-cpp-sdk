// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMODELSERVICEINPUT_HPP_
#define ALIBABACLOUD_MODELS_CREATEMODELSERVICEINPUT_HPP_
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
  class CreateModelServiceInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateModelServiceInput& obj) { 
      DARABONBA_PTR_TO_JSON(credentialName, credentialName_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(modelInfoConfigs, modelInfoConfigs_);
      DARABONBA_PTR_TO_JSON(modelServiceName, modelServiceName_);
      DARABONBA_PTR_TO_JSON(modelType, modelType_);
      DARABONBA_PTR_TO_JSON(networkConfiguration, networkConfiguration_);
      DARABONBA_PTR_TO_JSON(provider, provider_);
      DARABONBA_PTR_TO_JSON(providerSettings, providerSettings_);
    };
    friend void from_json(const Darabonba::Json& j, CreateModelServiceInput& obj) { 
      DARABONBA_PTR_FROM_JSON(credentialName, credentialName_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(modelInfoConfigs, modelInfoConfigs_);
      DARABONBA_PTR_FROM_JSON(modelServiceName, modelServiceName_);
      DARABONBA_PTR_FROM_JSON(modelType, modelType_);
      DARABONBA_PTR_FROM_JSON(networkConfiguration, networkConfiguration_);
      DARABONBA_PTR_FROM_JSON(provider, provider_);
      DARABONBA_PTR_FROM_JSON(providerSettings, providerSettings_);
    };
    CreateModelServiceInput() = default ;
    CreateModelServiceInput(const CreateModelServiceInput &) = default ;
    CreateModelServiceInput(CreateModelServiceInput &&) = default ;
    CreateModelServiceInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateModelServiceInput() = default ;
    CreateModelServiceInput& operator=(const CreateModelServiceInput &) = default ;
    CreateModelServiceInput& operator=(CreateModelServiceInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->credentialName_ == nullptr
        && return this->description_ == nullptr && return this->modelInfoConfigs_ == nullptr && return this->modelServiceName_ == nullptr && return this->modelType_ == nullptr && return this->networkConfiguration_ == nullptr
        && return this->provider_ == nullptr && return this->providerSettings_ == nullptr; };
    // credentialName Field Functions 
    bool hasCredentialName() const { return this->credentialName_ != nullptr;};
    void deleteCredentialName() { this->credentialName_ = nullptr;};
    inline string credentialName() const { DARABONBA_PTR_GET_DEFAULT(credentialName_, "") };
    inline CreateModelServiceInput& setCredentialName(string credentialName) { DARABONBA_PTR_SET_VALUE(credentialName_, credentialName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateModelServiceInput& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // modelInfoConfigs Field Functions 
    bool hasModelInfoConfigs() const { return this->modelInfoConfigs_ != nullptr;};
    void deleteModelInfoConfigs() { this->modelInfoConfigs_ = nullptr;};
    inline const vector<ModelInfoConfig> & modelInfoConfigs() const { DARABONBA_PTR_GET_CONST(modelInfoConfigs_, vector<ModelInfoConfig>) };
    inline vector<ModelInfoConfig> modelInfoConfigs() { DARABONBA_PTR_GET(modelInfoConfigs_, vector<ModelInfoConfig>) };
    inline CreateModelServiceInput& setModelInfoConfigs(const vector<ModelInfoConfig> & modelInfoConfigs) { DARABONBA_PTR_SET_VALUE(modelInfoConfigs_, modelInfoConfigs) };
    inline CreateModelServiceInput& setModelInfoConfigs(vector<ModelInfoConfig> && modelInfoConfigs) { DARABONBA_PTR_SET_RVALUE(modelInfoConfigs_, modelInfoConfigs) };


    // modelServiceName Field Functions 
    bool hasModelServiceName() const { return this->modelServiceName_ != nullptr;};
    void deleteModelServiceName() { this->modelServiceName_ = nullptr;};
    inline string modelServiceName() const { DARABONBA_PTR_GET_DEFAULT(modelServiceName_, "") };
    inline CreateModelServiceInput& setModelServiceName(string modelServiceName) { DARABONBA_PTR_SET_VALUE(modelServiceName_, modelServiceName) };


    // modelType Field Functions 
    bool hasModelType() const { return this->modelType_ != nullptr;};
    void deleteModelType() { this->modelType_ = nullptr;};
    inline string modelType() const { DARABONBA_PTR_GET_DEFAULT(modelType_, "") };
    inline CreateModelServiceInput& setModelType(string modelType) { DARABONBA_PTR_SET_VALUE(modelType_, modelType) };


    // networkConfiguration Field Functions 
    bool hasNetworkConfiguration() const { return this->networkConfiguration_ != nullptr;};
    void deleteNetworkConfiguration() { this->networkConfiguration_ = nullptr;};
    inline const NetworkConfiguration & networkConfiguration() const { DARABONBA_PTR_GET_CONST(networkConfiguration_, NetworkConfiguration) };
    inline NetworkConfiguration networkConfiguration() { DARABONBA_PTR_GET(networkConfiguration_, NetworkConfiguration) };
    inline CreateModelServiceInput& setNetworkConfiguration(const NetworkConfiguration & networkConfiguration) { DARABONBA_PTR_SET_VALUE(networkConfiguration_, networkConfiguration) };
    inline CreateModelServiceInput& setNetworkConfiguration(NetworkConfiguration && networkConfiguration) { DARABONBA_PTR_SET_RVALUE(networkConfiguration_, networkConfiguration) };


    // provider Field Functions 
    bool hasProvider() const { return this->provider_ != nullptr;};
    void deleteProvider() { this->provider_ = nullptr;};
    inline string provider() const { DARABONBA_PTR_GET_DEFAULT(provider_, "") };
    inline CreateModelServiceInput& setProvider(string provider) { DARABONBA_PTR_SET_VALUE(provider_, provider) };


    // providerSettings Field Functions 
    bool hasProviderSettings() const { return this->providerSettings_ != nullptr;};
    void deleteProviderSettings() { this->providerSettings_ = nullptr;};
    inline const ProviderSettings & providerSettings() const { DARABONBA_PTR_GET_CONST(providerSettings_, ProviderSettings) };
    inline ProviderSettings providerSettings() { DARABONBA_PTR_GET(providerSettings_, ProviderSettings) };
    inline CreateModelServiceInput& setProviderSettings(const ProviderSettings & providerSettings) { DARABONBA_PTR_SET_VALUE(providerSettings_, providerSettings) };
    inline CreateModelServiceInput& setProviderSettings(ProviderSettings && providerSettings) { DARABONBA_PTR_SET_RVALUE(providerSettings_, providerSettings) };


  protected:
    std::shared_ptr<string> credentialName_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<vector<ModelInfoConfig>> modelInfoConfigs_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> modelServiceName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> modelType_ = nullptr;
    std::shared_ptr<NetworkConfiguration> networkConfiguration_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> provider_ = nullptr;
    // This parameter is required.
    std::shared_ptr<ProviderSettings> providerSettings_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
