// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TEXTTRANSLATEASYNCREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TEXTTRANSLATEASYNCREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aidge20260428
{
namespace Models
{
  class TextTranslateAsyncRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TextTranslateAsyncRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(BizName, bizName_);
      DARABONBA_PTR_TO_JSON(FormatType, formatType_);
      DARABONBA_PTR_TO_JSON(Glossary, glossary_);
      DARABONBA_PTR_TO_JSON(SourceLanguage, sourceLanguage_);
      DARABONBA_PTR_TO_JSON(SourceTextList, sourceTextList_);
      DARABONBA_PTR_TO_JSON(TargetLanguage, targetLanguage_);
      DARABONBA_PTR_TO_JSON(TranslateScene, translateScene_);
    };
    friend void from_json(const Darabonba::Json& j, TextTranslateAsyncRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(BizName, bizName_);
      DARABONBA_PTR_FROM_JSON(FormatType, formatType_);
      DARABONBA_PTR_FROM_JSON(Glossary, glossary_);
      DARABONBA_PTR_FROM_JSON(SourceLanguage, sourceLanguage_);
      DARABONBA_PTR_FROM_JSON(SourceTextList, sourceTextList_);
      DARABONBA_PTR_FROM_JSON(TargetLanguage, targetLanguage_);
      DARABONBA_PTR_FROM_JSON(TranslateScene, translateScene_);
    };
    TextTranslateAsyncRequest() = default ;
    TextTranslateAsyncRequest(const TextTranslateAsyncRequest &) = default ;
    TextTranslateAsyncRequest(TextTranslateAsyncRequest &&) = default ;
    TextTranslateAsyncRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TextTranslateAsyncRequest() = default ;
    TextTranslateAsyncRequest& operator=(const TextTranslateAsyncRequest &) = default ;
    TextTranslateAsyncRequest& operator=(TextTranslateAsyncRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizId_ == nullptr
        && this->bizName_ == nullptr && this->formatType_ == nullptr && this->glossary_ == nullptr && this->sourceLanguage_ == nullptr && this->sourceTextList_ == nullptr
        && this->targetLanguage_ == nullptr && this->translateScene_ == nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline TextTranslateAsyncRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // bizName Field Functions 
    bool hasBizName() const { return this->bizName_ != nullptr;};
    void deleteBizName() { this->bizName_ = nullptr;};
    inline string getBizName() const { DARABONBA_PTR_GET_DEFAULT(bizName_, "") };
    inline TextTranslateAsyncRequest& setBizName(string bizName) { DARABONBA_PTR_SET_VALUE(bizName_, bizName) };


    // formatType Field Functions 
    bool hasFormatType() const { return this->formatType_ != nullptr;};
    void deleteFormatType() { this->formatType_ = nullptr;};
    inline string getFormatType() const { DARABONBA_PTR_GET_DEFAULT(formatType_, "") };
    inline TextTranslateAsyncRequest& setFormatType(string formatType) { DARABONBA_PTR_SET_VALUE(formatType_, formatType) };


    // glossary Field Functions 
    bool hasGlossary() const { return this->glossary_ != nullptr;};
    void deleteGlossary() { this->glossary_ = nullptr;};
    inline string getGlossary() const { DARABONBA_PTR_GET_DEFAULT(glossary_, "") };
    inline TextTranslateAsyncRequest& setGlossary(string glossary) { DARABONBA_PTR_SET_VALUE(glossary_, glossary) };


    // sourceLanguage Field Functions 
    bool hasSourceLanguage() const { return this->sourceLanguage_ != nullptr;};
    void deleteSourceLanguage() { this->sourceLanguage_ = nullptr;};
    inline string getSourceLanguage() const { DARABONBA_PTR_GET_DEFAULT(sourceLanguage_, "") };
    inline TextTranslateAsyncRequest& setSourceLanguage(string sourceLanguage) { DARABONBA_PTR_SET_VALUE(sourceLanguage_, sourceLanguage) };


    // sourceTextList Field Functions 
    bool hasSourceTextList() const { return this->sourceTextList_ != nullptr;};
    void deleteSourceTextList() { this->sourceTextList_ = nullptr;};
    inline const vector<string> & getSourceTextList() const { DARABONBA_PTR_GET_CONST(sourceTextList_, vector<string>) };
    inline vector<string> getSourceTextList() { DARABONBA_PTR_GET(sourceTextList_, vector<string>) };
    inline TextTranslateAsyncRequest& setSourceTextList(const vector<string> & sourceTextList) { DARABONBA_PTR_SET_VALUE(sourceTextList_, sourceTextList) };
    inline TextTranslateAsyncRequest& setSourceTextList(vector<string> && sourceTextList) { DARABONBA_PTR_SET_RVALUE(sourceTextList_, sourceTextList) };


    // targetLanguage Field Functions 
    bool hasTargetLanguage() const { return this->targetLanguage_ != nullptr;};
    void deleteTargetLanguage() { this->targetLanguage_ = nullptr;};
    inline string getTargetLanguage() const { DARABONBA_PTR_GET_DEFAULT(targetLanguage_, "") };
    inline TextTranslateAsyncRequest& setTargetLanguage(string targetLanguage) { DARABONBA_PTR_SET_VALUE(targetLanguage_, targetLanguage) };


    // translateScene Field Functions 
    bool hasTranslateScene() const { return this->translateScene_ != nullptr;};
    void deleteTranslateScene() { this->translateScene_ = nullptr;};
    inline string getTranslateScene() const { DARABONBA_PTR_GET_DEFAULT(translateScene_, "") };
    inline TextTranslateAsyncRequest& setTranslateScene(string translateScene) { DARABONBA_PTR_SET_VALUE(translateScene_, translateScene) };


  protected:
    // The caller business ID. The ID can be up to 128 characters in length and is passed through in the translation results. This parameter is used only for asynchronous text translation and is returned as is in the task results.
    shared_ptr<string> bizId_ {};
    // This field represents your identity and facilitates communication for various issues. If you are an internal Alibaba organization, we recommend that you specify this field based on the actual scenario, such as BU name-product or BU name-chat. If you are an external Alibaba partner, we recommend that you specify the full name of your company. The company name must be the same as the one you used when registering your Alibaba Cloud account.
    shared_ptr<string> bizName_ {};
    // The format type of the source text. Valid values: text and html.
    shared_ptr<string> formatType_ {};
    // The ID of the intervention glossary. You must create the glossary in the console and provide its ID in the input parameters. If the intervention glossary ID is empty, the translation results are not modified.
    shared_ptr<string> glossary_ {};
    // The source language code. For more information, see the supported language list below. If you do not specify this parameter, the source language is automatically detected.
    shared_ptr<string> sourceLanguage_ {};
    // The list of text to be translated.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> sourceTextList_ {};
    // The target language code. For more information, see the supported language pair list below.
    // 
    // This parameter is required.
    shared_ptr<string> targetLanguage_ {};
    // The business scenario identifier. You can specify only one of the following values. After you specify a value, the translation engine uses the terminology library and style policy of the corresponding industry to output industry-specific translations. If this field is not specified or is invalid, the general translation policy is used. Valid values:
    // - e-commerce-title: Cross-border e-commerce product title translation.
    // - e-commerce-description: Cross-border e-commerce product description translation.
    // - e-commerce-chat: Cross-border e-commerce conversation translation.
    // - e-commerce-cpv: Cross-border e-commerce product CPV attribute translation.
    // - novel: Novel translation.
    // - game: Game translation.
    shared_ptr<string> translateScene_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
#endif
