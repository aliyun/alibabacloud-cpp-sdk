// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TEXTTRANSLATESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TEXTTRANSLATESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aidge20260428
{
namespace Models
{
  class TextTranslateShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TextTranslateShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizName, bizName_);
      DARABONBA_PTR_TO_JSON(FormatType, formatType_);
      DARABONBA_PTR_TO_JSON(Glossary, glossary_);
      DARABONBA_PTR_TO_JSON(SourceLanguage, sourceLanguage_);
      DARABONBA_PTR_TO_JSON(SourceTextList, sourceTextListShrink_);
      DARABONBA_PTR_TO_JSON(TargetLanguage, targetLanguage_);
      DARABONBA_PTR_TO_JSON(TranslateScene, translateScene_);
    };
    friend void from_json(const Darabonba::Json& j, TextTranslateShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizName, bizName_);
      DARABONBA_PTR_FROM_JSON(FormatType, formatType_);
      DARABONBA_PTR_FROM_JSON(Glossary, glossary_);
      DARABONBA_PTR_FROM_JSON(SourceLanguage, sourceLanguage_);
      DARABONBA_PTR_FROM_JSON(SourceTextList, sourceTextListShrink_);
      DARABONBA_PTR_FROM_JSON(TargetLanguage, targetLanguage_);
      DARABONBA_PTR_FROM_JSON(TranslateScene, translateScene_);
    };
    TextTranslateShrinkRequest() = default ;
    TextTranslateShrinkRequest(const TextTranslateShrinkRequest &) = default ;
    TextTranslateShrinkRequest(TextTranslateShrinkRequest &&) = default ;
    TextTranslateShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TextTranslateShrinkRequest() = default ;
    TextTranslateShrinkRequest& operator=(const TextTranslateShrinkRequest &) = default ;
    TextTranslateShrinkRequest& operator=(TextTranslateShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizName_ == nullptr
        && this->formatType_ == nullptr && this->glossary_ == nullptr && this->sourceLanguage_ == nullptr && this->sourceTextListShrink_ == nullptr && this->targetLanguage_ == nullptr
        && this->translateScene_ == nullptr; };
    // bizName Field Functions 
    bool hasBizName() const { return this->bizName_ != nullptr;};
    void deleteBizName() { this->bizName_ = nullptr;};
    inline string getBizName() const { DARABONBA_PTR_GET_DEFAULT(bizName_, "") };
    inline TextTranslateShrinkRequest& setBizName(string bizName) { DARABONBA_PTR_SET_VALUE(bizName_, bizName) };


    // formatType Field Functions 
    bool hasFormatType() const { return this->formatType_ != nullptr;};
    void deleteFormatType() { this->formatType_ = nullptr;};
    inline string getFormatType() const { DARABONBA_PTR_GET_DEFAULT(formatType_, "") };
    inline TextTranslateShrinkRequest& setFormatType(string formatType) { DARABONBA_PTR_SET_VALUE(formatType_, formatType) };


    // glossary Field Functions 
    bool hasGlossary() const { return this->glossary_ != nullptr;};
    void deleteGlossary() { this->glossary_ = nullptr;};
    inline string getGlossary() const { DARABONBA_PTR_GET_DEFAULT(glossary_, "") };
    inline TextTranslateShrinkRequest& setGlossary(string glossary) { DARABONBA_PTR_SET_VALUE(glossary_, glossary) };


    // sourceLanguage Field Functions 
    bool hasSourceLanguage() const { return this->sourceLanguage_ != nullptr;};
    void deleteSourceLanguage() { this->sourceLanguage_ = nullptr;};
    inline string getSourceLanguage() const { DARABONBA_PTR_GET_DEFAULT(sourceLanguage_, "") };
    inline TextTranslateShrinkRequest& setSourceLanguage(string sourceLanguage) { DARABONBA_PTR_SET_VALUE(sourceLanguage_, sourceLanguage) };


    // sourceTextListShrink Field Functions 
    bool hasSourceTextListShrink() const { return this->sourceTextListShrink_ != nullptr;};
    void deleteSourceTextListShrink() { this->sourceTextListShrink_ = nullptr;};
    inline string getSourceTextListShrink() const { DARABONBA_PTR_GET_DEFAULT(sourceTextListShrink_, "") };
    inline TextTranslateShrinkRequest& setSourceTextListShrink(string sourceTextListShrink) { DARABONBA_PTR_SET_VALUE(sourceTextListShrink_, sourceTextListShrink) };


    // targetLanguage Field Functions 
    bool hasTargetLanguage() const { return this->targetLanguage_ != nullptr;};
    void deleteTargetLanguage() { this->targetLanguage_ = nullptr;};
    inline string getTargetLanguage() const { DARABONBA_PTR_GET_DEFAULT(targetLanguage_, "") };
    inline TextTranslateShrinkRequest& setTargetLanguage(string targetLanguage) { DARABONBA_PTR_SET_VALUE(targetLanguage_, targetLanguage) };


    // translateScene Field Functions 
    bool hasTranslateScene() const { return this->translateScene_ != nullptr;};
    void deleteTranslateScene() { this->translateScene_ = nullptr;};
    inline string getTranslateScene() const { DARABONBA_PTR_GET_DEFAULT(translateScene_, "") };
    inline TextTranslateShrinkRequest& setTranslateScene(string translateScene) { DARABONBA_PTR_SET_VALUE(translateScene_, translateScene) };


  protected:
    shared_ptr<string> bizName_ {};
    // The format type of the source text. This parameter is optional. Valid values: text (plain text format) and html (web page format that preserves HTML tags).
    shared_ptr<string> formatType_ {};
    // The intervention glossary ID. This parameter is optional. The glossary must be created separately in the console and its ID provided here. If the glossary ID is empty, the translation result is not modified.
    shared_ptr<string> glossary_ {};
    // The source language code. This parameter is optional. If not specified, the language is automatically detected. You can pass auto for language detection.
    shared_ptr<string> sourceLanguage_ {};
    // The list of texts to translate. This parameter is required. The total character length cannot exceed 50,000, and the list length cannot exceed 50.
    // 
    // This parameter is required.
    shared_ptr<string> sourceTextListShrink_ {};
    // The target language code. This parameter is required. More than 100 language directions are supported. For details, refer to the supported language directions list.
    // 
    // This parameter is required.
    shared_ptr<string> targetLanguage_ {};
    shared_ptr<string> translateScene_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
#endif
