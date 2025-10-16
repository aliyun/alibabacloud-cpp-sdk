// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITDOCPARSERJOBSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITDOCPARSERJOBSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DocmindApi20220711
{
namespace Models
{
  class SubmitDocParserJobShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitDocParserJobShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CustomOssConfig, customOssConfigShrink_);
      DARABONBA_PTR_TO_JSON(EnhancementMode, enhancementMode_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(FileNameExtension, fileNameExtension_);
      DARABONBA_PTR_TO_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_TO_JSON(FormulaEnhancement, formulaEnhancement_);
      DARABONBA_PTR_TO_JSON(LLMParam, LLMParamShrink_);
      DARABONBA_PTR_TO_JSON(LlmEnhancement, llmEnhancement_);
      DARABONBA_PTR_TO_JSON(MultimediaParameters, multimediaParametersShrink_);
      DARABONBA_PTR_TO_JSON(NeedHeaderFooter, needHeaderFooter_);
      DARABONBA_PTR_TO_JSON(Option, option_);
      DARABONBA_PTR_TO_JSON(OssBucket, ossBucket_);
      DARABONBA_PTR_TO_JSON(OssEndpoint, ossEndpoint_);
      DARABONBA_PTR_TO_JSON(OutputHtmlTable, outputHtmlTable_);
      DARABONBA_PTR_TO_JSON(PageIndex, pageIndex_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitDocParserJobShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomOssConfig, customOssConfigShrink_);
      DARABONBA_PTR_FROM_JSON(EnhancementMode, enhancementMode_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(FileNameExtension, fileNameExtension_);
      DARABONBA_PTR_FROM_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_FROM_JSON(FormulaEnhancement, formulaEnhancement_);
      DARABONBA_PTR_FROM_JSON(LLMParam, LLMParamShrink_);
      DARABONBA_PTR_FROM_JSON(LlmEnhancement, llmEnhancement_);
      DARABONBA_PTR_FROM_JSON(MultimediaParameters, multimediaParametersShrink_);
      DARABONBA_PTR_FROM_JSON(NeedHeaderFooter, needHeaderFooter_);
      DARABONBA_PTR_FROM_JSON(Option, option_);
      DARABONBA_PTR_FROM_JSON(OssBucket, ossBucket_);
      DARABONBA_PTR_FROM_JSON(OssEndpoint, ossEndpoint_);
      DARABONBA_PTR_FROM_JSON(OutputHtmlTable, outputHtmlTable_);
      DARABONBA_PTR_FROM_JSON(PageIndex, pageIndex_);
    };
    SubmitDocParserJobShrinkRequest() = default ;
    SubmitDocParserJobShrinkRequest(const SubmitDocParserJobShrinkRequest &) = default ;
    SubmitDocParserJobShrinkRequest(SubmitDocParserJobShrinkRequest &&) = default ;
    SubmitDocParserJobShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitDocParserJobShrinkRequest() = default ;
    SubmitDocParserJobShrinkRequest& operator=(const SubmitDocParserJobShrinkRequest &) = default ;
    SubmitDocParserJobShrinkRequest& operator=(SubmitDocParserJobShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customOssConfigShrink_ == nullptr
        && return this->enhancementMode_ == nullptr && return this->fileName_ == nullptr && return this->fileNameExtension_ == nullptr && return this->fileUrl_ == nullptr && return this->formulaEnhancement_ == nullptr
        && return this->LLMParamShrink_ == nullptr && return this->llmEnhancement_ == nullptr && return this->multimediaParametersShrink_ == nullptr && return this->needHeaderFooter_ == nullptr && return this->option_ == nullptr
        && return this->ossBucket_ == nullptr && return this->ossEndpoint_ == nullptr && return this->outputHtmlTable_ == nullptr && return this->pageIndex_ == nullptr; };
    // customOssConfigShrink Field Functions 
    bool hasCustomOssConfigShrink() const { return this->customOssConfigShrink_ != nullptr;};
    void deleteCustomOssConfigShrink() { this->customOssConfigShrink_ = nullptr;};
    inline string customOssConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(customOssConfigShrink_, "") };
    inline SubmitDocParserJobShrinkRequest& setCustomOssConfigShrink(string customOssConfigShrink) { DARABONBA_PTR_SET_VALUE(customOssConfigShrink_, customOssConfigShrink) };


    // enhancementMode Field Functions 
    bool hasEnhancementMode() const { return this->enhancementMode_ != nullptr;};
    void deleteEnhancementMode() { this->enhancementMode_ = nullptr;};
    inline string enhancementMode() const { DARABONBA_PTR_GET_DEFAULT(enhancementMode_, "") };
    inline SubmitDocParserJobShrinkRequest& setEnhancementMode(string enhancementMode) { DARABONBA_PTR_SET_VALUE(enhancementMode_, enhancementMode) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline SubmitDocParserJobShrinkRequest& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // fileNameExtension Field Functions 
    bool hasFileNameExtension() const { return this->fileNameExtension_ != nullptr;};
    void deleteFileNameExtension() { this->fileNameExtension_ = nullptr;};
    inline string fileNameExtension() const { DARABONBA_PTR_GET_DEFAULT(fileNameExtension_, "") };
    inline SubmitDocParserJobShrinkRequest& setFileNameExtension(string fileNameExtension) { DARABONBA_PTR_SET_VALUE(fileNameExtension_, fileNameExtension) };


    // fileUrl Field Functions 
    bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
    void deleteFileUrl() { this->fileUrl_ = nullptr;};
    inline string fileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
    inline SubmitDocParserJobShrinkRequest& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


    // formulaEnhancement Field Functions 
    bool hasFormulaEnhancement() const { return this->formulaEnhancement_ != nullptr;};
    void deleteFormulaEnhancement() { this->formulaEnhancement_ = nullptr;};
    inline bool formulaEnhancement() const { DARABONBA_PTR_GET_DEFAULT(formulaEnhancement_, false) };
    inline SubmitDocParserJobShrinkRequest& setFormulaEnhancement(bool formulaEnhancement) { DARABONBA_PTR_SET_VALUE(formulaEnhancement_, formulaEnhancement) };


    // LLMParamShrink Field Functions 
    bool hasLLMParamShrink() const { return this->LLMParamShrink_ != nullptr;};
    void deleteLLMParamShrink() { this->LLMParamShrink_ = nullptr;};
    inline string LLMParamShrink() const { DARABONBA_PTR_GET_DEFAULT(LLMParamShrink_, "") };
    inline SubmitDocParserJobShrinkRequest& setLLMParamShrink(string LLMParamShrink) { DARABONBA_PTR_SET_VALUE(LLMParamShrink_, LLMParamShrink) };


    // llmEnhancement Field Functions 
    bool hasLlmEnhancement() const { return this->llmEnhancement_ != nullptr;};
    void deleteLlmEnhancement() { this->llmEnhancement_ = nullptr;};
    inline bool llmEnhancement() const { DARABONBA_PTR_GET_DEFAULT(llmEnhancement_, false) };
    inline SubmitDocParserJobShrinkRequest& setLlmEnhancement(bool llmEnhancement) { DARABONBA_PTR_SET_VALUE(llmEnhancement_, llmEnhancement) };


    // multimediaParametersShrink Field Functions 
    bool hasMultimediaParametersShrink() const { return this->multimediaParametersShrink_ != nullptr;};
    void deleteMultimediaParametersShrink() { this->multimediaParametersShrink_ = nullptr;};
    inline string multimediaParametersShrink() const { DARABONBA_PTR_GET_DEFAULT(multimediaParametersShrink_, "") };
    inline SubmitDocParserJobShrinkRequest& setMultimediaParametersShrink(string multimediaParametersShrink) { DARABONBA_PTR_SET_VALUE(multimediaParametersShrink_, multimediaParametersShrink) };


    // needHeaderFooter Field Functions 
    bool hasNeedHeaderFooter() const { return this->needHeaderFooter_ != nullptr;};
    void deleteNeedHeaderFooter() { this->needHeaderFooter_ = nullptr;};
    inline bool needHeaderFooter() const { DARABONBA_PTR_GET_DEFAULT(needHeaderFooter_, false) };
    inline SubmitDocParserJobShrinkRequest& setNeedHeaderFooter(bool needHeaderFooter) { DARABONBA_PTR_SET_VALUE(needHeaderFooter_, needHeaderFooter) };


    // option Field Functions 
    bool hasOption() const { return this->option_ != nullptr;};
    void deleteOption() { this->option_ = nullptr;};
    inline string option() const { DARABONBA_PTR_GET_DEFAULT(option_, "") };
    inline SubmitDocParserJobShrinkRequest& setOption(string option) { DARABONBA_PTR_SET_VALUE(option_, option) };


    // ossBucket Field Functions 
    bool hasOssBucket() const { return this->ossBucket_ != nullptr;};
    void deleteOssBucket() { this->ossBucket_ = nullptr;};
    inline string ossBucket() const { DARABONBA_PTR_GET_DEFAULT(ossBucket_, "") };
    inline SubmitDocParserJobShrinkRequest& setOssBucket(string ossBucket) { DARABONBA_PTR_SET_VALUE(ossBucket_, ossBucket) };


    // ossEndpoint Field Functions 
    bool hasOssEndpoint() const { return this->ossEndpoint_ != nullptr;};
    void deleteOssEndpoint() { this->ossEndpoint_ = nullptr;};
    inline string ossEndpoint() const { DARABONBA_PTR_GET_DEFAULT(ossEndpoint_, "") };
    inline SubmitDocParserJobShrinkRequest& setOssEndpoint(string ossEndpoint) { DARABONBA_PTR_SET_VALUE(ossEndpoint_, ossEndpoint) };


    // outputHtmlTable Field Functions 
    bool hasOutputHtmlTable() const { return this->outputHtmlTable_ != nullptr;};
    void deleteOutputHtmlTable() { this->outputHtmlTable_ = nullptr;};
    inline bool outputHtmlTable() const { DARABONBA_PTR_GET_DEFAULT(outputHtmlTable_, false) };
    inline SubmitDocParserJobShrinkRequest& setOutputHtmlTable(bool outputHtmlTable) { DARABONBA_PTR_SET_VALUE(outputHtmlTable_, outputHtmlTable) };


    // pageIndex Field Functions 
    bool hasPageIndex() const { return this->pageIndex_ != nullptr;};
    void deletePageIndex() { this->pageIndex_ = nullptr;};
    inline string pageIndex() const { DARABONBA_PTR_GET_DEFAULT(pageIndex_, "") };
    inline SubmitDocParserJobShrinkRequest& setPageIndex(string pageIndex) { DARABONBA_PTR_SET_VALUE(pageIndex_, pageIndex) };


  protected:
    std::shared_ptr<string> customOssConfigShrink_ = nullptr;
    std::shared_ptr<string> enhancementMode_ = nullptr;
    std::shared_ptr<string> fileName_ = nullptr;
    std::shared_ptr<string> fileNameExtension_ = nullptr;
    std::shared_ptr<string> fileUrl_ = nullptr;
    std::shared_ptr<bool> formulaEnhancement_ = nullptr;
    std::shared_ptr<string> LLMParamShrink_ = nullptr;
    std::shared_ptr<bool> llmEnhancement_ = nullptr;
    std::shared_ptr<string> multimediaParametersShrink_ = nullptr;
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
