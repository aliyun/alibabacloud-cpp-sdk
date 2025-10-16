// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITDOCPARSERJOBADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITDOCPARSERJOBADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SubmitDocParserJobAdvanceRequestCustomOssConfig.hpp>
#include <alibabacloud/models/SubmitDocParserJobAdvanceRequestLLMParam.hpp>
#include <alibabacloud/models/SubmitDocParserJobAdvanceRequestMultimediaParameters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DocmindApi20220711
{
namespace Models
{
  class SubmitDocParserJobAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitDocParserJobAdvanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CustomOssConfig, customOssConfig_);
      DARABONBA_PTR_TO_JSON(EnhancementMode, enhancementMode_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(FileNameExtension, fileNameExtension_);
      DARABONBA_TO_JSON(FileUrl, fileUrlObject_);
      DARABONBA_PTR_TO_JSON(FormulaEnhancement, formulaEnhancement_);
      DARABONBA_PTR_TO_JSON(LLMParam, LLMParam_);
      DARABONBA_PTR_TO_JSON(LlmEnhancement, llmEnhancement_);
      DARABONBA_PTR_TO_JSON(MultimediaParameters, multimediaParameters_);
      DARABONBA_PTR_TO_JSON(NeedHeaderFooter, needHeaderFooter_);
      DARABONBA_PTR_TO_JSON(Option, option_);
      DARABONBA_PTR_TO_JSON(OssBucket, ossBucket_);
      DARABONBA_PTR_TO_JSON(OssEndpoint, ossEndpoint_);
      DARABONBA_PTR_TO_JSON(OutputHtmlTable, outputHtmlTable_);
      DARABONBA_PTR_TO_JSON(PageIndex, pageIndex_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitDocParserJobAdvanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomOssConfig, customOssConfig_);
      DARABONBA_PTR_FROM_JSON(EnhancementMode, enhancementMode_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(FileNameExtension, fileNameExtension_);
      DARABONBA_FROM_JSON(FileUrl, fileUrlObject_);
      DARABONBA_PTR_FROM_JSON(FormulaEnhancement, formulaEnhancement_);
      DARABONBA_PTR_FROM_JSON(LLMParam, LLMParam_);
      DARABONBA_PTR_FROM_JSON(LlmEnhancement, llmEnhancement_);
      DARABONBA_PTR_FROM_JSON(MultimediaParameters, multimediaParameters_);
      DARABONBA_PTR_FROM_JSON(NeedHeaderFooter, needHeaderFooter_);
      DARABONBA_PTR_FROM_JSON(Option, option_);
      DARABONBA_PTR_FROM_JSON(OssBucket, ossBucket_);
      DARABONBA_PTR_FROM_JSON(OssEndpoint, ossEndpoint_);
      DARABONBA_PTR_FROM_JSON(OutputHtmlTable, outputHtmlTable_);
      DARABONBA_PTR_FROM_JSON(PageIndex, pageIndex_);
    };
    SubmitDocParserJobAdvanceRequest() = default ;
    SubmitDocParserJobAdvanceRequest(const SubmitDocParserJobAdvanceRequest &) = default ;
    SubmitDocParserJobAdvanceRequest(SubmitDocParserJobAdvanceRequest &&) = default ;
    SubmitDocParserJobAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitDocParserJobAdvanceRequest() = default ;
    SubmitDocParserJobAdvanceRequest& operator=(const SubmitDocParserJobAdvanceRequest &) = default ;
    SubmitDocParserJobAdvanceRequest& operator=(SubmitDocParserJobAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customOssConfig_ == nullptr
        && return this->enhancementMode_ == nullptr && return this->fileName_ == nullptr && return this->fileNameExtension_ == nullptr && return this->fileUrlObject_ == nullptr && return this->formulaEnhancement_ == nullptr
        && return this->LLMParam_ == nullptr && return this->llmEnhancement_ == nullptr && return this->multimediaParameters_ == nullptr && return this->needHeaderFooter_ == nullptr && return this->option_ == nullptr
        && return this->ossBucket_ == nullptr && return this->ossEndpoint_ == nullptr && return this->outputHtmlTable_ == nullptr && return this->pageIndex_ == nullptr; };
    // customOssConfig Field Functions 
    bool hasCustomOssConfig() const { return this->customOssConfig_ != nullptr;};
    void deleteCustomOssConfig() { this->customOssConfig_ = nullptr;};
    inline const SubmitDocParserJobAdvanceRequestCustomOssConfig & customOssConfig() const { DARABONBA_PTR_GET_CONST(customOssConfig_, SubmitDocParserJobAdvanceRequestCustomOssConfig) };
    inline SubmitDocParserJobAdvanceRequestCustomOssConfig customOssConfig() { DARABONBA_PTR_GET(customOssConfig_, SubmitDocParserJobAdvanceRequestCustomOssConfig) };
    inline SubmitDocParserJobAdvanceRequest& setCustomOssConfig(const SubmitDocParserJobAdvanceRequestCustomOssConfig & customOssConfig) { DARABONBA_PTR_SET_VALUE(customOssConfig_, customOssConfig) };
    inline SubmitDocParserJobAdvanceRequest& setCustomOssConfig(SubmitDocParserJobAdvanceRequestCustomOssConfig && customOssConfig) { DARABONBA_PTR_SET_RVALUE(customOssConfig_, customOssConfig) };


    // enhancementMode Field Functions 
    bool hasEnhancementMode() const { return this->enhancementMode_ != nullptr;};
    void deleteEnhancementMode() { this->enhancementMode_ = nullptr;};
    inline string enhancementMode() const { DARABONBA_PTR_GET_DEFAULT(enhancementMode_, "") };
    inline SubmitDocParserJobAdvanceRequest& setEnhancementMode(string enhancementMode) { DARABONBA_PTR_SET_VALUE(enhancementMode_, enhancementMode) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline SubmitDocParserJobAdvanceRequest& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // fileNameExtension Field Functions 
    bool hasFileNameExtension() const { return this->fileNameExtension_ != nullptr;};
    void deleteFileNameExtension() { this->fileNameExtension_ = nullptr;};
    inline string fileNameExtension() const { DARABONBA_PTR_GET_DEFAULT(fileNameExtension_, "") };
    inline SubmitDocParserJobAdvanceRequest& setFileNameExtension(string fileNameExtension) { DARABONBA_PTR_SET_VALUE(fileNameExtension_, fileNameExtension) };


    // fileUrlObject Field Functions 
    bool hasFileUrlObject() const { return this->fileUrlObject_ != nullptr;};
    void deleteFileUrlObject() { this->fileUrlObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> fileUrlObject() const { DARABONBA_GET(fileUrlObject_) };
    inline SubmitDocParserJobAdvanceRequest& setFileUrlObject(shared_ptr<Darabonba::IStream> fileUrlObject) { DARABONBA_SET_VALUE(fileUrlObject_, fileUrlObject) };


    // formulaEnhancement Field Functions 
    bool hasFormulaEnhancement() const { return this->formulaEnhancement_ != nullptr;};
    void deleteFormulaEnhancement() { this->formulaEnhancement_ = nullptr;};
    inline bool formulaEnhancement() const { DARABONBA_PTR_GET_DEFAULT(formulaEnhancement_, false) };
    inline SubmitDocParserJobAdvanceRequest& setFormulaEnhancement(bool formulaEnhancement) { DARABONBA_PTR_SET_VALUE(formulaEnhancement_, formulaEnhancement) };


    // LLMParam Field Functions 
    bool hasLLMParam() const { return this->LLMParam_ != nullptr;};
    void deleteLLMParam() { this->LLMParam_ = nullptr;};
    inline const SubmitDocParserJobAdvanceRequestLLMParam & LLMParam() const { DARABONBA_PTR_GET_CONST(LLMParam_, SubmitDocParserJobAdvanceRequestLLMParam) };
    inline SubmitDocParserJobAdvanceRequestLLMParam LLMParam() { DARABONBA_PTR_GET(LLMParam_, SubmitDocParserJobAdvanceRequestLLMParam) };
    inline SubmitDocParserJobAdvanceRequest& setLLMParam(const SubmitDocParserJobAdvanceRequestLLMParam & LLMParam) { DARABONBA_PTR_SET_VALUE(LLMParam_, LLMParam) };
    inline SubmitDocParserJobAdvanceRequest& setLLMParam(SubmitDocParserJobAdvanceRequestLLMParam && LLMParam) { DARABONBA_PTR_SET_RVALUE(LLMParam_, LLMParam) };


    // llmEnhancement Field Functions 
    bool hasLlmEnhancement() const { return this->llmEnhancement_ != nullptr;};
    void deleteLlmEnhancement() { this->llmEnhancement_ = nullptr;};
    inline bool llmEnhancement() const { DARABONBA_PTR_GET_DEFAULT(llmEnhancement_, false) };
    inline SubmitDocParserJobAdvanceRequest& setLlmEnhancement(bool llmEnhancement) { DARABONBA_PTR_SET_VALUE(llmEnhancement_, llmEnhancement) };


    // multimediaParameters Field Functions 
    bool hasMultimediaParameters() const { return this->multimediaParameters_ != nullptr;};
    void deleteMultimediaParameters() { this->multimediaParameters_ = nullptr;};
    inline const SubmitDocParserJobAdvanceRequestMultimediaParameters & multimediaParameters() const { DARABONBA_PTR_GET_CONST(multimediaParameters_, SubmitDocParserJobAdvanceRequestMultimediaParameters) };
    inline SubmitDocParserJobAdvanceRequestMultimediaParameters multimediaParameters() { DARABONBA_PTR_GET(multimediaParameters_, SubmitDocParserJobAdvanceRequestMultimediaParameters) };
    inline SubmitDocParserJobAdvanceRequest& setMultimediaParameters(const SubmitDocParserJobAdvanceRequestMultimediaParameters & multimediaParameters) { DARABONBA_PTR_SET_VALUE(multimediaParameters_, multimediaParameters) };
    inline SubmitDocParserJobAdvanceRequest& setMultimediaParameters(SubmitDocParserJobAdvanceRequestMultimediaParameters && multimediaParameters) { DARABONBA_PTR_SET_RVALUE(multimediaParameters_, multimediaParameters) };


    // needHeaderFooter Field Functions 
    bool hasNeedHeaderFooter() const { return this->needHeaderFooter_ != nullptr;};
    void deleteNeedHeaderFooter() { this->needHeaderFooter_ = nullptr;};
    inline bool needHeaderFooter() const { DARABONBA_PTR_GET_DEFAULT(needHeaderFooter_, false) };
    inline SubmitDocParserJobAdvanceRequest& setNeedHeaderFooter(bool needHeaderFooter) { DARABONBA_PTR_SET_VALUE(needHeaderFooter_, needHeaderFooter) };


    // option Field Functions 
    bool hasOption() const { return this->option_ != nullptr;};
    void deleteOption() { this->option_ = nullptr;};
    inline string option() const { DARABONBA_PTR_GET_DEFAULT(option_, "") };
    inline SubmitDocParserJobAdvanceRequest& setOption(string option) { DARABONBA_PTR_SET_VALUE(option_, option) };


    // ossBucket Field Functions 
    bool hasOssBucket() const { return this->ossBucket_ != nullptr;};
    void deleteOssBucket() { this->ossBucket_ = nullptr;};
    inline string ossBucket() const { DARABONBA_PTR_GET_DEFAULT(ossBucket_, "") };
    inline SubmitDocParserJobAdvanceRequest& setOssBucket(string ossBucket) { DARABONBA_PTR_SET_VALUE(ossBucket_, ossBucket) };


    // ossEndpoint Field Functions 
    bool hasOssEndpoint() const { return this->ossEndpoint_ != nullptr;};
    void deleteOssEndpoint() { this->ossEndpoint_ = nullptr;};
    inline string ossEndpoint() const { DARABONBA_PTR_GET_DEFAULT(ossEndpoint_, "") };
    inline SubmitDocParserJobAdvanceRequest& setOssEndpoint(string ossEndpoint) { DARABONBA_PTR_SET_VALUE(ossEndpoint_, ossEndpoint) };


    // outputHtmlTable Field Functions 
    bool hasOutputHtmlTable() const { return this->outputHtmlTable_ != nullptr;};
    void deleteOutputHtmlTable() { this->outputHtmlTable_ = nullptr;};
    inline bool outputHtmlTable() const { DARABONBA_PTR_GET_DEFAULT(outputHtmlTable_, false) };
    inline SubmitDocParserJobAdvanceRequest& setOutputHtmlTable(bool outputHtmlTable) { DARABONBA_PTR_SET_VALUE(outputHtmlTable_, outputHtmlTable) };


    // pageIndex Field Functions 
    bool hasPageIndex() const { return this->pageIndex_ != nullptr;};
    void deletePageIndex() { this->pageIndex_ = nullptr;};
    inline string pageIndex() const { DARABONBA_PTR_GET_DEFAULT(pageIndex_, "") };
    inline SubmitDocParserJobAdvanceRequest& setPageIndex(string pageIndex) { DARABONBA_PTR_SET_VALUE(pageIndex_, pageIndex) };


  protected:
    std::shared_ptr<SubmitDocParserJobAdvanceRequestCustomOssConfig> customOssConfig_ = nullptr;
    std::shared_ptr<string> enhancementMode_ = nullptr;
    std::shared_ptr<string> fileName_ = nullptr;
    std::shared_ptr<string> fileNameExtension_ = nullptr;
    shared_ptr<Darabonba::IStream> fileUrlObject_ = nullptr;
    std::shared_ptr<bool> formulaEnhancement_ = nullptr;
    std::shared_ptr<SubmitDocParserJobAdvanceRequestLLMParam> LLMParam_ = nullptr;
    std::shared_ptr<bool> llmEnhancement_ = nullptr;
    std::shared_ptr<SubmitDocParserJobAdvanceRequestMultimediaParameters> multimediaParameters_ = nullptr;
    std::shared_ptr<bool> needHeaderFooter_ = nullptr;
    std::shared_ptr<string> option_ = nullptr;
    std::shared_ptr<string> ossBucket_ = nullptr;
    std::shared_ptr<string> ossEndpoint_ = nullptr;
    std::shared_ptr<bool> outputHtmlTable_ = nullptr;
    std::shared_ptr<string> pageIndex_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DocmindApi20220711
#endif
