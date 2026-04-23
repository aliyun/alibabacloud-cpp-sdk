// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELROUTERCREATEBILLINGRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODELROUTERCREATEBILLINGRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class ModelRouterCreateBillingRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelRouterCreateBillingRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(billingType, billingType_);
      DARABONBA_PTR_TO_JSON(effectiveTime, effectiveTime_);
      DARABONBA_PTR_TO_JSON(expireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(modelId, modelId_);
      DARABONBA_ANY_TO_JSON(pricingConfig, pricingConfig_);
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, ModelRouterCreateBillingRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(billingType, billingType_);
      DARABONBA_PTR_FROM_JSON(effectiveTime, effectiveTime_);
      DARABONBA_PTR_FROM_JSON(expireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(modelId, modelId_);
      DARABONBA_ANY_FROM_JSON(pricingConfig, pricingConfig_);
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    ModelRouterCreateBillingRuleRequest() = default ;
    ModelRouterCreateBillingRuleRequest(const ModelRouterCreateBillingRuleRequest &) = default ;
    ModelRouterCreateBillingRuleRequest(ModelRouterCreateBillingRuleRequest &&) = default ;
    ModelRouterCreateBillingRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelRouterCreateBillingRuleRequest() = default ;
    ModelRouterCreateBillingRuleRequest& operator=(const ModelRouterCreateBillingRuleRequest &) = default ;
    ModelRouterCreateBillingRuleRequest& operator=(ModelRouterCreateBillingRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->billingType_ == nullptr
        && this->effectiveTime_ == nullptr && this->expireTime_ == nullptr && this->modelId_ == nullptr && this->pricingConfig_ == nullptr && this->version_ == nullptr; };
    // billingType Field Functions 
    bool hasBillingType() const { return this->billingType_ != nullptr;};
    void deleteBillingType() { this->billingType_ = nullptr;};
    inline string getBillingType() const { DARABONBA_PTR_GET_DEFAULT(billingType_, "") };
    inline ModelRouterCreateBillingRuleRequest& setBillingType(string billingType) { DARABONBA_PTR_SET_VALUE(billingType_, billingType) };


    // effectiveTime Field Functions 
    bool hasEffectiveTime() const { return this->effectiveTime_ != nullptr;};
    void deleteEffectiveTime() { this->effectiveTime_ = nullptr;};
    inline string getEffectiveTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveTime_, "") };
    inline ModelRouterCreateBillingRuleRequest& setEffectiveTime(string effectiveTime) { DARABONBA_PTR_SET_VALUE(effectiveTime_, effectiveTime) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline ModelRouterCreateBillingRuleRequest& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // modelId Field Functions 
    bool hasModelId() const { return this->modelId_ != nullptr;};
    void deleteModelId() { this->modelId_ = nullptr;};
    inline int64_t getModelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, 0L) };
    inline ModelRouterCreateBillingRuleRequest& setModelId(int64_t modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


    // pricingConfig Field Functions 
    bool hasPricingConfig() const { return this->pricingConfig_ != nullptr;};
    void deletePricingConfig() { this->pricingConfig_ = nullptr;};
    inline     const Darabonba::Json & getPricingConfig() const { DARABONBA_GET(pricingConfig_) };
    Darabonba::Json & getPricingConfig() { DARABONBA_GET(pricingConfig_) };
    inline ModelRouterCreateBillingRuleRequest& setPricingConfig(const Darabonba::Json & pricingConfig) { DARABONBA_SET_VALUE(pricingConfig_, pricingConfig) };
    inline ModelRouterCreateBillingRuleRequest& setPricingConfig(Darabonba::Json && pricingConfig) { DARABONBA_SET_RVALUE(pricingConfig_, pricingConfig) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline int32_t getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, 0) };
    inline ModelRouterCreateBillingRuleRequest& setVersion(int32_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    shared_ptr<string> billingType_ {};
    shared_ptr<string> effectiveTime_ {};
    shared_ptr<string> expireTime_ {};
    // This parameter is required.
    shared_ptr<int64_t> modelId_ {};
    Darabonba::Json pricingConfig_ {};
    shared_ptr<int32_t> version_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
