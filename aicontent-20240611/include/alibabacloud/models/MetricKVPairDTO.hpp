// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_METRICKVPAIRDTO_HPP_
#define ALIBABACLOUD_MODELS_METRICKVPAIRDTO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class MetricKVPairDTO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MetricKVPairDTO& obj) { 
      DARABONBA_PTR_TO_JSON(key, key_);
      DARABONBA_PTR_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, MetricKVPairDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(key, key_);
      DARABONBA_PTR_FROM_JSON(value, value_);
    };
    MetricKVPairDTO() = default ;
    MetricKVPairDTO(const MetricKVPairDTO &) = default ;
    MetricKVPairDTO(MetricKVPairDTO &&) = default ;
    MetricKVPairDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MetricKVPairDTO() = default ;
    MetricKVPairDTO& operator=(const MetricKVPairDTO &) = default ;
    MetricKVPairDTO& operator=(MetricKVPairDTO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline MetricKVPairDTO& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline float getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
    inline MetricKVPairDTO& setValue(float value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // Metric Name.  
    // 
    // **Chat**  
    // - `total_calls`: Number Of Calls, integer, Count  
    // - `input_tokens`: Total input tokens, integer  
    // - `output_tokens`: Total output tokens, integer  
    // - `reasoning_tokens`: Reasoning tokens, integer  
    // - `cached_tokens`: Cached input tokens (hit), integer  
    // 
    // **Vision**  
    // - `total_calls`: Number Of Calls, integer, Count  
    // - `image_count`: Number of generated images, integer  
    // - `video_duration`: Generated video duration, rounded to 3 decimal places, seconds  
    // 
    // **Embedding**  
    // - `total_calls`: Number Of Calls, integer, Count  
    // - `embedding_output_tokens`: Embedding output tokens, integer  
    // - `billing_tokens`: Total billing tokens, integer  
    // - `image_tokens`: Image tokens (multimodal embedding), integer  
    // 
    // **Omni-modal (ChatFullmodal / ChatMultimodal)**  
    // - `total_calls`: Number Of Calls, integer, Count  
    // - `input_text_tokens`: Input text tokens, integer  
    // - `input_audio_tokens`: Input audio tokens, integer  
    // - `input_image_tokens`: Input image tokens, integer  
    // - `input_video_tokens`: Input video tokens, integer  
    // - `output_text_tokens`: Output text tokens, integer  
    // - `output_audio_tokens`: Output audio tokens, integer  
    // 
    // **Speech (TTS / ASR)**  
    // - `total_calls`: Number Of Calls, integer, Count  
    // - `characters`: Characters converted to speech, integer  
    // - `asr_duration`: Speech recognition duration, rounded to 3 decimal places, seconds
    shared_ptr<string> key_ {};
    // Metric value
    shared_ptr<float> value_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
