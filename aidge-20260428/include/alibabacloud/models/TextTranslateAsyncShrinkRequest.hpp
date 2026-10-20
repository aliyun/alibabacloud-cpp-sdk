// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TEXTTRANSLATEASYNCSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TEXTTRANSLATEASYNCSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aidge20260428
{
namespace Models
{
  class TextTranslateAsyncShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TextTranslateAsyncShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(BizName, bizName_);
      DARABONBA_PTR_TO_JSON(FormatType, formatType_);
      DARABONBA_PTR_TO_JSON(Glossary, glossary_);
      DARABONBA_PTR_TO_JSON(SourceLanguage, sourceLanguage_);
      DARABONBA_PTR_TO_JSON(SourceTextList, sourceTextListShrink_);
      DARABONBA_PTR_TO_JSON(TargetLanguage, targetLanguage_);
      DARABONBA_PTR_TO_JSON(TranslateScene, translateScene_);
    };
    friend void from_json(const Darabonba::Json& j, TextTranslateAsyncShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(BizName, bizName_);
      DARABONBA_PTR_FROM_JSON(FormatType, formatType_);
      DARABONBA_PTR_FROM_JSON(Glossary, glossary_);
      DARABONBA_PTR_FROM_JSON(SourceLanguage, sourceLanguage_);
      DARABONBA_PTR_FROM_JSON(SourceTextList, sourceTextListShrink_);
      DARABONBA_PTR_FROM_JSON(TargetLanguage, targetLanguage_);
      DARABONBA_PTR_FROM_JSON(TranslateScene, translateScene_);
    };
    TextTranslateAsyncShrinkRequest() = default ;
    TextTranslateAsyncShrinkRequest(const TextTranslateAsyncShrinkRequest &) = default ;
    TextTranslateAsyncShrinkRequest(TextTranslateAsyncShrinkRequest &&) = default ;
    TextTranslateAsyncShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TextTranslateAsyncShrinkRequest() = default ;
    TextTranslateAsyncShrinkRequest& operator=(const TextTranslateAsyncShrinkRequest &) = default ;
    TextTranslateAsyncShrinkRequest& operator=(TextTranslateAsyncShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizId_ == nullptr
        && this->bizName_ == nullptr && this->formatType_ == nullptr && this->glossary_ == nullptr && this->sourceLanguage_ == nullptr && this->sourceTextListShrink_ == nullptr
        && this->targetLanguage_ == nullptr && this->translateScene_ == nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline TextTranslateAsyncShrinkRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // bizName Field Functions 
    bool hasBizName() const { return this->bizName_ != nullptr;};
    void deleteBizName() { this->bizName_ = nullptr;};
    inline string getBizName() const { DARABONBA_PTR_GET_DEFAULT(bizName_, "") };
    inline TextTranslateAsyncShrinkRequest& setBizName(string bizName) { DARABONBA_PTR_SET_VALUE(bizName_, bizName) };


    // formatType Field Functions 
    bool hasFormatType() const { return this->formatType_ != nullptr;};
    void deleteFormatType() { this->formatType_ = nullptr;};
    inline string getFormatType() const { DARABONBA_PTR_GET_DEFAULT(formatType_, "") };
    inline TextTranslateAsyncShrinkRequest& setFormatType(string formatType) { DARABONBA_PTR_SET_VALUE(formatType_, formatType) };


    // glossary Field Functions 
    bool hasGlossary() const { return this->glossary_ != nullptr;};
    void deleteGlossary() { this->glossary_ = nullptr;};
    inline string getGlossary() const { DARABONBA_PTR_GET_DEFAULT(glossary_, "") };
    inline TextTranslateAsyncShrinkRequest& setGlossary(string glossary) { DARABONBA_PTR_SET_VALUE(glossary_, glossary) };


    // sourceLanguage Field Functions 
    bool hasSourceLanguage() const { return this->sourceLanguage_ != nullptr;};
    void deleteSourceLanguage() { this->sourceLanguage_ = nullptr;};
    inline string getSourceLanguage() const { DARABONBA_PTR_GET_DEFAULT(sourceLanguage_, "") };
    inline TextTranslateAsyncShrinkRequest& setSourceLanguage(string sourceLanguage) { DARABONBA_PTR_SET_VALUE(sourceLanguage_, sourceLanguage) };


    // sourceTextListShrink Field Functions 
    bool hasSourceTextListShrink() const { return this->sourceTextListShrink_ != nullptr;};
    void deleteSourceTextListShrink() { this->sourceTextListShrink_ = nullptr;};
    inline string getSourceTextListShrink() const { DARABONBA_PTR_GET_DEFAULT(sourceTextListShrink_, "") };
    inline TextTranslateAsyncShrinkRequest& setSourceTextListShrink(string sourceTextListShrink) { DARABONBA_PTR_SET_VALUE(sourceTextListShrink_, sourceTextListShrink) };


    // targetLanguage Field Functions 
    bool hasTargetLanguage() const { return this->targetLanguage_ != nullptr;};
    void deleteTargetLanguage() { this->targetLanguage_ = nullptr;};
    inline string getTargetLanguage() const { DARABONBA_PTR_GET_DEFAULT(targetLanguage_, "") };
    inline TextTranslateAsyncShrinkRequest& setTargetLanguage(string targetLanguage) { DARABONBA_PTR_SET_VALUE(targetLanguage_, targetLanguage) };


    // translateScene Field Functions 
    bool hasTranslateScene() const { return this->translateScene_ != nullptr;};
    void deleteTranslateScene() { this->translateScene_ = nullptr;};
    inline string getTranslateScene() const { DARABONBA_PTR_GET_DEFAULT(translateScene_, "") };
    inline TextTranslateAsyncShrinkRequest& setTranslateScene(string translateScene) { DARABONBA_PTR_SET_VALUE(translateScene_, translateScene) };


  protected:
    // The business ID of the caller. The maximum length is 128 characters. This ID is passed through in the translation results.
    shared_ptr<string> bizId_ {};
    // The business name of the caller. This field represents your identity and facilitates subsequent communication. If you are an internal Alibaba organization, specify this parameter based on the actual scenario, such as BU name-product or BU name-chat. If you are an external partner, specify the full name of your company. The company name must be the same as the one used when registering your Alibaba Cloud account.
    shared_ptr<string> bizName_ {};
    // The format type of the source text. Valid values: text and html.
    shared_ptr<string> formatType_ {};
    // The ID of the intervention glossary. You must create the glossary in the console and provide its ID in the request parameters. If the intervention glossary ID is empty, the translation results are not modified.
    shared_ptr<string> glossary_ {};
    // The source language code. For more information, see the supported language list below. If this parameter is not specified, the language is automatically detected.
    shared_ptr<string> sourceLanguage_ {};
    // The list of texts to be translated.
    // 
    // This parameter is required.
    shared_ptr<string> sourceTextListShrink_ {};
    // The target language code. For more information, see the supported language pair list below.
    // 
    // This parameter is required.
    shared_ptr<string> targetLanguage_ {};
    // The business scenario identifier. You can specify only one of the following values. After you specify a value, the translation engine uses the terminology library and style policy of the corresponding industry to output industry-specific translations. If this parameter is not specified or an invalid value is specified, the general translation policy is used. Valid values:
    // - e-commerce-title: Translates cross-border e-commerce product titles.
    // - e-commerce-description: Translates cross-border e-commerce product descriptions.
    // - e-commerce-chat: Translates cross-border e-commerce conversations.
    // - e-commerce-cpv: Translates cross-border e-commerce product CPV attributes.
    // - novel: Translates novels.
    // - game: Translates games.
    shared_ptr<string> translateScene_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
#endif
