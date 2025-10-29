// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APIGLLMMODEL_HPP_
#define ALIBABACLOUD_MODELS_APIGLLMMODEL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class ApigLLMModel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApigLLMModel& obj) { 
      DARABONBA_PTR_TO_JSON(address, address_);
      DARABONBA_PTR_TO_JSON(apiKey, apiKey_);
      DARABONBA_PTR_TO_JSON(createdTime, createdTime_);
      DARABONBA_PTR_TO_JSON(desc, desc_);
      DARABONBA_PTR_TO_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(modelId, modelId_);
      DARABONBA_PTR_TO_JSON(models, models_);
      DARABONBA_PTR_TO_JSON(modelsWeight, modelsWeight_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(provider, provider_);
      DARABONBA_PTR_TO_JSON(targetId, targetId_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, ApigLLMModel& obj) { 
      DARABONBA_PTR_FROM_JSON(address, address_);
      DARABONBA_PTR_FROM_JSON(apiKey, apiKey_);
      DARABONBA_PTR_FROM_JSON(createdTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(desc, desc_);
      DARABONBA_PTR_FROM_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(modelId, modelId_);
      DARABONBA_PTR_FROM_JSON(models, models_);
      DARABONBA_PTR_FROM_JSON(modelsWeight, modelsWeight_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(provider, provider_);
      DARABONBA_PTR_FROM_JSON(targetId, targetId_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
    };
    ApigLLMModel() = default ;
    ApigLLMModel(const ApigLLMModel &) = default ;
    ApigLLMModel(ApigLLMModel &&) = default ;
    ApigLLMModel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApigLLMModel() = default ;
    ApigLLMModel& operator=(const ApigLLMModel &) = default ;
    ApigLLMModel& operator=(ApigLLMModel &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->address_ == nullptr
        && return this->apiKey_ == nullptr && return this->createdTime_ == nullptr && return this->desc_ == nullptr && return this->gatewayId_ == nullptr && return this->modelId_ == nullptr
        && return this->models_ == nullptr && return this->modelsWeight_ == nullptr && return this->name_ == nullptr && return this->provider_ == nullptr && return this->targetId_ == nullptr
        && return this->tenantId_ == nullptr && return this->type_ == nullptr && return this->updateTime_ == nullptr; };
    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline string address() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
    inline ApigLLMModel& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


    // apiKey Field Functions 
    bool hasApiKey() const { return this->apiKey_ != nullptr;};
    void deleteApiKey() { this->apiKey_ = nullptr;};
    inline string apiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
    inline ApigLLMModel& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline string createdTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
    inline ApigLLMModel& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // desc Field Functions 
    bool hasDesc() const { return this->desc_ != nullptr;};
    void deleteDesc() { this->desc_ = nullptr;};
    inline string desc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
    inline ApigLLMModel& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline string gatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
    inline ApigLLMModel& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // modelId Field Functions 
    bool hasModelId() const { return this->modelId_ != nullptr;};
    void deleteModelId() { this->modelId_ = nullptr;};
    inline string modelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
    inline ApigLLMModel& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


    // models Field Functions 
    bool hasModels() const { return this->models_ != nullptr;};
    void deleteModels() { this->models_ = nullptr;};
    inline string models() const { DARABONBA_PTR_GET_DEFAULT(models_, "") };
    inline ApigLLMModel& setModels(string models) { DARABONBA_PTR_SET_VALUE(models_, models) };


    // modelsWeight Field Functions 
    bool hasModelsWeight() const { return this->modelsWeight_ != nullptr;};
    void deleteModelsWeight() { this->modelsWeight_ = nullptr;};
    inline string modelsWeight() const { DARABONBA_PTR_GET_DEFAULT(modelsWeight_, "") };
    inline ApigLLMModel& setModelsWeight(string modelsWeight) { DARABONBA_PTR_SET_VALUE(modelsWeight_, modelsWeight) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ApigLLMModel& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // provider Field Functions 
    bool hasProvider() const { return this->provider_ != nullptr;};
    void deleteProvider() { this->provider_ = nullptr;};
    inline string provider() const { DARABONBA_PTR_GET_DEFAULT(provider_, "") };
    inline ApigLLMModel& setProvider(string provider) { DARABONBA_PTR_SET_VALUE(provider_, provider) };


    // targetId Field Functions 
    bool hasTargetId() const { return this->targetId_ != nullptr;};
    void deleteTargetId() { this->targetId_ = nullptr;};
    inline string targetId() const { DARABONBA_PTR_GET_DEFAULT(targetId_, "") };
    inline ApigLLMModel& setTargetId(string targetId) { DARABONBA_PTR_SET_VALUE(targetId_, targetId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline ApigLLMModel& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ApigLLMModel& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline ApigLLMModel& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    std::shared_ptr<string> address_ = nullptr;
    std::shared_ptr<string> apiKey_ = nullptr;
    std::shared_ptr<string> createdTime_ = nullptr;
    std::shared_ptr<string> desc_ = nullptr;
    std::shared_ptr<string> gatewayId_ = nullptr;
    std::shared_ptr<string> modelId_ = nullptr;
    std::shared_ptr<string> models_ = nullptr;
    std::shared_ptr<string> modelsWeight_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> provider_ = nullptr;
    std::shared_ptr<string> targetId_ = nullptr;
    std::shared_ptr<string> tenantId_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
