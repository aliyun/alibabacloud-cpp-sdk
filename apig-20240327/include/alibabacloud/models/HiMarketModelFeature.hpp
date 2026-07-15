// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HIMARKETMODELFEATURE_HPP_
#define ALIBABACLOUD_MODELS_HIMARKETMODELFEATURE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class HiMarketModelFeature : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HiMarketModelFeature& obj) { 
      DARABONBA_PTR_TO_JSON(enableMultiModal, enableMultiModal_);
      DARABONBA_PTR_TO_JSON(enableThinking, enableThinking_);
      DARABONBA_PTR_TO_JSON(maxTokens, maxTokens_);
      DARABONBA_PTR_TO_JSON(model, model_);
      DARABONBA_PTR_TO_JSON(streaming, streaming_);
      DARABONBA_PTR_TO_JSON(temperature, temperature_);
      DARABONBA_PTR_TO_JSON(webSearch, webSearch_);
    };
    friend void from_json(const Darabonba::Json& j, HiMarketModelFeature& obj) { 
      DARABONBA_PTR_FROM_JSON(enableMultiModal, enableMultiModal_);
      DARABONBA_PTR_FROM_JSON(enableThinking, enableThinking_);
      DARABONBA_PTR_FROM_JSON(maxTokens, maxTokens_);
      DARABONBA_PTR_FROM_JSON(model, model_);
      DARABONBA_PTR_FROM_JSON(streaming, streaming_);
      DARABONBA_PTR_FROM_JSON(temperature, temperature_);
      DARABONBA_PTR_FROM_JSON(webSearch, webSearch_);
    };
    HiMarketModelFeature() = default ;
    HiMarketModelFeature(const HiMarketModelFeature &) = default ;
    HiMarketModelFeature(HiMarketModelFeature &&) = default ;
    HiMarketModelFeature(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HiMarketModelFeature() = default ;
    HiMarketModelFeature& operator=(const HiMarketModelFeature &) = default ;
    HiMarketModelFeature& operator=(HiMarketModelFeature &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enableMultiModal_ == nullptr
        && this->enableThinking_ == nullptr && this->maxTokens_ == nullptr && this->model_ == nullptr && this->streaming_ == nullptr && this->temperature_ == nullptr
        && this->webSearch_ == nullptr; };
    // enableMultiModal Field Functions 
    bool hasEnableMultiModal() const { return this->enableMultiModal_ != nullptr;};
    void deleteEnableMultiModal() { this->enableMultiModal_ = nullptr;};
    inline bool getEnableMultiModal() const { DARABONBA_PTR_GET_DEFAULT(enableMultiModal_, false) };
    inline HiMarketModelFeature& setEnableMultiModal(bool enableMultiModal) { DARABONBA_PTR_SET_VALUE(enableMultiModal_, enableMultiModal) };


    // enableThinking Field Functions 
    bool hasEnableThinking() const { return this->enableThinking_ != nullptr;};
    void deleteEnableThinking() { this->enableThinking_ = nullptr;};
    inline bool getEnableThinking() const { DARABONBA_PTR_GET_DEFAULT(enableThinking_, false) };
    inline HiMarketModelFeature& setEnableThinking(bool enableThinking) { DARABONBA_PTR_SET_VALUE(enableThinking_, enableThinking) };


    // maxTokens Field Functions 
    bool hasMaxTokens() const { return this->maxTokens_ != nullptr;};
    void deleteMaxTokens() { this->maxTokens_ = nullptr;};
    inline int32_t getMaxTokens() const { DARABONBA_PTR_GET_DEFAULT(maxTokens_, 0) };
    inline HiMarketModelFeature& setMaxTokens(int32_t maxTokens) { DARABONBA_PTR_SET_VALUE(maxTokens_, maxTokens) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline HiMarketModelFeature& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // streaming Field Functions 
    bool hasStreaming() const { return this->streaming_ != nullptr;};
    void deleteStreaming() { this->streaming_ = nullptr;};
    inline bool getStreaming() const { DARABONBA_PTR_GET_DEFAULT(streaming_, false) };
    inline HiMarketModelFeature& setStreaming(bool streaming) { DARABONBA_PTR_SET_VALUE(streaming_, streaming) };


    // temperature Field Functions 
    bool hasTemperature() const { return this->temperature_ != nullptr;};
    void deleteTemperature() { this->temperature_ = nullptr;};
    inline float getTemperature() const { DARABONBA_PTR_GET_DEFAULT(temperature_, 0.0) };
    inline HiMarketModelFeature& setTemperature(float temperature) { DARABONBA_PTR_SET_VALUE(temperature_, temperature) };


    // webSearch Field Functions 
    bool hasWebSearch() const { return this->webSearch_ != nullptr;};
    void deleteWebSearch() { this->webSearch_ = nullptr;};
    inline bool getWebSearch() const { DARABONBA_PTR_GET_DEFAULT(webSearch_, false) };
    inline HiMarketModelFeature& setWebSearch(bool webSearch) { DARABONBA_PTR_SET_VALUE(webSearch_, webSearch) };


  protected:
    // Indicates whether multimodal input is supported.
    shared_ptr<bool> enableMultiModal_ {};
    // Indicates whether chain-of-thought (Thinking) is supported.
    shared_ptr<bool> enableThinking_ {};
    // The maximum number of tokens supported by the model.
    shared_ptr<int32_t> maxTokens_ {};
    // The model name.
    shared_ptr<string> model_ {};
    // Indicates whether streaming output is supported.
    shared_ptr<bool> streaming_ {};
    // The temperature parameter that controls the randomness of generation.
    shared_ptr<float> temperature_ {};
    // Indicates whether web search is supported.
    shared_ptr<bool> webSearch_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
