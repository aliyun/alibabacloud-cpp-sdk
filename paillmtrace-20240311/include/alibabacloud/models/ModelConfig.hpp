// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELCONFIG_HPP_
#define ALIBABACLOUD_MODELS_MODELCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiLLMTrace20240311
{
namespace Models
{
  class ModelConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelConfig& obj) { 
      DARABONBA_PTR_TO_JSON(ApiKey, apiKey_);
      DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_TO_JSON(IsSelfHost, isSelfHost_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Temperature, temperature_);
      DARABONBA_PTR_TO_JSON(TopP, topP_);
      DARABONBA_PTR_TO_JSON(UseFunctionCall, useFunctionCall_);
    };
    friend void from_json(const Darabonba::Json& j, ModelConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiKey, apiKey_);
      DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_FROM_JSON(IsSelfHost, isSelfHost_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Temperature, temperature_);
      DARABONBA_PTR_FROM_JSON(TopP, topP_);
      DARABONBA_PTR_FROM_JSON(UseFunctionCall, useFunctionCall_);
    };
    ModelConfig() = default ;
    ModelConfig(const ModelConfig &) = default ;
    ModelConfig(ModelConfig &&) = default ;
    ModelConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelConfig() = default ;
    ModelConfig& operator=(const ModelConfig &) = default ;
    ModelConfig& operator=(ModelConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->apiKey_ != nullptr
        && this->endpoint_ != nullptr && this->isSelfHost_ != nullptr && this->name_ != nullptr && this->temperature_ != nullptr && this->topP_ != nullptr
        && this->useFunctionCall_ != nullptr; };
    // apiKey Field Functions 
    bool hasApiKey() const { return this->apiKey_ != nullptr;};
    void deleteApiKey() { this->apiKey_ = nullptr;};
    inline string apiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
    inline ModelConfig& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


    // endpoint Field Functions 
    bool hasEndpoint() const { return this->endpoint_ != nullptr;};
    void deleteEndpoint() { this->endpoint_ = nullptr;};
    inline string endpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
    inline ModelConfig& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


    // isSelfHost Field Functions 
    bool hasIsSelfHost() const { return this->isSelfHost_ != nullptr;};
    void deleteIsSelfHost() { this->isSelfHost_ = nullptr;};
    inline bool isSelfHost() const { DARABONBA_PTR_GET_DEFAULT(isSelfHost_, false) };
    inline ModelConfig& setIsSelfHost(bool isSelfHost) { DARABONBA_PTR_SET_VALUE(isSelfHost_, isSelfHost) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ModelConfig& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // temperature Field Functions 
    bool hasTemperature() const { return this->temperature_ != nullptr;};
    void deleteTemperature() { this->temperature_ = nullptr;};
    inline float temperature() const { DARABONBA_PTR_GET_DEFAULT(temperature_, 0.0) };
    inline ModelConfig& setTemperature(float temperature) { DARABONBA_PTR_SET_VALUE(temperature_, temperature) };


    // topP Field Functions 
    bool hasTopP() const { return this->topP_ != nullptr;};
    void deleteTopP() { this->topP_ = nullptr;};
    inline float topP() const { DARABONBA_PTR_GET_DEFAULT(topP_, 0.0) };
    inline ModelConfig& setTopP(float topP) { DARABONBA_PTR_SET_VALUE(topP_, topP) };


    // useFunctionCall Field Functions 
    bool hasUseFunctionCall() const { return this->useFunctionCall_ != nullptr;};
    void deleteUseFunctionCall() { this->useFunctionCall_ = nullptr;};
    inline bool useFunctionCall() const { DARABONBA_PTR_GET_DEFAULT(useFunctionCall_, false) };
    inline ModelConfig& setUseFunctionCall(bool useFunctionCall) { DARABONBA_PTR_SET_VALUE(useFunctionCall_, useFunctionCall) };


  protected:
    std::shared_ptr<string> apiKey_ = nullptr;
    std::shared_ptr<string> endpoint_ = nullptr;
    std::shared_ptr<bool> isSelfHost_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<float> temperature_ = nullptr;
    std::shared_ptr<float> topP_ = nullptr;
    std::shared_ptr<bool> useFunctionCall_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiLLMTrace20240311
#endif
