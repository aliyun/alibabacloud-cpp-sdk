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
    // The billing type: configurable.
    shared_ptr<string> billingType_ {};
    // The effective period in RFC 3339 format.
    shared_ptr<string> effectiveTime_ {};
    // The expiration time in RFC 3339 format.
    shared_ptr<string> expireTime_ {};
    // The model ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> modelId_ {};
    // The pricingConfig field is a JSON object whose internal field structure varies depending on the billing type.
    // 1. Token tiered billing
    // Applicable to Chat models. Pricing is tiered based on the number of input tokens, supporting three pricing dimensions: standard mode, thinking mode, and cache hit. JSON format:
    // json
    // {
    //   "tiers": [
    //     {
    //       "min_tokens": 0,
    //       "max_tokens": 32000,
    //       "input_price": 2.5,
    //       "output_price": 10,
    //       "thinking_input_price": 2.5,
    //       "thinking_output_price": 10,
    //       "cached_input_price": 2.5
    //     },
    //     {
    //       "min_tokens": 32000,
    //       "max_tokens": 128000,
    //       "input_price": 4,
    //       "output_price": 16,
    //       "thinking_input_price": 4,
    //       "thinking_output_price": 16,
    //       "cached_input_price": 4
    //     }
    //   ]
    // }
    // Field description:
    // Field	Type	Required	Description	Unit
    // tiers	array	Yes	Tiered pricing array. At least one element is required.	-
    // tiers[].min_tokens	integer	Yes	Lower bound (inclusive) of the token count for the current tier.	Token
    // tiers[].max_tokens	integer	Yes	Upper bound (exclusive) of the token count for the current tier. A value of 0 indicates no limit.	Token
    // tiers[].input_price	number	Yes	Unit price for input tokens in standard mode.	CNY / million tokens
    // tiers[].output_price	number	Yes	Unit price for output tokens in standard mode.	CNY / million tokens
    // tiers[].thinking_input_price	number	No	Unit price for input tokens in thinking mode.	CNY / million tokens
    // tiers[].thinking_output_price	number	No	Unit price for output tokens in thinking mode.	CNY / million tokens
    // tiers[].cached_input_price	number	No	Unit price for input tokens on cache hit.	CNY / million tokens
    // Constraints:
    // The min_tokens of the first tier must be 0.
    // For all tiers except the last, max_tokens must be greater than min_tokens.
    // Adjacent tiers must be contiguous (the max_tokens of the preceding tier must equal the min_tokens of the following tier). Overlaps or gaps are not allowed.
    // 
    // 2. Per-image billing
    // Applicable to ImageGeneration and ImageEdit models. Pricing is based on the number of images generated or processed. JSON format:
    // json
    // {
    //   "price_per_image": 0.2
    // }
    // Field description:
    // Field	Type	Required	Description	Unit
    // price_per_image	number	Yes	Unit price per image.	CNY / image
    // 
    // 3. Video matrix billing
    // Applicable to VideoGeneration and VideoImageGeneration models. Pricing is based on a combination of video resolution and whether audio is included.
    // Note: The matrix field is used for frontend interactions, but the tiers field must be used when calling the API to save data (the matrix field is automatically converted on the server side). The following shows the standard API format.
    // JSON format:
    // json
    // {
    //   "tiers": [
    //     {
    //       "resolution": 480,
    //       "has_audio": 0,
    //       "price_per_second": 0.24
    //     },
    //     {
    //       "resolution": 480,
    //       "has_audio": 1,
    //       "price_per_second": 0.24
    //     },
    //     {
    //       "resolution": 720,
    //       "has_audio": 0,
    //       "price_per_second": 0.24
    //     },
    //     {
    //       "resolution": 720,
    //       "has_audio": 1,
    //       "price_per_second": 0.24
    //     }
    //   ],
    //   "default_price_per_second": 0.24
    // }
    // Field description:
    // Field	Type	Required	Description	Unit
    // tiers	array	Yes	Video matrix pricing array.	-
    // tiers[].resolution	integer	Yes	Video resolution. Valid values: 480, 720, and 1080.	Pixel height (p)
    // tiers[].has_audio	integer	Yes	Specifies whether audio is included. Valid values: 0 (no audio) and 1 (with audio).	-
    // tiers[].price_per_second	number	Yes	Unit price per second for this combination.	CNY / second
    // default_price_per_second	number	No	Default unit price per second when no matrix entry is matched.	CNY / second
    // Constraints:
    // Only 480p, 720p, and 1080p resolutions are supported.
    // The combination of resolution and has_audio must be unique.
    // 
    // 4. Per-duration billing
    // Applicable to ASR (speech recognition) models. Pricing is based on audio duration. JSON format:
    // json
    // {
    //   "price_per_unit": 0.00022
    // }
    // Field description:
    // Field	Type	Required	Description	Unit
    // price_per_unit	number	Yes	Unit price per second of audio.	CNY / second
    // 
    // 5. Per-character billing
    // Applicable to TTS (speech synthesis) models. Pricing is based on the number of characters in the synthesized text. JSON format:
    // json
    // {
    //   "price_per_unit": 0.8
    // }
    // Field description:
    // Field	Type	Required	Description	Unit
    // price_per_unit	number	Yes	Unit price per 10,000 characters.	CNY / 10,000 characters
    // 
    // 6. Token flat-rate billing
    // Applicable to Embedding, Rerank, MultimodalEmbedding, and MultimodalRerank models. A uniform unit price is applied without tiers. JSON format:
    // json
    // {
    //   "input_price": 0.5,
    //   "multimodal_input_price": 0.5
    // }
    // Field description:
    // Field	Type	Required	Description	Unit
    // input_price	number	Yes	Unit price for text-only input tokens.	CNY / million tokens
    // multimodal_input_price	number	No	Unit price for multimodal input tokens.	CNY / million tokens
    // 
    // 7. Omni-modal multi-dimension billing
    // Applicable to ChatFullmodal omni-modal models (such as qwen3.5-omni-plus). Input and output of different modalities including text, audio, image, and video are priced separately. JSON format:
    // json
    // {
    //   "text_input_price": 7,
    //   "audio_input_price": 53,
    //   "image_input_price": 7,
    //   "video_input_price": 7,
    //   "text_output_price": 40,
    //   "audio_output_price": 213,
    //   "multi_text_output_price": 0
    // }
    // Field description:
    // Field	Type	Required	Description	Unit
    // text_input_price	number	Yes	Unit price for text input tokens.	CNY / million tokens
    // audio_input_price	number	Yes	Unit price for audio input tokens.	CNY / million tokens
    // image_input_price	number	No	Unit price for image input tokens.	CNY / million tokens
    // video_input_price	number	No	Unit price for video input tokens.	CNY / million tokens
    // text_output_price	number	Yes	Unit price for text output tokens.	CNY / million tokens
    // audio_output_price	number	No	Unit price for audio output tokens.	CNY / million tokens
    // multi_text_output_price	number	No	Unit price for text output tokens after multimodal input (separate pricing for text output when the input contains images, audio, or video).	CNY / million tokens
    Darabonba::Json pricingConfig_ {};
    // The billing rule version number.
    shared_ptr<int32_t> version_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
