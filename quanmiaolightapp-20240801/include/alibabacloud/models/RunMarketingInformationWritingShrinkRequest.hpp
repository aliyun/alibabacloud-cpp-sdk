// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNMARKETINGINFORMATIONWRITINGSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNMARKETINGINFORMATIONWRITINGSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class RunMarketingInformationWritingShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunMarketingInformationWritingShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(apiKey, apiKey_);
      DARABONBA_PTR_TO_JSON(customLimitation, customLimitation_);
      DARABONBA_PTR_TO_JSON(customPrompt, customPrompt_);
      DARABONBA_PTR_TO_JSON(extParameters, extParametersShrink_);
      DARABONBA_PTR_TO_JSON(generateCount, generateCount_);
      DARABONBA_PTR_TO_JSON(inputExample, inputExample_);
      DARABONBA_PTR_TO_JSON(keywords, keywords_);
      DARABONBA_PTR_TO_JSON(language, language_);
      DARABONBA_PTR_TO_JSON(modelId, modelId_);
      DARABONBA_PTR_TO_JSON(otherRequirements, otherRequirements_);
      DARABONBA_PTR_TO_JSON(outputExample, outputExample_);
      DARABONBA_PTR_TO_JSON(prompt, prompt_);
      DARABONBA_PTR_TO_JSON(sourceMaterial, sourceMaterial_);
      DARABONBA_PTR_TO_JSON(wordCountRange, wordCountRange_);
      DARABONBA_PTR_TO_JSON(writingType, writingType_);
    };
    friend void from_json(const Darabonba::Json& j, RunMarketingInformationWritingShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(apiKey, apiKey_);
      DARABONBA_PTR_FROM_JSON(customLimitation, customLimitation_);
      DARABONBA_PTR_FROM_JSON(customPrompt, customPrompt_);
      DARABONBA_PTR_FROM_JSON(extParameters, extParametersShrink_);
      DARABONBA_PTR_FROM_JSON(generateCount, generateCount_);
      DARABONBA_PTR_FROM_JSON(inputExample, inputExample_);
      DARABONBA_PTR_FROM_JSON(keywords, keywords_);
      DARABONBA_PTR_FROM_JSON(language, language_);
      DARABONBA_PTR_FROM_JSON(modelId, modelId_);
      DARABONBA_PTR_FROM_JSON(otherRequirements, otherRequirements_);
      DARABONBA_PTR_FROM_JSON(outputExample, outputExample_);
      DARABONBA_PTR_FROM_JSON(prompt, prompt_);
      DARABONBA_PTR_FROM_JSON(sourceMaterial, sourceMaterial_);
      DARABONBA_PTR_FROM_JSON(wordCountRange, wordCountRange_);
      DARABONBA_PTR_FROM_JSON(writingType, writingType_);
    };
    RunMarketingInformationWritingShrinkRequest() = default ;
    RunMarketingInformationWritingShrinkRequest(const RunMarketingInformationWritingShrinkRequest &) = default ;
    RunMarketingInformationWritingShrinkRequest(RunMarketingInformationWritingShrinkRequest &&) = default ;
    RunMarketingInformationWritingShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunMarketingInformationWritingShrinkRequest() = default ;
    RunMarketingInformationWritingShrinkRequest& operator=(const RunMarketingInformationWritingShrinkRequest &) = default ;
    RunMarketingInformationWritingShrinkRequest& operator=(RunMarketingInformationWritingShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiKey_ == nullptr
        && this->customLimitation_ == nullptr && this->customPrompt_ == nullptr && this->extParametersShrink_ == nullptr && this->generateCount_ == nullptr && this->inputExample_ == nullptr
        && this->keywords_ == nullptr && this->language_ == nullptr && this->modelId_ == nullptr && this->otherRequirements_ == nullptr && this->outputExample_ == nullptr
        && this->prompt_ == nullptr && this->sourceMaterial_ == nullptr && this->wordCountRange_ == nullptr && this->writingType_ == nullptr; };
    // apiKey Field Functions 
    bool hasApiKey() const { return this->apiKey_ != nullptr;};
    void deleteApiKey() { this->apiKey_ = nullptr;};
    inline string getApiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
    inline RunMarketingInformationWritingShrinkRequest& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


    // customLimitation Field Functions 
    bool hasCustomLimitation() const { return this->customLimitation_ != nullptr;};
    void deleteCustomLimitation() { this->customLimitation_ = nullptr;};
    inline string getCustomLimitation() const { DARABONBA_PTR_GET_DEFAULT(customLimitation_, "") };
    inline RunMarketingInformationWritingShrinkRequest& setCustomLimitation(string customLimitation) { DARABONBA_PTR_SET_VALUE(customLimitation_, customLimitation) };


    // customPrompt Field Functions 
    bool hasCustomPrompt() const { return this->customPrompt_ != nullptr;};
    void deleteCustomPrompt() { this->customPrompt_ = nullptr;};
    inline string getCustomPrompt() const { DARABONBA_PTR_GET_DEFAULT(customPrompt_, "") };
    inline RunMarketingInformationWritingShrinkRequest& setCustomPrompt(string customPrompt) { DARABONBA_PTR_SET_VALUE(customPrompt_, customPrompt) };


    // extParametersShrink Field Functions 
    bool hasExtParametersShrink() const { return this->extParametersShrink_ != nullptr;};
    void deleteExtParametersShrink() { this->extParametersShrink_ = nullptr;};
    inline string getExtParametersShrink() const { DARABONBA_PTR_GET_DEFAULT(extParametersShrink_, "") };
    inline RunMarketingInformationWritingShrinkRequest& setExtParametersShrink(string extParametersShrink) { DARABONBA_PTR_SET_VALUE(extParametersShrink_, extParametersShrink) };


    // generateCount Field Functions 
    bool hasGenerateCount() const { return this->generateCount_ != nullptr;};
    void deleteGenerateCount() { this->generateCount_ = nullptr;};
    inline string getGenerateCount() const { DARABONBA_PTR_GET_DEFAULT(generateCount_, "") };
    inline RunMarketingInformationWritingShrinkRequest& setGenerateCount(string generateCount) { DARABONBA_PTR_SET_VALUE(generateCount_, generateCount) };


    // inputExample Field Functions 
    bool hasInputExample() const { return this->inputExample_ != nullptr;};
    void deleteInputExample() { this->inputExample_ = nullptr;};
    inline string getInputExample() const { DARABONBA_PTR_GET_DEFAULT(inputExample_, "") };
    inline RunMarketingInformationWritingShrinkRequest& setInputExample(string inputExample) { DARABONBA_PTR_SET_VALUE(inputExample_, inputExample) };


    // keywords Field Functions 
    bool hasKeywords() const { return this->keywords_ != nullptr;};
    void deleteKeywords() { this->keywords_ = nullptr;};
    inline string getKeywords() const { DARABONBA_PTR_GET_DEFAULT(keywords_, "") };
    inline RunMarketingInformationWritingShrinkRequest& setKeywords(string keywords) { DARABONBA_PTR_SET_VALUE(keywords_, keywords) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline RunMarketingInformationWritingShrinkRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // modelId Field Functions 
    bool hasModelId() const { return this->modelId_ != nullptr;};
    void deleteModelId() { this->modelId_ = nullptr;};
    inline string getModelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
    inline RunMarketingInformationWritingShrinkRequest& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


    // otherRequirements Field Functions 
    bool hasOtherRequirements() const { return this->otherRequirements_ != nullptr;};
    void deleteOtherRequirements() { this->otherRequirements_ = nullptr;};
    inline string getOtherRequirements() const { DARABONBA_PTR_GET_DEFAULT(otherRequirements_, "") };
    inline RunMarketingInformationWritingShrinkRequest& setOtherRequirements(string otherRequirements) { DARABONBA_PTR_SET_VALUE(otherRequirements_, otherRequirements) };


    // outputExample Field Functions 
    bool hasOutputExample() const { return this->outputExample_ != nullptr;};
    void deleteOutputExample() { this->outputExample_ = nullptr;};
    inline string getOutputExample() const { DARABONBA_PTR_GET_DEFAULT(outputExample_, "") };
    inline RunMarketingInformationWritingShrinkRequest& setOutputExample(string outputExample) { DARABONBA_PTR_SET_VALUE(outputExample_, outputExample) };


    // prompt Field Functions 
    bool hasPrompt() const { return this->prompt_ != nullptr;};
    void deletePrompt() { this->prompt_ = nullptr;};
    inline string getPrompt() const { DARABONBA_PTR_GET_DEFAULT(prompt_, "") };
    inline RunMarketingInformationWritingShrinkRequest& setPrompt(string prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };


    // sourceMaterial Field Functions 
    bool hasSourceMaterial() const { return this->sourceMaterial_ != nullptr;};
    void deleteSourceMaterial() { this->sourceMaterial_ = nullptr;};
    inline string getSourceMaterial() const { DARABONBA_PTR_GET_DEFAULT(sourceMaterial_, "") };
    inline RunMarketingInformationWritingShrinkRequest& setSourceMaterial(string sourceMaterial) { DARABONBA_PTR_SET_VALUE(sourceMaterial_, sourceMaterial) };


    // wordCountRange Field Functions 
    bool hasWordCountRange() const { return this->wordCountRange_ != nullptr;};
    void deleteWordCountRange() { this->wordCountRange_ = nullptr;};
    inline string getWordCountRange() const { DARABONBA_PTR_GET_DEFAULT(wordCountRange_, "") };
    inline RunMarketingInformationWritingShrinkRequest& setWordCountRange(string wordCountRange) { DARABONBA_PTR_SET_VALUE(wordCountRange_, wordCountRange) };


    // writingType Field Functions 
    bool hasWritingType() const { return this->writingType_ != nullptr;};
    void deleteWritingType() { this->writingType_ = nullptr;};
    inline string getWritingType() const { DARABONBA_PTR_GET_DEFAULT(writingType_, "") };
    inline RunMarketingInformationWritingShrinkRequest& setWritingType(string writingType) { DARABONBA_PTR_SET_VALUE(writingType_, writingType) };


  protected:
    shared_ptr<string> apiKey_ {};
    shared_ptr<string> customLimitation_ {};
    shared_ptr<string> customPrompt_ {};
    shared_ptr<string> extParametersShrink_ {};
    shared_ptr<string> generateCount_ {};
    shared_ptr<string> inputExample_ {};
    shared_ptr<string> keywords_ {};
    shared_ptr<string> language_ {};
    shared_ptr<string> modelId_ {};
    shared_ptr<string> otherRequirements_ {};
    shared_ptr<string> outputExample_ {};
    shared_ptr<string> prompt_ {};
    shared_ptr<string> sourceMaterial_ {};
    shared_ptr<string> wordCountRange_ {};
    shared_ptr<string> writingType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
