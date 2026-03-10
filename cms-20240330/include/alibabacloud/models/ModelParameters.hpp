// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_MODELPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ModelParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelParameters& obj) { 
      DARABONBA_PTR_TO_JSON(frequencyPenalty, frequencyPenalty_);
      DARABONBA_PTR_TO_JSON(maxTokens, maxTokens_);
      DARABONBA_PTR_TO_JSON(presencePenalty, presencePenalty_);
      DARABONBA_PTR_TO_JSON(stopSequences, stopSequences_);
      DARABONBA_PTR_TO_JSON(temperature, temperature_);
      DARABONBA_PTR_TO_JSON(topK, topK_);
      DARABONBA_PTR_TO_JSON(topP, topP_);
    };
    friend void from_json(const Darabonba::Json& j, ModelParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(frequencyPenalty, frequencyPenalty_);
      DARABONBA_PTR_FROM_JSON(maxTokens, maxTokens_);
      DARABONBA_PTR_FROM_JSON(presencePenalty, presencePenalty_);
      DARABONBA_PTR_FROM_JSON(stopSequences, stopSequences_);
      DARABONBA_PTR_FROM_JSON(temperature, temperature_);
      DARABONBA_PTR_FROM_JSON(topK, topK_);
      DARABONBA_PTR_FROM_JSON(topP, topP_);
    };
    ModelParameters() = default ;
    ModelParameters(const ModelParameters &) = default ;
    ModelParameters(ModelParameters &&) = default ;
    ModelParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelParameters() = default ;
    ModelParameters& operator=(const ModelParameters &) = default ;
    ModelParameters& operator=(ModelParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->frequencyPenalty_ == nullptr
        && this->maxTokens_ == nullptr && this->presencePenalty_ == nullptr && this->stopSequences_ == nullptr && this->temperature_ == nullptr && this->topK_ == nullptr
        && this->topP_ == nullptr; };
    // frequencyPenalty Field Functions 
    bool hasFrequencyPenalty() const { return this->frequencyPenalty_ != nullptr;};
    void deleteFrequencyPenalty() { this->frequencyPenalty_ = nullptr;};
    inline float getFrequencyPenalty() const { DARABONBA_PTR_GET_DEFAULT(frequencyPenalty_, 0.0) };
    inline ModelParameters& setFrequencyPenalty(float frequencyPenalty) { DARABONBA_PTR_SET_VALUE(frequencyPenalty_, frequencyPenalty) };


    // maxTokens Field Functions 
    bool hasMaxTokens() const { return this->maxTokens_ != nullptr;};
    void deleteMaxTokens() { this->maxTokens_ = nullptr;};
    inline int64_t getMaxTokens() const { DARABONBA_PTR_GET_DEFAULT(maxTokens_, 0L) };
    inline ModelParameters& setMaxTokens(int64_t maxTokens) { DARABONBA_PTR_SET_VALUE(maxTokens_, maxTokens) };


    // presencePenalty Field Functions 
    bool hasPresencePenalty() const { return this->presencePenalty_ != nullptr;};
    void deletePresencePenalty() { this->presencePenalty_ = nullptr;};
    inline float getPresencePenalty() const { DARABONBA_PTR_GET_DEFAULT(presencePenalty_, 0.0) };
    inline ModelParameters& setPresencePenalty(float presencePenalty) { DARABONBA_PTR_SET_VALUE(presencePenalty_, presencePenalty) };


    // stopSequences Field Functions 
    bool hasStopSequences() const { return this->stopSequences_ != nullptr;};
    void deleteStopSequences() { this->stopSequences_ = nullptr;};
    inline const vector<string> & getStopSequences() const { DARABONBA_PTR_GET_CONST(stopSequences_, vector<string>) };
    inline vector<string> getStopSequences() { DARABONBA_PTR_GET(stopSequences_, vector<string>) };
    inline ModelParameters& setStopSequences(const vector<string> & stopSequences) { DARABONBA_PTR_SET_VALUE(stopSequences_, stopSequences) };
    inline ModelParameters& setStopSequences(vector<string> && stopSequences) { DARABONBA_PTR_SET_RVALUE(stopSequences_, stopSequences) };


    // temperature Field Functions 
    bool hasTemperature() const { return this->temperature_ != nullptr;};
    void deleteTemperature() { this->temperature_ = nullptr;};
    inline float getTemperature() const { DARABONBA_PTR_GET_DEFAULT(temperature_, 0.0) };
    inline ModelParameters& setTemperature(float temperature) { DARABONBA_PTR_SET_VALUE(temperature_, temperature) };


    // topK Field Functions 
    bool hasTopK() const { return this->topK_ != nullptr;};
    void deleteTopK() { this->topK_ = nullptr;};
    inline int32_t getTopK() const { DARABONBA_PTR_GET_DEFAULT(topK_, 0) };
    inline ModelParameters& setTopK(int32_t topK) { DARABONBA_PTR_SET_VALUE(topK_, topK) };


    // topP Field Functions 
    bool hasTopP() const { return this->topP_ != nullptr;};
    void deleteTopP() { this->topP_ = nullptr;};
    inline float getTopP() const { DARABONBA_PTR_GET_DEFAULT(topP_, 0.0) };
    inline ModelParameters& setTopP(float topP) { DARABONBA_PTR_SET_VALUE(topP_, topP) };


  protected:
    shared_ptr<float> frequencyPenalty_ {};
    shared_ptr<int64_t> maxTokens_ {};
    shared_ptr<float> presencePenalty_ {};
    shared_ptr<vector<string>> stopSequences_ {};
    shared_ptr<float> temperature_ {};
    shared_ptr<int32_t> topK_ {};
    shared_ptr<float> topP_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
