// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELROUTERUPDATEBILLINGRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODELROUTERUPDATEBILLINGRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class ModelRouterUpdateBillingRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelRouterUpdateBillingRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(billingType, billingType_);
      DARABONBA_PTR_TO_JSON(effectiveTime, effectiveTime_);
      DARABONBA_PTR_TO_JSON(expireTime, expireTime_);
      DARABONBA_ANY_TO_JSON(pricingConfig, pricingConfig_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, ModelRouterUpdateBillingRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(billingType, billingType_);
      DARABONBA_PTR_FROM_JSON(effectiveTime, effectiveTime_);
      DARABONBA_PTR_FROM_JSON(expireTime, expireTime_);
      DARABONBA_ANY_FROM_JSON(pricingConfig, pricingConfig_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    ModelRouterUpdateBillingRuleRequest() = default ;
    ModelRouterUpdateBillingRuleRequest(const ModelRouterUpdateBillingRuleRequest &) = default ;
    ModelRouterUpdateBillingRuleRequest(ModelRouterUpdateBillingRuleRequest &&) = default ;
    ModelRouterUpdateBillingRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelRouterUpdateBillingRuleRequest() = default ;
    ModelRouterUpdateBillingRuleRequest& operator=(const ModelRouterUpdateBillingRuleRequest &) = default ;
    ModelRouterUpdateBillingRuleRequest& operator=(ModelRouterUpdateBillingRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->billingType_ == nullptr
        && this->effectiveTime_ == nullptr && this->expireTime_ == nullptr && this->pricingConfig_ == nullptr && this->status_ == nullptr && this->version_ == nullptr; };
    // billingType Field Functions 
    bool hasBillingType() const { return this->billingType_ != nullptr;};
    void deleteBillingType() { this->billingType_ = nullptr;};
    inline string getBillingType() const { DARABONBA_PTR_GET_DEFAULT(billingType_, "") };
    inline ModelRouterUpdateBillingRuleRequest& setBillingType(string billingType) { DARABONBA_PTR_SET_VALUE(billingType_, billingType) };


    // effectiveTime Field Functions 
    bool hasEffectiveTime() const { return this->effectiveTime_ != nullptr;};
    void deleteEffectiveTime() { this->effectiveTime_ = nullptr;};
    inline string getEffectiveTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveTime_, "") };
    inline ModelRouterUpdateBillingRuleRequest& setEffectiveTime(string effectiveTime) { DARABONBA_PTR_SET_VALUE(effectiveTime_, effectiveTime) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline ModelRouterUpdateBillingRuleRequest& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // pricingConfig Field Functions 
    bool hasPricingConfig() const { return this->pricingConfig_ != nullptr;};
    void deletePricingConfig() { this->pricingConfig_ = nullptr;};
    inline     const Darabonba::Json & getPricingConfig() const { DARABONBA_GET(pricingConfig_) };
    Darabonba::Json & getPricingConfig() { DARABONBA_GET(pricingConfig_) };
    inline ModelRouterUpdateBillingRuleRequest& setPricingConfig(const Darabonba::Json & pricingConfig) { DARABONBA_SET_VALUE(pricingConfig_, pricingConfig) };
    inline ModelRouterUpdateBillingRuleRequest& setPricingConfig(Darabonba::Json && pricingConfig) { DARABONBA_SET_RVALUE(pricingConfig_, pricingConfig) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ModelRouterUpdateBillingRuleRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline int32_t getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, 0) };
    inline ModelRouterUpdateBillingRuleRequest& setVersion(int32_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The billing type. Must be `configurable`.
    shared_ptr<string> billingType_ {};
    // The effective time, in RFC3339 format.
    shared_ptr<string> effectiveTime_ {};
    // The expiration time, in RFC3339 format.
    shared_ptr<string> expireTime_ {};
    // The billing configuration, specified as a JSON object.
    // 
    // 1. **Token-based tiered pricing (`token_tiered`)**<br>Applies to `Chat` models. Billing is tiered based on the token count, with separate rates for standard mode, thinking mode, and cache hits. The JSON format is as follows:<br>
    //    json
    //    {
    //    "tiers": [
    //    {
    //    "min_tokens": 0,
    //    "max_tokens": 32000,
    //    "input_price": 2.5,
    //    "output_price": 10,
    //    "thinking_input_price": 2.5,
    //    "thinking_output_price": 10,
    //    "cached_input_price": 2.5
    //    },
    //    {
    //    "min_tokens": 32000,
    //    "max_tokens": 128000,
    //    "input_price": 4,
    //    "output_price": 16,
    //    "thinking_input_price": 4,
    //    "thinking_output_price": 16,
    //    "cached_input_price": 4
    //    }
    //    ]
    //    }
    //    **Field descriptions:**<br>
    //    Field | Type | Required | Description | Unit<br>
    //    \\---|---|---|---|---<br>
    //    `tiers` | array | Yes | A required array of tiered pricing objects. | -<br>
    //    `tiers[].min_tokens` | integer | Yes | The lower bound (inclusive) of the token count for the current tier. | token<br>
    //    `tiers[].max_tokens` | integer | Yes | The upper bound (exclusive) of the token count for the current tier. A value of 0 indicates no upper limit. | token<br>
    //    `tiers[].input_price` | number | Yes | The unit price for input tokens in standard mode. | CNY / million tokens<br>
    //    `tiers[].output_price` | number | Yes | The unit price for output tokens in standard mode. | CNY / million tokens<br>
    //    `tiers[].thinking_input_price` | number | No | The unit price for input tokens in thinking mode. | CNY / million tokens<br>
    //    `tiers[].thinking_output_price` | number | No | The unit price for output tokens in thinking mode. | CNY / million tokens<br>
    //    `tiers[].cached_input_price` | number | No | The unit price for input tokens on a cache hit. | CNY / million tokens<br>
    //    `thinking_mode_tiers` | array | No | Dedicated tiers for thinking mode. The structure is the same as `tiers`. If a request includes a `reasoning_tokens` field and this array is not empty, this array overrides the default `tiers`. | -<br>
    //    **Constraints:**<br><br><br><br><br><br><br><br><br><br><br><br><br><br>
    // 
    // 2. **Per-image billing (`per_image`)**<br>Applies to `ImageGeneration` and `ImageEdit` models. Billing is based on the number of images generated or processed. The JSON format is as follows:<br>
    //    json
    //    {
    //    "price_per_image": 0.2
    //    }
    //    **Field descriptions:**<br>
    //    Field | Type | Required | Description | Unit<br>
    //    \\---|---|---|---|---<br>
    //    `price_per_image` | number | Yes | The unit price per image. | CNY / image<br><br><br><br><br>
    // 
    // 3. **Video matrix billing (`video_matrix`)**<br>Applies to `VideoGeneration` and `VideoImageGeneration` models. Pricing is based on a combination of video resolution and the presence of audio.<br>
    //    **Note:** The server automatically converts the `matrix` field, used by the frontend UI, to the `tiers` field required by the API.<br>
    //    The JSON format is as follows:<br>
    //    json
    //    {
    //    "tiers": [
    //    {
    //    "resolution": 480,
    //    "has_audio": 0,
    //    "price_per_second": 0.24
    //    },
    //    {
    //    "resolution": 480,
    //    "has_audio": 1,
    //    "price_per_second": 0.24
    //    },
    //    {
    //    "resolution": 720,
    //    "has_audio": 0,
    //    "price_per_second": 0.24
    //    },
    //    {
    //    "resolution": 720,
    //    "has_audio": 1,
    //    "price_per_second": 0.24
    //    }
    //    ],
    //    "default_price_per_second": 0.24
    //    }
    //    **Field descriptions:**<br>
    //    Field | Type | Required | Description | Unit<br>
    //    \\---|---|---|---|---<br>
    //    `tiers` | array | Yes | An array of video matrix pricing objects. | -<br>
    //    `tiers[].resolution` | integer | Yes | The video resolution. Valid values: 480, 720, and 1080. | Pixel height (p)<br>
    //    `tiers[].has_audio` | integer | Yes | Indicates whether audio is included. Valid values: 0 (no audio) and 1 (with audio). | -<br>
    //    `tiers[].price_per_second` | number | Yes | The unit price per second for this combination. | CNY / second<br>
    //    `default_price_per_second` | number | No | The default unit price per second, applied if the request\\"s parameters do not match any item in the `tiers` array. | CNY / second<br>
    //    **Constraints:**<br><br><br><br><br><br><br><br><br><br><br><br>
    // 
    // 4. **Per-duration billing (`per_duration`)**<br>Applies to speech recognition (ASR) models. Billing is based on the duration of the audio. The JSON format is as follows:<br>
    //    json
    //    {
    //    "price_per_unit": 0.00022
    //    }
    //    **Field descriptions:**<br>
    //    Field | Type | Required | Description | Unit<br>
    //    \\---|---|---|---|---<br>
    //    `price_per_unit` | number | Yes | The unit price per second of audio. | CNY / second<br><br><br><br><br>
    // 
    // 5. **Per-character billing (`per_character`)**<br>Applies to speech synthesis (TTS) models. Billing is based on the number of characters in the synthesized text. The JSON format is as follows:<br>
    //    json
    //    {
    //    "price_per_unit": 0.8
    //    }
    //    **Field descriptions:**<br>
    //    Field | Type | Required | Description | Unit<br>
    //    \\---|---|---|---|---<br>
    //    `price_per_unit` | number | Yes | The unit price per 10,000 characters. | CNY / 10,000 characters<br><br><br><br><br>
    // 
    // 6. **Flat-rate token billing (`token_flat`)**<br>Applies to `Embedding`, `Rerank`, `MultimodalEmbedding`, and `MultimodalRerank` models. This method uses a single unit price without tiers. The JSON format is as follows:<br>
    //    json
    //    {
    //    "input_price": 0.5,
    //    "multimodal_input_price": 0.5
    //    }
    //    **Field descriptions:**<br>
    //    Field | Type | Required | Description | Unit<br>
    //    \\---|---|---|---|---<br>
    //    `input_price` | number | Yes | The unit price for text-only input tokens. | CNY / million tokens<br>
    //    `multimodal_input_price` | number | No | The unit price for multimodal input tokens. | CNY / million tokens<br><br><br><br><br><br>
    // 
    // 7. **Omni-modal multi-dimension billing (`omni_multimodal`)**<br>Applies to omni-modal models, such as `ChatFullmodal` (for example, `qwen3.5-omni-plus`). Prices are set separately for different input and output modalities, such as text, audio, images, and videos. The JSON format is as follows:<br>
    //    json
    //    {
    //    "text_input_price": 7,
    //    "audio_input_price": 53,
    //    "image_input_price": 7,
    //    "video_input_price": 7,
    //    "text_output_price": 40,
    //    "audio_output_price": 213,
    //    "multi_text_output_price": 0
    //    }
    //    **Field descriptions:**<br>
    //    Field | Type | Required | Description | Unit<br>
    //    \\---|---|---|---|---<br>
    //    `text_input_price` | number | Yes | The unit price for text input tokens. | CNY / million tokens<br>
    //    `audio_input_price` | number | Yes | The unit price for audio input tokens. | CNY / million tokens<br>
    //    `image_input_price` | number | No | The unit price for image input tokens. | CNY / million tokens<br>
    //    `video_input_price` | number | No | The unit price for video input tokens. | CNY / million tokens<br>
    //    `text_output_price` | number | Yes | The unit price for text output tokens. | CNY / million tokens<br>
    //    `audio_output_price` | number | No | The unit price for audio output tokens. | CNY / million tokens<br>
    //    `multi_text_output_price` | number | No | The unit price for text output tokens when the input is multimodal (contains images, audio, or video). | CNY / million tokens<br><br>
    //    **Automatic billing type mapping**<br>
    //    Model type (`model_type`) | Auto-detected billing type | Key identifying field in `pricingConfig`<br>
    //    \\---|---|---<br>
    //    `Chat` | `token_tiered` | The `tiers` field is present.<br>
    //    `ChatFullmodal` | `omni_multimodal` | The `text_input_price` or `audio_input_price` field is present.<br>
    //    `ImageGeneration` / `ImageEdit` | `per_image` | The `price_per_image` field is present.<br>
    //    `VideoGeneration` / `VideoImageGeneration` | `video_matrix` | The `tiers` field is present, and its elements contain `resolution`.<br>
    //    `ASR` | `per_duration` | The `price_per_unit` field is present (ASR scenario).<br>
    //    `TTS` | `per_character` | The `price_per_unit` field is present (TTS scenario).<br>
    //    `Embedding` / `Rerank` / `MultimodalEmbedding` / `MultimodalRerank` | `token_flat` | The `input_price` field is present.<br><br><br><br><br><br><br><br><br><br><br><br><br><br><br><br><br><br><br><br><br><br>
    Darabonba::Json pricingConfig_ {};
    // The status of the billing rule. Use this field to enable or disable the rule.
    shared_ptr<int32_t> status_ {};
    // The version number of the billing rule.
    shared_ptr<int32_t> version_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
