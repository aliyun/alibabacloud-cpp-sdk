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
    // The billing type. The value must be `configurable`.
    shared_ptr<string> billingType_ {};
    // The effective time, in RFC3339 format.
    shared_ptr<string> effectiveTime_ {};
    // The expiration time, in RFC3339 format.
    shared_ptr<string> expireTime_ {};
    // The model ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> modelId_ {};
    // The `pricingConfig` is a JSON object whose internal field structure varies depending on the billing type.
    // 
    // 1. **Tiered token billing**<br>Applicable to chat models. This type uses tiered pricing based on the number of input tokens and supports different rates for standard mode, thinking mode, and cache hits.<br>JSON format:<br><br><br>
    // 
    //    Field descriptions:Constraints:
    // 
    // 2. **Per-image billing**<br>Applicable to `ImageGeneration` and `ImageEdit` models. Billing is based on the number of images generated or processed.<br>JSON format:<br><br><br>
    // 
    //    Field descriptions:
    // 
    // 3. **Video matrix billing**<br>Applicable to `VideoGeneration` and `VideoImageGeneration` models. Pricing is based on a combination of video resolution and the presence of an audio track.<br>Note: While the frontend UI may use a `matrix` field, API calls must use the `tiers` field to save the configuration. The `matrix` field is automatically converted to `tiers` on the server side. The format below is the standard API format.<br>JSON format:<br><br><br><br>
    // 
    //    Field descriptions:Constraints:
    // 
    // 4. **Billing by duration**<br>Applicable to automatic speech recognition (ASR) models. Billing is based on the audio duration.<br>JSON format:<br><br><br>
    // 
    //    Field descriptions:
    // 
    // 5. **Per-character billing**<br>Applicable to text-to-speech (TTS) models. Billing is based on the number of characters in the synthesized text.<br>JSON format:<br><br><br>
    // 
    //    Field descriptions:
    // 
    // 6. **Flat-rate token billing**<br>Applicable to models such as `Embedding`, `Rerank`, `MultimodalEmbedding`, and `MultimodalRerank`. This type uses a flat-rate pricing model without tiers.<br>JSON format:<br><br><br>
    // 
    //    Field descriptions:
    // 
    // 7. **Full-modal multi-dimensional billing**<br>Applicable to full-modal models such as `ChatFullmodal` (e.g., `qwen3.5-omni-plus`). It sets separate prices for the input and output of different modalities, such as text, audio, images, and video.<br>JSON format:<br><br><br>
    // 
    //    Field descriptions:
    Darabonba::Json pricingConfig_ {};
    // The billing rule version number.
    shared_ptr<int32_t> version_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
