// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMODELAPIREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMODELAPIREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModelSelection.hpp>
#include <alibabacloud/models/ModelSelectionDelta.hpp>
#include <alibabacloud/models/ModelApiPolicyConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class UpdateModelApiRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateModelApiRequest& obj) { 
      DARABONBA_PTR_TO_JSON(basePath, basePath_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(directSupplyFallbackEnabled, directSupplyFallbackEnabled_);
      DARABONBA_PTR_TO_JSON(domainIds, domainIds_);
      DARABONBA_PTR_TO_JSON(enableAuth, enableAuth_);
      DARABONBA_PTR_TO_JSON(firstByteTimeout, firstByteTimeout_);
      DARABONBA_PTR_TO_JSON(modelSelection, modelSelection_);
      DARABONBA_PTR_TO_JSON(modelSelectionDelta, modelSelectionDelta_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(policyConfigs, policyConfigs_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateModelApiRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(basePath, basePath_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(directSupplyFallbackEnabled, directSupplyFallbackEnabled_);
      DARABONBA_PTR_FROM_JSON(domainIds, domainIds_);
      DARABONBA_PTR_FROM_JSON(enableAuth, enableAuth_);
      DARABONBA_PTR_FROM_JSON(firstByteTimeout, firstByteTimeout_);
      DARABONBA_PTR_FROM_JSON(modelSelection, modelSelection_);
      DARABONBA_PTR_FROM_JSON(modelSelectionDelta, modelSelectionDelta_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(policyConfigs, policyConfigs_);
    };
    UpdateModelApiRequest() = default ;
    UpdateModelApiRequest(const UpdateModelApiRequest &) = default ;
    UpdateModelApiRequest(UpdateModelApiRequest &&) = default ;
    UpdateModelApiRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateModelApiRequest() = default ;
    UpdateModelApiRequest& operator=(const UpdateModelApiRequest &) = default ;
    UpdateModelApiRequest& operator=(UpdateModelApiRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->basePath_ == nullptr
        && this->description_ == nullptr && this->directSupplyFallbackEnabled_ == nullptr && this->domainIds_ == nullptr && this->enableAuth_ == nullptr && this->firstByteTimeout_ == nullptr
        && this->modelSelection_ == nullptr && this->modelSelectionDelta_ == nullptr && this->name_ == nullptr && this->policyConfigs_ == nullptr; };
    // basePath Field Functions 
    bool hasBasePath() const { return this->basePath_ != nullptr;};
    void deleteBasePath() { this->basePath_ = nullptr;};
    inline string getBasePath() const { DARABONBA_PTR_GET_DEFAULT(basePath_, "") };
    inline UpdateModelApiRequest& setBasePath(string basePath) { DARABONBA_PTR_SET_VALUE(basePath_, basePath) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateModelApiRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // directSupplyFallbackEnabled Field Functions 
    bool hasDirectSupplyFallbackEnabled() const { return this->directSupplyFallbackEnabled_ != nullptr;};
    void deleteDirectSupplyFallbackEnabled() { this->directSupplyFallbackEnabled_ = nullptr;};
    inline bool getDirectSupplyFallbackEnabled() const { DARABONBA_PTR_GET_DEFAULT(directSupplyFallbackEnabled_, false) };
    inline UpdateModelApiRequest& setDirectSupplyFallbackEnabled(bool directSupplyFallbackEnabled) { DARABONBA_PTR_SET_VALUE(directSupplyFallbackEnabled_, directSupplyFallbackEnabled) };


    // domainIds Field Functions 
    bool hasDomainIds() const { return this->domainIds_ != nullptr;};
    void deleteDomainIds() { this->domainIds_ = nullptr;};
    inline const vector<string> & getDomainIds() const { DARABONBA_PTR_GET_CONST(domainIds_, vector<string>) };
    inline vector<string> getDomainIds() { DARABONBA_PTR_GET(domainIds_, vector<string>) };
    inline UpdateModelApiRequest& setDomainIds(const vector<string> & domainIds) { DARABONBA_PTR_SET_VALUE(domainIds_, domainIds) };
    inline UpdateModelApiRequest& setDomainIds(vector<string> && domainIds) { DARABONBA_PTR_SET_RVALUE(domainIds_, domainIds) };


    // enableAuth Field Functions 
    bool hasEnableAuth() const { return this->enableAuth_ != nullptr;};
    void deleteEnableAuth() { this->enableAuth_ = nullptr;};
    inline bool getEnableAuth() const { DARABONBA_PTR_GET_DEFAULT(enableAuth_, false) };
    inline UpdateModelApiRequest& setEnableAuth(bool enableAuth) { DARABONBA_PTR_SET_VALUE(enableAuth_, enableAuth) };


    // firstByteTimeout Field Functions 
    bool hasFirstByteTimeout() const { return this->firstByteTimeout_ != nullptr;};
    void deleteFirstByteTimeout() { this->firstByteTimeout_ = nullptr;};
    inline int32_t getFirstByteTimeout() const { DARABONBA_PTR_GET_DEFAULT(firstByteTimeout_, 0) };
    inline UpdateModelApiRequest& setFirstByteTimeout(int32_t firstByteTimeout) { DARABONBA_PTR_SET_VALUE(firstByteTimeout_, firstByteTimeout) };


    // modelSelection Field Functions 
    bool hasModelSelection() const { return this->modelSelection_ != nullptr;};
    void deleteModelSelection() { this->modelSelection_ = nullptr;};
    inline const ModelSelection & getModelSelection() const { DARABONBA_PTR_GET_CONST(modelSelection_, ModelSelection) };
    inline ModelSelection getModelSelection() { DARABONBA_PTR_GET(modelSelection_, ModelSelection) };
    inline UpdateModelApiRequest& setModelSelection(const ModelSelection & modelSelection) { DARABONBA_PTR_SET_VALUE(modelSelection_, modelSelection) };
    inline UpdateModelApiRequest& setModelSelection(ModelSelection && modelSelection) { DARABONBA_PTR_SET_RVALUE(modelSelection_, modelSelection) };


    // modelSelectionDelta Field Functions 
    bool hasModelSelectionDelta() const { return this->modelSelectionDelta_ != nullptr;};
    void deleteModelSelectionDelta() { this->modelSelectionDelta_ = nullptr;};
    inline const ModelSelectionDelta & getModelSelectionDelta() const { DARABONBA_PTR_GET_CONST(modelSelectionDelta_, ModelSelectionDelta) };
    inline ModelSelectionDelta getModelSelectionDelta() { DARABONBA_PTR_GET(modelSelectionDelta_, ModelSelectionDelta) };
    inline UpdateModelApiRequest& setModelSelectionDelta(const ModelSelectionDelta & modelSelectionDelta) { DARABONBA_PTR_SET_VALUE(modelSelectionDelta_, modelSelectionDelta) };
    inline UpdateModelApiRequest& setModelSelectionDelta(ModelSelectionDelta && modelSelectionDelta) { DARABONBA_PTR_SET_RVALUE(modelSelectionDelta_, modelSelectionDelta) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateModelApiRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // policyConfigs Field Functions 
    bool hasPolicyConfigs() const { return this->policyConfigs_ != nullptr;};
    void deletePolicyConfigs() { this->policyConfigs_ = nullptr;};
    inline const vector<ModelApiPolicyConfig> & getPolicyConfigs() const { DARABONBA_PTR_GET_CONST(policyConfigs_, vector<ModelApiPolicyConfig>) };
    inline vector<ModelApiPolicyConfig> getPolicyConfigs() { DARABONBA_PTR_GET(policyConfigs_, vector<ModelApiPolicyConfig>) };
    inline UpdateModelApiRequest& setPolicyConfigs(const vector<ModelApiPolicyConfig> & policyConfigs) { DARABONBA_PTR_SET_VALUE(policyConfigs_, policyConfigs) };
    inline UpdateModelApiRequest& setPolicyConfigs(vector<ModelApiPolicyConfig> && policyConfigs) { DARABONBA_PTR_SET_RVALUE(policyConfigs_, policyConfigs) };


  protected:
    // The access prefix of the API. The default value is / when created. If omitted in an update request, the original value is retained.
    shared_ptr<string> basePath_ {};
    // The description of the model API. If omitted in an update request, the original value is retained.
    shared_ptr<string> description_ {};
    // Specifies whether to enable the direct supply fallback. If omitted in an update request, the original value is retained. Set to false to explicitly disable it.
    shared_ptr<bool> directSupplyFallbackEnabled_ {};
    // The IDs of the selected custom or instance default domain names. This parameter must be explicitly set to a non-empty value when creating an API. If omitted in an update request, the original value is retained. When submitted, the entire list is replaced and cannot be empty.
    shared_ptr<vector<string>> domainIds_ {};
    // Specifies whether to enable consumer API key authentication. If omitted in an update request, the original value is retained. The type is fixed to Apikey or Custom.
    shared_ptr<bool> enableAuth_ {};
    // The first byte timeout.
    shared_ptr<int32_t> firstByteTimeout_ {};
    // The model selection. This parameter is required when creating an API. If omitted in an update request, the original value is retained. When submitted, the entire selection is replaced.
    shared_ptr<ModelSelection> modelSelection_ {};
    // Supported only by the new version of Model API in minimalist mode. Merges the actual source model IDs added or removed in this request into the latest locked selection. This parameter is mutually exclusive with modelSelection and cannot be null or an empty delta. The standard update and publish process applies.
    shared_ptr<ModelSelectionDelta> modelSelectionDelta_ {};
    // The name of the model API. If omitted or set to null, the original value is retained. When submitted, the name is trimmed of leading and trailing whitespace, must not be empty, can be up to 128 UTF-8 bytes in length, and cannot contain the at sign (@) or forward slash (/). Renaming the API does not change the API ID or the access prefix.
    shared_ptr<string> name_ {};
    // The policy configurations for AI request logging and AI security protection only. If omitted in an update request, the original values are retained. When submitted, the inline policies of both types are entirely replaced. An empty array clears both types of policies. Independent token quotas are not affected.
    shared_ptr<vector<ModelApiPolicyConfig>> policyConfigs_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
