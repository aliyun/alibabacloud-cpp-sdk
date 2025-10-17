// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNMARKETINGINFORMATIONWRITINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNMARKETINGINFORMATIONWRITINGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class RunMarketingInformationWritingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunMarketingInformationWritingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(apiKey, apiKey_);
      DARABONBA_PTR_TO_JSON(customLimitation, customLimitation_);
      DARABONBA_PTR_TO_JSON(customPrompt, customPrompt_);
      DARABONBA_PTR_TO_JSON(inputExample, inputExample_);
      DARABONBA_PTR_TO_JSON(modelId, modelId_);
      DARABONBA_PTR_TO_JSON(outputExample, outputExample_);
      DARABONBA_PTR_TO_JSON(sourceMaterial, sourceMaterial_);
      DARABONBA_PTR_TO_JSON(writingType, writingType_);
    };
    friend void from_json(const Darabonba::Json& j, RunMarketingInformationWritingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(apiKey, apiKey_);
      DARABONBA_PTR_FROM_JSON(customLimitation, customLimitation_);
      DARABONBA_PTR_FROM_JSON(customPrompt, customPrompt_);
      DARABONBA_PTR_FROM_JSON(inputExample, inputExample_);
      DARABONBA_PTR_FROM_JSON(modelId, modelId_);
      DARABONBA_PTR_FROM_JSON(outputExample, outputExample_);
      DARABONBA_PTR_FROM_JSON(sourceMaterial, sourceMaterial_);
      DARABONBA_PTR_FROM_JSON(writingType, writingType_);
    };
    RunMarketingInformationWritingRequest() = default ;
    RunMarketingInformationWritingRequest(const RunMarketingInformationWritingRequest &) = default ;
    RunMarketingInformationWritingRequest(RunMarketingInformationWritingRequest &&) = default ;
    RunMarketingInformationWritingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunMarketingInformationWritingRequest() = default ;
    RunMarketingInformationWritingRequest& operator=(const RunMarketingInformationWritingRequest &) = default ;
    RunMarketingInformationWritingRequest& operator=(RunMarketingInformationWritingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiKey_ == nullptr
        && return this->customLimitation_ == nullptr && return this->customPrompt_ == nullptr && return this->inputExample_ == nullptr && return this->modelId_ == nullptr && return this->outputExample_ == nullptr
        && return this->sourceMaterial_ == nullptr && return this->writingType_ == nullptr; };
    // apiKey Field Functions 
    bool hasApiKey() const { return this->apiKey_ != nullptr;};
    void deleteApiKey() { this->apiKey_ = nullptr;};
    inline string apiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
    inline RunMarketingInformationWritingRequest& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


    // customLimitation Field Functions 
    bool hasCustomLimitation() const { return this->customLimitation_ != nullptr;};
    void deleteCustomLimitation() { this->customLimitation_ = nullptr;};
    inline string customLimitation() const { DARABONBA_PTR_GET_DEFAULT(customLimitation_, "") };
    inline RunMarketingInformationWritingRequest& setCustomLimitation(string customLimitation) { DARABONBA_PTR_SET_VALUE(customLimitation_, customLimitation) };


    // customPrompt Field Functions 
    bool hasCustomPrompt() const { return this->customPrompt_ != nullptr;};
    void deleteCustomPrompt() { this->customPrompt_ = nullptr;};
    inline string customPrompt() const { DARABONBA_PTR_GET_DEFAULT(customPrompt_, "") };
    inline RunMarketingInformationWritingRequest& setCustomPrompt(string customPrompt) { DARABONBA_PTR_SET_VALUE(customPrompt_, customPrompt) };


    // inputExample Field Functions 
    bool hasInputExample() const { return this->inputExample_ != nullptr;};
    void deleteInputExample() { this->inputExample_ = nullptr;};
    inline string inputExample() const { DARABONBA_PTR_GET_DEFAULT(inputExample_, "") };
    inline RunMarketingInformationWritingRequest& setInputExample(string inputExample) { DARABONBA_PTR_SET_VALUE(inputExample_, inputExample) };


    // modelId Field Functions 
    bool hasModelId() const { return this->modelId_ != nullptr;};
    void deleteModelId() { this->modelId_ = nullptr;};
    inline string modelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
    inline RunMarketingInformationWritingRequest& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


    // outputExample Field Functions 
    bool hasOutputExample() const { return this->outputExample_ != nullptr;};
    void deleteOutputExample() { this->outputExample_ = nullptr;};
    inline string outputExample() const { DARABONBA_PTR_GET_DEFAULT(outputExample_, "") };
    inline RunMarketingInformationWritingRequest& setOutputExample(string outputExample) { DARABONBA_PTR_SET_VALUE(outputExample_, outputExample) };


    // sourceMaterial Field Functions 
    bool hasSourceMaterial() const { return this->sourceMaterial_ != nullptr;};
    void deleteSourceMaterial() { this->sourceMaterial_ = nullptr;};
    inline string sourceMaterial() const { DARABONBA_PTR_GET_DEFAULT(sourceMaterial_, "") };
    inline RunMarketingInformationWritingRequest& setSourceMaterial(string sourceMaterial) { DARABONBA_PTR_SET_VALUE(sourceMaterial_, sourceMaterial) };


    // writingType Field Functions 
    bool hasWritingType() const { return this->writingType_ != nullptr;};
    void deleteWritingType() { this->writingType_ = nullptr;};
    inline string writingType() const { DARABONBA_PTR_GET_DEFAULT(writingType_, "") };
    inline RunMarketingInformationWritingRequest& setWritingType(string writingType) { DARABONBA_PTR_SET_VALUE(writingType_, writingType) };


  protected:
    std::shared_ptr<string> apiKey_ = nullptr;
    std::shared_ptr<string> customLimitation_ = nullptr;
    std::shared_ptr<string> customPrompt_ = nullptr;
    std::shared_ptr<string> inputExample_ = nullptr;
    std::shared_ptr<string> modelId_ = nullptr;
    std::shared_ptr<string> outputExample_ = nullptr;
    std::shared_ptr<string> sourceMaterial_ = nullptr;
    std::shared_ptr<string> writingType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
