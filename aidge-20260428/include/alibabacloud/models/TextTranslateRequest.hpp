// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TEXTTRANSLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TEXTTRANSLATEREQUEST_HPP_
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
  class TextTranslateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TextTranslateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizName, bizName_);
      DARABONBA_PTR_TO_JSON(FormatType, formatType_);
      DARABONBA_PTR_TO_JSON(Glossary, glossary_);
      DARABONBA_PTR_TO_JSON(SourceLanguage, sourceLanguage_);
      DARABONBA_PTR_TO_JSON(SourceTextList, sourceTextList_);
      DARABONBA_PTR_TO_JSON(TargetLanguage, targetLanguage_);
      DARABONBA_PTR_TO_JSON(TranslateScene, translateScene_);
    };
    friend void from_json(const Darabonba::Json& j, TextTranslateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizName, bizName_);
      DARABONBA_PTR_FROM_JSON(FormatType, formatType_);
      DARABONBA_PTR_FROM_JSON(Glossary, glossary_);
      DARABONBA_PTR_FROM_JSON(SourceLanguage, sourceLanguage_);
      DARABONBA_PTR_FROM_JSON(SourceTextList, sourceTextList_);
      DARABONBA_PTR_FROM_JSON(TargetLanguage, targetLanguage_);
      DARABONBA_PTR_FROM_JSON(TranslateScene, translateScene_);
    };
    TextTranslateRequest() = default ;
    TextTranslateRequest(const TextTranslateRequest &) = default ;
    TextTranslateRequest(TextTranslateRequest &&) = default ;
    TextTranslateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TextTranslateRequest() = default ;
    TextTranslateRequest& operator=(const TextTranslateRequest &) = default ;
    TextTranslateRequest& operator=(TextTranslateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizName_ == nullptr
        && this->formatType_ == nullptr && this->glossary_ == nullptr && this->sourceLanguage_ == nullptr && this->sourceTextList_ == nullptr && this->targetLanguage_ == nullptr
        && this->translateScene_ == nullptr; };
    // bizName Field Functions 
    bool hasBizName() const { return this->bizName_ != nullptr;};
    void deleteBizName() { this->bizName_ = nullptr;};
    inline string getBizName() const { DARABONBA_PTR_GET_DEFAULT(bizName_, "") };
    inline TextTranslateRequest& setBizName(string bizName) { DARABONBA_PTR_SET_VALUE(bizName_, bizName) };


    // formatType Field Functions 
    bool hasFormatType() const { return this->formatType_ != nullptr;};
    void deleteFormatType() { this->formatType_ = nullptr;};
    inline string getFormatType() const { DARABONBA_PTR_GET_DEFAULT(formatType_, "") };
    inline TextTranslateRequest& setFormatType(string formatType) { DARABONBA_PTR_SET_VALUE(formatType_, formatType) };


    // glossary Field Functions 
    bool hasGlossary() const { return this->glossary_ != nullptr;};
    void deleteGlossary() { this->glossary_ = nullptr;};
    inline string getGlossary() const { DARABONBA_PTR_GET_DEFAULT(glossary_, "") };
    inline TextTranslateRequest& setGlossary(string glossary) { DARABONBA_PTR_SET_VALUE(glossary_, glossary) };


    // sourceLanguage Field Functions 
    bool hasSourceLanguage() const { return this->sourceLanguage_ != nullptr;};
    void deleteSourceLanguage() { this->sourceLanguage_ = nullptr;};
    inline string getSourceLanguage() const { DARABONBA_PTR_GET_DEFAULT(sourceLanguage_, "") };
    inline TextTranslateRequest& setSourceLanguage(string sourceLanguage) { DARABONBA_PTR_SET_VALUE(sourceLanguage_, sourceLanguage) };


    // sourceTextList Field Functions 
    bool hasSourceTextList() const { return this->sourceTextList_ != nullptr;};
    void deleteSourceTextList() { this->sourceTextList_ = nullptr;};
    inline const vector<string> & getSourceTextList() const { DARABONBA_PTR_GET_CONST(sourceTextList_, vector<string>) };
    inline vector<string> getSourceTextList() { DARABONBA_PTR_GET(sourceTextList_, vector<string>) };
    inline TextTranslateRequest& setSourceTextList(const vector<string> & sourceTextList) { DARABONBA_PTR_SET_VALUE(sourceTextList_, sourceTextList) };
    inline TextTranslateRequest& setSourceTextList(vector<string> && sourceTextList) { DARABONBA_PTR_SET_RVALUE(sourceTextList_, sourceTextList) };


    // targetLanguage Field Functions 
    bool hasTargetLanguage() const { return this->targetLanguage_ != nullptr;};
    void deleteTargetLanguage() { this->targetLanguage_ = nullptr;};
    inline string getTargetLanguage() const { DARABONBA_PTR_GET_DEFAULT(targetLanguage_, "") };
    inline TextTranslateRequest& setTargetLanguage(string targetLanguage) { DARABONBA_PTR_SET_VALUE(targetLanguage_, targetLanguage) };


    // translateScene Field Functions 
    bool hasTranslateScene() const { return this->translateScene_ != nullptr;};
    void deleteTranslateScene() { this->translateScene_ = nullptr;};
    inline string getTranslateScene() const { DARABONBA_PTR_GET_DEFAULT(translateScene_, "") };
    inline TextTranslateRequest& setTranslateScene(string translateScene) { DARABONBA_PTR_SET_VALUE(translateScene_, translateScene) };


  protected:
    // The business scenario identifier. Optional. Valid values: e-commerce-title, e-commerce-description, e-commerce-chat, e-commerce-cpv, novel, game. If not specified or invalid, the general translation strategy is used by default.
    shared_ptr<string> bizName_ {};
    // The format type of the source text. Optional. Supports text (plain text format) and html (web page format, preserving HTML tags).
    shared_ptr<string> formatType_ {};
    // The intervention glossary ID. Optional. The glossary must be created separately in the console and its ID provided. If the glossary ID is empty, the translation result is not modified.
    shared_ptr<string> glossary_ {};
    // The source language code. Optional. If not specified, the language is automatically detected. You can pass auto for language detection.
    shared_ptr<string> sourceLanguage_ {};
    // The list of texts to translate. Required. The total character length cannot exceed 50,000, and the list length cannot exceed 50.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> sourceTextList_ {};
    // The target language code. Required. Supports more than 100 language directions. For details, refer to the supported language directions list.
    // 
    // This parameter is required.
    shared_ptr<string> targetLanguage_ {};
    // The format of the translation text. **html** (web page format. This setting processes both the source text and translated text in HTML format). **text** (text format. This setting processes both the source text and translated result as plain text without format processing).
    shared_ptr<string> translateScene_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
#endif
