// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMODELAPIREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMODELAPIREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModelSelection.hpp>
#include <alibabacloud/models/ModelApiPolicyConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class CreateModelApiRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateModelApiRequest& obj) { 
      DARABONBA_PTR_TO_JSON(basePath, basePath_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(directSupplyFallbackEnabled, directSupplyFallbackEnabled_);
      DARABONBA_PTR_TO_JSON(domainIds, domainIds_);
      DARABONBA_PTR_TO_JSON(enableAuth, enableAuth_);
      DARABONBA_PTR_TO_JSON(firstByteTimeout, firstByteTimeout_);
      DARABONBA_PTR_TO_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(initialConfiguration, initialConfiguration_);
      DARABONBA_PTR_TO_JSON(modelSelection, modelSelection_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(policyConfigs, policyConfigs_);
      DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
    };
    friend void from_json(const Darabonba::Json& j, CreateModelApiRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(basePath, basePath_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(directSupplyFallbackEnabled, directSupplyFallbackEnabled_);
      DARABONBA_PTR_FROM_JSON(domainIds, domainIds_);
      DARABONBA_PTR_FROM_JSON(enableAuth, enableAuth_);
      DARABONBA_PTR_FROM_JSON(firstByteTimeout, firstByteTimeout_);
      DARABONBA_PTR_FROM_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(initialConfiguration, initialConfiguration_);
      DARABONBA_PTR_FROM_JSON(modelSelection, modelSelection_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(policyConfigs, policyConfigs_);
      DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
    };
    CreateModelApiRequest() = default ;
    CreateModelApiRequest(const CreateModelApiRequest &) = default ;
    CreateModelApiRequest(CreateModelApiRequest &&) = default ;
    CreateModelApiRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateModelApiRequest() = default ;
    CreateModelApiRequest& operator=(const CreateModelApiRequest &) = default ;
    CreateModelApiRequest& operator=(CreateModelApiRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->basePath_ == nullptr
        && this->description_ == nullptr && this->directSupplyFallbackEnabled_ == nullptr && this->domainIds_ == nullptr && this->enableAuth_ == nullptr && this->firstByteTimeout_ == nullptr
        && this->gatewayId_ == nullptr && this->initialConfiguration_ == nullptr && this->modelSelection_ == nullptr && this->name_ == nullptr && this->policyConfigs_ == nullptr
        && this->resourceGroupId_ == nullptr && this->clientToken_ == nullptr; };
    // basePath Field Functions 
    bool hasBasePath() const { return this->basePath_ != nullptr;};
    void deleteBasePath() { this->basePath_ = nullptr;};
    inline string getBasePath() const { DARABONBA_PTR_GET_DEFAULT(basePath_, "") };
    inline CreateModelApiRequest& setBasePath(string basePath) { DARABONBA_PTR_SET_VALUE(basePath_, basePath) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateModelApiRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // directSupplyFallbackEnabled Field Functions 
    bool hasDirectSupplyFallbackEnabled() const { return this->directSupplyFallbackEnabled_ != nullptr;};
    void deleteDirectSupplyFallbackEnabled() { this->directSupplyFallbackEnabled_ = nullptr;};
    inline bool getDirectSupplyFallbackEnabled() const { DARABONBA_PTR_GET_DEFAULT(directSupplyFallbackEnabled_, false) };
    inline CreateModelApiRequest& setDirectSupplyFallbackEnabled(bool directSupplyFallbackEnabled) { DARABONBA_PTR_SET_VALUE(directSupplyFallbackEnabled_, directSupplyFallbackEnabled) };


    // domainIds Field Functions 
    bool hasDomainIds() const { return this->domainIds_ != nullptr;};
    void deleteDomainIds() { this->domainIds_ = nullptr;};
    inline const vector<string> & getDomainIds() const { DARABONBA_PTR_GET_CONST(domainIds_, vector<string>) };
    inline vector<string> getDomainIds() { DARABONBA_PTR_GET(domainIds_, vector<string>) };
    inline CreateModelApiRequest& setDomainIds(const vector<string> & domainIds) { DARABONBA_PTR_SET_VALUE(domainIds_, domainIds) };
    inline CreateModelApiRequest& setDomainIds(vector<string> && domainIds) { DARABONBA_PTR_SET_RVALUE(domainIds_, domainIds) };


    // enableAuth Field Functions 
    bool hasEnableAuth() const { return this->enableAuth_ != nullptr;};
    void deleteEnableAuth() { this->enableAuth_ = nullptr;};
    inline bool getEnableAuth() const { DARABONBA_PTR_GET_DEFAULT(enableAuth_, false) };
    inline CreateModelApiRequest& setEnableAuth(bool enableAuth) { DARABONBA_PTR_SET_VALUE(enableAuth_, enableAuth) };


    // firstByteTimeout Field Functions 
    bool hasFirstByteTimeout() const { return this->firstByteTimeout_ != nullptr;};
    void deleteFirstByteTimeout() { this->firstByteTimeout_ = nullptr;};
    inline int32_t getFirstByteTimeout() const { DARABONBA_PTR_GET_DEFAULT(firstByteTimeout_, 0) };
    inline CreateModelApiRequest& setFirstByteTimeout(int32_t firstByteTimeout) { DARABONBA_PTR_SET_VALUE(firstByteTimeout_, firstByteTimeout) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline string getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
    inline CreateModelApiRequest& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // initialConfiguration Field Functions 
    bool hasInitialConfiguration() const { return this->initialConfiguration_ != nullptr;};
    void deleteInitialConfiguration() { this->initialConfiguration_ = nullptr;};
    inline bool getInitialConfiguration() const { DARABONBA_PTR_GET_DEFAULT(initialConfiguration_, false) };
    inline CreateModelApiRequest& setInitialConfiguration(bool initialConfiguration) { DARABONBA_PTR_SET_VALUE(initialConfiguration_, initialConfiguration) };


    // modelSelection Field Functions 
    bool hasModelSelection() const { return this->modelSelection_ != nullptr;};
    void deleteModelSelection() { this->modelSelection_ = nullptr;};
    inline const ModelSelection & getModelSelection() const { DARABONBA_PTR_GET_CONST(modelSelection_, ModelSelection) };
    inline ModelSelection getModelSelection() { DARABONBA_PTR_GET(modelSelection_, ModelSelection) };
    inline CreateModelApiRequest& setModelSelection(const ModelSelection & modelSelection) { DARABONBA_PTR_SET_VALUE(modelSelection_, modelSelection) };
    inline CreateModelApiRequest& setModelSelection(ModelSelection && modelSelection) { DARABONBA_PTR_SET_RVALUE(modelSelection_, modelSelection) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateModelApiRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // policyConfigs Field Functions 
    bool hasPolicyConfigs() const { return this->policyConfigs_ != nullptr;};
    void deletePolicyConfigs() { this->policyConfigs_ = nullptr;};
    inline const vector<ModelApiPolicyConfig> & getPolicyConfigs() const { DARABONBA_PTR_GET_CONST(policyConfigs_, vector<ModelApiPolicyConfig>) };
    inline vector<ModelApiPolicyConfig> getPolicyConfigs() { DARABONBA_PTR_GET(policyConfigs_, vector<ModelApiPolicyConfig>) };
    inline CreateModelApiRequest& setPolicyConfigs(const vector<ModelApiPolicyConfig> & policyConfigs) { DARABONBA_PTR_SET_VALUE(policyConfigs_, policyConfigs) };
    inline CreateModelApiRequest& setPolicyConfigs(vector<ModelApiPolicyConfig> && policyConfigs) { DARABONBA_PTR_SET_RVALUE(policyConfigs_, policyConfigs) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateModelApiRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateModelApiRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


  protected:
    // The API access prefix. The default value for creation is /. If omitted during an update, the original value is retained.
    shared_ptr<string> basePath_ {};
    // The description of the model API. If omitted during an update, the original value is retained.
    shared_ptr<string> description_ {};
    // Specifies whether to enable direct supply fallback. If omitted in a create request, the default value is false, which does not implicitly incur pay-as-you-go tail charges. You can only enable this feature by explicitly setting this parameter to true.
    shared_ptr<bool> directSupplyFallbackEnabled_ {};
    // The IDs of the selected custom or default instance domain names. This parameter must be explicitly specified and cannot be empty during creation. If omitted during an update, the original value is retained. If submitted, the entire list is replaced and cannot be empty.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> domainIds_ {};
    // Specifies whether to enable consumer API key authentication. If omitted during an update, the original value is retained. The type is fixed to Apikey or Custom.
    shared_ptr<bool> enableAuth_ {};
    // The timeout period for the first byte.
    shared_ptr<int32_t> firstByteTimeout_ {};
    // The target dedicated gateway instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> gatewayId_ {};
    // Specifies whether to explicitly perform the initial configuration. If omitted or set to false, standard multi-API creation is retained. If set to true, you must explicitly set name to default, basePath to /, and provide a non-empty clientToken. Additionally, when saving, multi-API management must be disabled and the number of complete new-version APIs must be zero.
    shared_ptr<bool> initialConfiguration_ {};
    // The model selection. This parameter is required for creation. If omitted during an update, the original value is retained. If submitted, the entire value is replaced.
    // 
    // This parameter is required.
    shared_ptr<ModelSelection> modelSelection_ {};
    // The name of the model API.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The configurations for AI request logging and AI security protection only. If omitted during an update, the original values are retained. If submitted, the inline policies of both types are entirely replaced. An empty array clears both types. Independent token quotas are not affected.
    shared_ptr<vector<ModelApiPolicyConfig>> policyConfigs_ {};
    // The ID of the resource group.
    shared_ptr<string> resourceGroupId_ {};
    // The idempotency identity. The caller generates a globally unique value (we recommend a UUID) to invoke the API. The maximum length is 64 characters. Within approximately 24 hours after the initial request succeeds, if you invoke a duplicate request with the same clientToken and identical request parameter values, the system directly returns the initial creation result. If a request parameter is inconsistent or the initial request is still being processed, the system returns the corresponding idempotency fault. If omitted, the original creation behavior is retained.
    shared_ptr<string> clientToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
