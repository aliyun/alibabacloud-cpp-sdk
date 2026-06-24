// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMODELPROVIDERTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMODELPROVIDERTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class CreateModelProviderTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateModelProviderTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentPlatform, agentPlatform_);
      DARABONBA_PTR_TO_JSON(AgentProvider, agentProvider_);
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EnableWuyingProxy, enableWuyingProxy_);
      DARABONBA_PTR_TO_JSON(ModelTemplateId, modelTemplateId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ProviderName, providerName_);
      DARABONBA_PTR_TO_JSON(ProviderType, providerType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateModelProviderTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentPlatform, agentPlatform_);
      DARABONBA_PTR_FROM_JSON(AgentProvider, agentProvider_);
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EnableWuyingProxy, enableWuyingProxy_);
      DARABONBA_PTR_FROM_JSON(ModelTemplateId, modelTemplateId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ProviderName, providerName_);
      DARABONBA_PTR_FROM_JSON(ProviderType, providerType_);
    };
    CreateModelProviderTemplateRequest() = default ;
    CreateModelProviderTemplateRequest(const CreateModelProviderTemplateRequest &) = default ;
    CreateModelProviderTemplateRequest(CreateModelProviderTemplateRequest &&) = default ;
    CreateModelProviderTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateModelProviderTemplateRequest() = default ;
    CreateModelProviderTemplateRequest& operator=(const CreateModelProviderTemplateRequest &) = default ;
    CreateModelProviderTemplateRequest& operator=(CreateModelProviderTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentPlatform_ == nullptr
        && this->agentProvider_ == nullptr && this->bizType_ == nullptr && this->config_ == nullptr && this->description_ == nullptr && this->enableWuyingProxy_ == nullptr
        && this->modelTemplateId_ == nullptr && this->name_ == nullptr && this->providerName_ == nullptr && this->providerType_ == nullptr; };
    // agentPlatform Field Functions 
    bool hasAgentPlatform() const { return this->agentPlatform_ != nullptr;};
    void deleteAgentPlatform() { this->agentPlatform_ = nullptr;};
    inline string getAgentPlatform() const { DARABONBA_PTR_GET_DEFAULT(agentPlatform_, "") };
    inline CreateModelProviderTemplateRequest& setAgentPlatform(string agentPlatform) { DARABONBA_PTR_SET_VALUE(agentPlatform_, agentPlatform) };


    // agentProvider Field Functions 
    bool hasAgentProvider() const { return this->agentProvider_ != nullptr;};
    void deleteAgentProvider() { this->agentProvider_ = nullptr;};
    inline string getAgentProvider() const { DARABONBA_PTR_GET_DEFAULT(agentProvider_, "") };
    inline CreateModelProviderTemplateRequest& setAgentProvider(string agentProvider) { DARABONBA_PTR_SET_VALUE(agentProvider_, agentProvider) };


    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline int32_t getBizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, 0) };
    inline CreateModelProviderTemplateRequest& setBizType(int32_t bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline CreateModelProviderTemplateRequest& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateModelProviderTemplateRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enableWuyingProxy Field Functions 
    bool hasEnableWuyingProxy() const { return this->enableWuyingProxy_ != nullptr;};
    void deleteEnableWuyingProxy() { this->enableWuyingProxy_ = nullptr;};
    inline bool getEnableWuyingProxy() const { DARABONBA_PTR_GET_DEFAULT(enableWuyingProxy_, false) };
    inline CreateModelProviderTemplateRequest& setEnableWuyingProxy(bool enableWuyingProxy) { DARABONBA_PTR_SET_VALUE(enableWuyingProxy_, enableWuyingProxy) };


    // modelTemplateId Field Functions 
    bool hasModelTemplateId() const { return this->modelTemplateId_ != nullptr;};
    void deleteModelTemplateId() { this->modelTemplateId_ = nullptr;};
    inline string getModelTemplateId() const { DARABONBA_PTR_GET_DEFAULT(modelTemplateId_, "") };
    inline CreateModelProviderTemplateRequest& setModelTemplateId(string modelTemplateId) { DARABONBA_PTR_SET_VALUE(modelTemplateId_, modelTemplateId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateModelProviderTemplateRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // providerName Field Functions 
    bool hasProviderName() const { return this->providerName_ != nullptr;};
    void deleteProviderName() { this->providerName_ = nullptr;};
    inline string getProviderName() const { DARABONBA_PTR_GET_DEFAULT(providerName_, "") };
    inline CreateModelProviderTemplateRequest& setProviderName(string providerName) { DARABONBA_PTR_SET_VALUE(providerName_, providerName) };


    // providerType Field Functions 
    bool hasProviderType() const { return this->providerType_ != nullptr;};
    void deleteProviderType() { this->providerType_ = nullptr;};
    inline string getProviderType() const { DARABONBA_PTR_GET_DEFAULT(providerType_, "") };
    inline CreateModelProviderTemplateRequest& setProviderType(string providerType) { DARABONBA_PTR_SET_VALUE(providerType_, providerType) };


  protected:
    // Agent platform.
    shared_ptr<string> agentPlatform_ {};
    // Agent provider name.
    // 
    // This parameter is required.
    shared_ptr<string> agentProvider_ {};
    // Business type.
    // 
    // This parameter is required.
    shared_ptr<int32_t> bizType_ {};
    // Model provider configuration JSON, containing connection information such as baseUrl, apiKey, and api. The apiKey is encrypted after creation. Not required when ProviderType is WuyingCredit, as it is copied from the system template.
    // 
    // This parameter is required.
    shared_ptr<string> config_ {};
    // Model provider template description.
    shared_ptr<string> description_ {};
    // Whether to enable Wuying security proxy. Must be true when ProviderType is WuyingCredit.
    shared_ptr<bool> enableWuyingProxy_ {};
    // Associated model group ID.
    // 
    // This parameter is required.
    shared_ptr<string> modelTemplateId_ {};
    // Model provider template name.
    shared_ptr<string> name_ {};
    // Model provider name. Must be unique within the same model template. Naming rules vary by ProviderType. For details, see the ProviderType description.
    // 
    // This parameter is required.
    shared_ptr<string> providerName_ {};
    // Model provider type. Different types impose different constraints on ProviderName and Config:
    // - WuyingCredit: Wuying credit package. ProviderName must be wuying-credit. Created by copying from the system template. Config is not required.
    // - Managed: Managed provider. System-reserved names such as wuying-credit cannot be used. Config is required.
    // - Custom: User-defined provider. ProviderName must start with the provider- prefix. Config is required.
    shared_ptr<string> providerType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
