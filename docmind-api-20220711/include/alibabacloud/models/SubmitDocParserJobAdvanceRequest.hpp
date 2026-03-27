// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITDOCPARSERJOBADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITDOCPARSERJOBADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
      DARABONBA_PTR_TO_JSON(EnableEventCallback, enableEventCallback_);
      DARABONBA_PTR_TO_JSON(EnhancementMode, enhancementMode_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(FileNameExtension, fileNameExtension_);
      // fileUrlObject_ is stream
      DARABONBA_PTR_TO_JSON(FormulaEnhancement, formulaEnhancement_);
      DARABONBA_PTR_TO_JSON(LLMParam, LLMParam_);
      DARABONBA_PTR_TO_JSON(LlmEnhancement, llmEnhancement_);
      DARABONBA_PTR_TO_JSON(MultimediaParameters, multimediaParameters_);
      DARABONBA_PTR_TO_JSON(NeedHeaderFooter, needHeaderFooter_);
      DARABONBA_PTR_TO_JSON(Option, option_);
      DARABONBA_PTR_TO_JSON(OssBucket, ossBucket_);
      DARABONBA_PTR_TO_JSON(OssEndpoint, ossEndpoint_);
      DARABONBA_PTR_TO_JSON(OutputFormat, outputFormat_);
      DARABONBA_PTR_TO_JSON(OutputHtmlTable, outputHtmlTable_);
      DARABONBA_PTR_TO_JSON(PageIndex, pageIndex_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitDocParserJobAdvanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomOssConfig, customOssConfig_);
      DARABONBA_PTR_FROM_JSON(EnableEventCallback, enableEventCallback_);
      DARABONBA_PTR_FROM_JSON(EnhancementMode, enhancementMode_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(FileNameExtension, fileNameExtension_);
      // fileUrlObject_ is stream
      DARABONBA_PTR_FROM_JSON(FormulaEnhancement, formulaEnhancement_);
      DARABONBA_PTR_FROM_JSON(LLMParam, LLMParam_);
      DARABONBA_PTR_FROM_JSON(LlmEnhancement, llmEnhancement_);
      DARABONBA_PTR_FROM_JSON(MultimediaParameters, multimediaParameters_);
      DARABONBA_PTR_FROM_JSON(NeedHeaderFooter, needHeaderFooter_);
      DARABONBA_PTR_FROM_JSON(Option, option_);
      DARABONBA_PTR_FROM_JSON(OssBucket, ossBucket_);
      DARABONBA_PTR_FROM_JSON(OssEndpoint, ossEndpoint_);
      DARABONBA_PTR_FROM_JSON(OutputFormat, outputFormat_);
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
    class MultimediaParameters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MultimediaParameters& obj) { 
        DARABONBA_PTR_TO_JSON(EnableSynopsisParse, enableSynopsisParse_);
        DARABONBA_PTR_TO_JSON(VlParsePrompt, vlParsePrompt_);
      };
      friend void from_json(const Darabonba::Json& j, MultimediaParameters& obj) { 
        DARABONBA_PTR_FROM_JSON(EnableSynopsisParse, enableSynopsisParse_);
        DARABONBA_PTR_FROM_JSON(VlParsePrompt, vlParsePrompt_);
      };
      MultimediaParameters() = default ;
      MultimediaParameters(const MultimediaParameters &) = default ;
      MultimediaParameters(MultimediaParameters &&) = default ;
      MultimediaParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MultimediaParameters() = default ;
      MultimediaParameters& operator=(const MultimediaParameters &) = default ;
      MultimediaParameters& operator=(MultimediaParameters &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->enableSynopsisParse_ == nullptr
        && this->vlParsePrompt_ == nullptr; };
      // enableSynopsisParse Field Functions 
      bool hasEnableSynopsisParse() const { return this->enableSynopsisParse_ != nullptr;};
      void deleteEnableSynopsisParse() { this->enableSynopsisParse_ = nullptr;};
      inline bool getEnableSynopsisParse() const { DARABONBA_PTR_GET_DEFAULT(enableSynopsisParse_, false) };
      inline MultimediaParameters& setEnableSynopsisParse(bool enableSynopsisParse) { DARABONBA_PTR_SET_VALUE(enableSynopsisParse_, enableSynopsisParse) };


      // vlParsePrompt Field Functions 
      bool hasVlParsePrompt() const { return this->vlParsePrompt_ != nullptr;};
      void deleteVlParsePrompt() { this->vlParsePrompt_ = nullptr;};
      inline string getVlParsePrompt() const { DARABONBA_PTR_GET_DEFAULT(vlParsePrompt_, "") };
      inline MultimediaParameters& setVlParsePrompt(string vlParsePrompt) { DARABONBA_PTR_SET_VALUE(vlParsePrompt_, vlParsePrompt) };


    protected:
      shared_ptr<bool> enableSynopsisParse_ {};
      shared_ptr<string> vlParsePrompt_ {};
    };

    class LLMParam : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LLMParam& obj) { 
        DARABONBA_PTR_TO_JSON(Model, model_);
        DARABONBA_PTR_TO_JSON(Prompt, prompt_);
      };
      friend void from_json(const Darabonba::Json& j, LLMParam& obj) { 
        DARABONBA_PTR_FROM_JSON(Model, model_);
        DARABONBA_PTR_FROM_JSON(Prompt, prompt_);
      };
      LLMParam() = default ;
      LLMParam(const LLMParam &) = default ;
      LLMParam(LLMParam &&) = default ;
      LLMParam(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LLMParam() = default ;
      LLMParam& operator=(const LLMParam &) = default ;
      LLMParam& operator=(LLMParam &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->model_ == nullptr
        && this->prompt_ == nullptr; };
      // model Field Functions 
      bool hasModel() const { return this->model_ != nullptr;};
      void deleteModel() { this->model_ = nullptr;};
      inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
      inline LLMParam& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


      // prompt Field Functions 
      bool hasPrompt() const { return this->prompt_ != nullptr;};
      void deletePrompt() { this->prompt_ = nullptr;};
      inline string getPrompt() const { DARABONBA_PTR_GET_DEFAULT(prompt_, "") };
      inline LLMParam& setPrompt(string prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };


    protected:
      shared_ptr<string> model_ {};
      shared_ptr<string> prompt_ {};
    };

    class CustomOssConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CustomOssConfig& obj) { 
        DARABONBA_PTR_TO_JSON(AccessId, accessId_);
        DARABONBA_PTR_TO_JSON(AccessKeySecret, accessKeySecret_);
        DARABONBA_PTR_TO_JSON(StsToken, stsToken_);
      };
      friend void from_json(const Darabonba::Json& j, CustomOssConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(AccessId, accessId_);
        DARABONBA_PTR_FROM_JSON(AccessKeySecret, accessKeySecret_);
        DARABONBA_PTR_FROM_JSON(StsToken, stsToken_);
      };
      CustomOssConfig() = default ;
      CustomOssConfig(const CustomOssConfig &) = default ;
      CustomOssConfig(CustomOssConfig &&) = default ;
      CustomOssConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CustomOssConfig() = default ;
      CustomOssConfig& operator=(const CustomOssConfig &) = default ;
      CustomOssConfig& operator=(CustomOssConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accessId_ == nullptr
        && this->accessKeySecret_ == nullptr && this->stsToken_ == nullptr; };
      // accessId Field Functions 
      bool hasAccessId() const { return this->accessId_ != nullptr;};
      void deleteAccessId() { this->accessId_ = nullptr;};
      inline string getAccessId() const { DARABONBA_PTR_GET_DEFAULT(accessId_, "") };
      inline CustomOssConfig& setAccessId(string accessId) { DARABONBA_PTR_SET_VALUE(accessId_, accessId) };


      // accessKeySecret Field Functions 
      bool hasAccessKeySecret() const { return this->accessKeySecret_ != nullptr;};
      void deleteAccessKeySecret() { this->accessKeySecret_ = nullptr;};
      inline string getAccessKeySecret() const { DARABONBA_PTR_GET_DEFAULT(accessKeySecret_, "") };
      inline CustomOssConfig& setAccessKeySecret(string accessKeySecret) { DARABONBA_PTR_SET_VALUE(accessKeySecret_, accessKeySecret) };


      // stsToken Field Functions 
      bool hasStsToken() const { return this->stsToken_ != nullptr;};
      void deleteStsToken() { this->stsToken_ = nullptr;};
      inline string getStsToken() const { DARABONBA_PTR_GET_DEFAULT(stsToken_, "") };
      inline CustomOssConfig& setStsToken(string stsToken) { DARABONBA_PTR_SET_VALUE(stsToken_, stsToken) };


    protected:
      shared_ptr<string> accessId_ {};
      shared_ptr<string> accessKeySecret_ {};
      shared_ptr<string> stsToken_ {};
    };

    virtual bool empty() const override { return this->customOssConfig_ == nullptr
        && this->enableEventCallback_ == nullptr && this->enhancementMode_ == nullptr && this->fileName_ == nullptr && this->fileNameExtension_ == nullptr && this->fileUrlObject_ == nullptr
        && this->formulaEnhancement_ == nullptr && this->LLMParam_ == nullptr && this->llmEnhancement_ == nullptr && this->multimediaParameters_ == nullptr && this->needHeaderFooter_ == nullptr
        && this->option_ == nullptr && this->ossBucket_ == nullptr && this->ossEndpoint_ == nullptr && this->outputFormat_ == nullptr && this->outputHtmlTable_ == nullptr
        && this->pageIndex_ == nullptr; };
    // customOssConfig Field Functions 
    bool hasCustomOssConfig() const { return this->customOssConfig_ != nullptr;};
    void deleteCustomOssConfig() { this->customOssConfig_ = nullptr;};
    inline const SubmitDocParserJobAdvanceRequest::CustomOssConfig & getCustomOssConfig() const { DARABONBA_PTR_GET_CONST(customOssConfig_, SubmitDocParserJobAdvanceRequest::CustomOssConfig) };
    inline SubmitDocParserJobAdvanceRequest::CustomOssConfig getCustomOssConfig() { DARABONBA_PTR_GET(customOssConfig_, SubmitDocParserJobAdvanceRequest::CustomOssConfig) };
    inline SubmitDocParserJobAdvanceRequest& setCustomOssConfig(const SubmitDocParserJobAdvanceRequest::CustomOssConfig & customOssConfig) { DARABONBA_PTR_SET_VALUE(customOssConfig_, customOssConfig) };
    inline SubmitDocParserJobAdvanceRequest& setCustomOssConfig(SubmitDocParserJobAdvanceRequest::CustomOssConfig && customOssConfig) { DARABONBA_PTR_SET_RVALUE(customOssConfig_, customOssConfig) };


    // enableEventCallback Field Functions 
    bool hasEnableEventCallback() const { return this->enableEventCallback_ != nullptr;};
    void deleteEnableEventCallback() { this->enableEventCallback_ = nullptr;};
    inline bool getEnableEventCallback() const { DARABONBA_PTR_GET_DEFAULT(enableEventCallback_, false) };
    inline SubmitDocParserJobAdvanceRequest& setEnableEventCallback(bool enableEventCallback) { DARABONBA_PTR_SET_VALUE(enableEventCallback_, enableEventCallback) };


    // enhancementMode Field Functions 
    bool hasEnhancementMode() const { return this->enhancementMode_ != nullptr;};
    void deleteEnhancementMode() { this->enhancementMode_ = nullptr;};
    inline string getEnhancementMode() const { DARABONBA_PTR_GET_DEFAULT(enhancementMode_, "") };
    inline SubmitDocParserJobAdvanceRequest& setEnhancementMode(string enhancementMode) { DARABONBA_PTR_SET_VALUE(enhancementMode_, enhancementMode) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline SubmitDocParserJobAdvanceRequest& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // fileNameExtension Field Functions 
    bool hasFileNameExtension() const { return this->fileNameExtension_ != nullptr;};
    void deleteFileNameExtension() { this->fileNameExtension_ = nullptr;};
    inline string getFileNameExtension() const { DARABONBA_PTR_GET_DEFAULT(fileNameExtension_, "") };
    inline SubmitDocParserJobAdvanceRequest& setFileNameExtension(string fileNameExtension) { DARABONBA_PTR_SET_VALUE(fileNameExtension_, fileNameExtension) };


    // fileUrlObject Field Functions 
    bool hasFileUrlObject() const { return this->fileUrlObject_ != nullptr;};
    void deleteFileUrlObject() { this->fileUrlObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> getFileUrlObject() const { DARABONBA_GET(fileUrlObject_) };
    inline SubmitDocParserJobAdvanceRequest& setFileUrlObject(shared_ptr<Darabonba::IStream> fileUrlObject) { DARABONBA_SET_VALUE(fileUrlObject_, fileUrlObject) };


    // formulaEnhancement Field Functions 
    bool hasFormulaEnhancement() const { return this->formulaEnhancement_ != nullptr;};
    void deleteFormulaEnhancement() { this->formulaEnhancement_ = nullptr;};
    inline bool getFormulaEnhancement() const { DARABONBA_PTR_GET_DEFAULT(formulaEnhancement_, false) };
    inline SubmitDocParserJobAdvanceRequest& setFormulaEnhancement(bool formulaEnhancement) { DARABONBA_PTR_SET_VALUE(formulaEnhancement_, formulaEnhancement) };


    // LLMParam Field Functions 
    bool hasLLMParam() const { return this->LLMParam_ != nullptr;};
    void deleteLLMParam() { this->LLMParam_ = nullptr;};
    inline const SubmitDocParserJobAdvanceRequest::LLMParam & getLLMParam() const { DARABONBA_PTR_GET_CONST(LLMParam_, SubmitDocParserJobAdvanceRequest::LLMParam) };
    inline SubmitDocParserJobAdvanceRequest::LLMParam getLLMParam() { DARABONBA_PTR_GET(LLMParam_, SubmitDocParserJobAdvanceRequest::LLMParam) };
    inline SubmitDocParserJobAdvanceRequest& setLLMParam(const SubmitDocParserJobAdvanceRequest::LLMParam & lLMParam) { DARABONBA_PTR_SET_VALUE(LLMParam_, lLMParam) };
    inline SubmitDocParserJobAdvanceRequest& setLLMParam(SubmitDocParserJobAdvanceRequest::LLMParam && lLMParam) { DARABONBA_PTR_SET_RVALUE(LLMParam_, lLMParam) };


    // llmEnhancement Field Functions 
    bool hasLlmEnhancement() const { return this->llmEnhancement_ != nullptr;};
    void deleteLlmEnhancement() { this->llmEnhancement_ = nullptr;};
    inline bool getLlmEnhancement() const { DARABONBA_PTR_GET_DEFAULT(llmEnhancement_, false) };
    inline SubmitDocParserJobAdvanceRequest& setLlmEnhancement(bool llmEnhancement) { DARABONBA_PTR_SET_VALUE(llmEnhancement_, llmEnhancement) };


    // multimediaParameters Field Functions 
    bool hasMultimediaParameters() const { return this->multimediaParameters_ != nullptr;};
    void deleteMultimediaParameters() { this->multimediaParameters_ = nullptr;};
    inline const SubmitDocParserJobAdvanceRequest::MultimediaParameters & getMultimediaParameters() const { DARABONBA_PTR_GET_CONST(multimediaParameters_, SubmitDocParserJobAdvanceRequest::MultimediaParameters) };
    inline SubmitDocParserJobAdvanceRequest::MultimediaParameters getMultimediaParameters() { DARABONBA_PTR_GET(multimediaParameters_, SubmitDocParserJobAdvanceRequest::MultimediaParameters) };
    inline SubmitDocParserJobAdvanceRequest& setMultimediaParameters(const SubmitDocParserJobAdvanceRequest::MultimediaParameters & multimediaParameters) { DARABONBA_PTR_SET_VALUE(multimediaParameters_, multimediaParameters) };
    inline SubmitDocParserJobAdvanceRequest& setMultimediaParameters(SubmitDocParserJobAdvanceRequest::MultimediaParameters && multimediaParameters) { DARABONBA_PTR_SET_RVALUE(multimediaParameters_, multimediaParameters) };


    // needHeaderFooter Field Functions 
    bool hasNeedHeaderFooter() const { return this->needHeaderFooter_ != nullptr;};
    void deleteNeedHeaderFooter() { this->needHeaderFooter_ = nullptr;};
    inline bool getNeedHeaderFooter() const { DARABONBA_PTR_GET_DEFAULT(needHeaderFooter_, false) };
    inline SubmitDocParserJobAdvanceRequest& setNeedHeaderFooter(bool needHeaderFooter) { DARABONBA_PTR_SET_VALUE(needHeaderFooter_, needHeaderFooter) };


    // option Field Functions 
    bool hasOption() const { return this->option_ != nullptr;};
    void deleteOption() { this->option_ = nullptr;};
    inline string getOption() const { DARABONBA_PTR_GET_DEFAULT(option_, "") };
    inline SubmitDocParserJobAdvanceRequest& setOption(string option) { DARABONBA_PTR_SET_VALUE(option_, option) };


    // ossBucket Field Functions 
    bool hasOssBucket() const { return this->ossBucket_ != nullptr;};
    void deleteOssBucket() { this->ossBucket_ = nullptr;};
    inline string getOssBucket() const { DARABONBA_PTR_GET_DEFAULT(ossBucket_, "") };
    inline SubmitDocParserJobAdvanceRequest& setOssBucket(string ossBucket) { DARABONBA_PTR_SET_VALUE(ossBucket_, ossBucket) };


    // ossEndpoint Field Functions 
    bool hasOssEndpoint() const { return this->ossEndpoint_ != nullptr;};
    void deleteOssEndpoint() { this->ossEndpoint_ = nullptr;};
    inline string getOssEndpoint() const { DARABONBA_PTR_GET_DEFAULT(ossEndpoint_, "") };
    inline SubmitDocParserJobAdvanceRequest& setOssEndpoint(string ossEndpoint) { DARABONBA_PTR_SET_VALUE(ossEndpoint_, ossEndpoint) };


    // outputFormat Field Functions 
    bool hasOutputFormat() const { return this->outputFormat_ != nullptr;};
    void deleteOutputFormat() { this->outputFormat_ = nullptr;};
    inline const vector<string> & getOutputFormat() const { DARABONBA_PTR_GET_CONST(outputFormat_, vector<string>) };
    inline vector<string> getOutputFormat() { DARABONBA_PTR_GET(outputFormat_, vector<string>) };
    inline SubmitDocParserJobAdvanceRequest& setOutputFormat(const vector<string> & outputFormat) { DARABONBA_PTR_SET_VALUE(outputFormat_, outputFormat) };
    inline SubmitDocParserJobAdvanceRequest& setOutputFormat(vector<string> && outputFormat) { DARABONBA_PTR_SET_RVALUE(outputFormat_, outputFormat) };


    // outputHtmlTable Field Functions 
    bool hasOutputHtmlTable() const { return this->outputHtmlTable_ != nullptr;};
    void deleteOutputHtmlTable() { this->outputHtmlTable_ = nullptr;};
    inline bool getOutputHtmlTable() const { DARABONBA_PTR_GET_DEFAULT(outputHtmlTable_, false) };
    inline SubmitDocParserJobAdvanceRequest& setOutputHtmlTable(bool outputHtmlTable) { DARABONBA_PTR_SET_VALUE(outputHtmlTable_, outputHtmlTable) };


    // pageIndex Field Functions 
    bool hasPageIndex() const { return this->pageIndex_ != nullptr;};
    void deletePageIndex() { this->pageIndex_ = nullptr;};
    inline string getPageIndex() const { DARABONBA_PTR_GET_DEFAULT(pageIndex_, "") };
    inline SubmitDocParserJobAdvanceRequest& setPageIndex(string pageIndex) { DARABONBA_PTR_SET_VALUE(pageIndex_, pageIndex) };


  protected:
    shared_ptr<SubmitDocParserJobAdvanceRequest::CustomOssConfig> customOssConfig_ {};
    shared_ptr<bool> enableEventCallback_ {};
    shared_ptr<string> enhancementMode_ {};
    shared_ptr<string> fileName_ {};
    shared_ptr<string> fileNameExtension_ {};
    shared_ptr<Darabonba::IStream> fileUrlObject_ {};
    shared_ptr<bool> formulaEnhancement_ {};
    shared_ptr<SubmitDocParserJobAdvanceRequest::LLMParam> LLMParam_ {};
    shared_ptr<bool> llmEnhancement_ {};
    shared_ptr<SubmitDocParserJobAdvanceRequest::MultimediaParameters> multimediaParameters_ {};
    shared_ptr<bool> needHeaderFooter_ {};
    shared_ptr<string> option_ {};
    shared_ptr<string> ossBucket_ {};
    shared_ptr<string> ossEndpoint_ {};
    shared_ptr<vector<string>> outputFormat_ {};
    shared_ptr<bool> outputHtmlTable_ {};
    shared_ptr<string> pageIndex_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DocmindApi20220711
#endif
