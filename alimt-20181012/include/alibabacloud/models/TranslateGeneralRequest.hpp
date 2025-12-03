// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRANSLATEGENERALREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TRANSLATEGENERALREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alimt20181012
{
namespace Models
{
  class TranslateGeneralRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TranslateGeneralRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Context, context_);
      DARABONBA_PTR_TO_JSON(FormatType, formatType_);
      DARABONBA_PTR_TO_JSON(Scene, scene_);
      DARABONBA_PTR_TO_JSON(SourceLanguage, sourceLanguage_);
      DARABONBA_PTR_TO_JSON(SourceText, sourceText_);
      DARABONBA_PTR_TO_JSON(TargetLanguage, targetLanguage_);
    };
    friend void from_json(const Darabonba::Json& j, TranslateGeneralRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Context, context_);
      DARABONBA_PTR_FROM_JSON(FormatType, formatType_);
      DARABONBA_PTR_FROM_JSON(Scene, scene_);
      DARABONBA_PTR_FROM_JSON(SourceLanguage, sourceLanguage_);
      DARABONBA_PTR_FROM_JSON(SourceText, sourceText_);
      DARABONBA_PTR_FROM_JSON(TargetLanguage, targetLanguage_);
    };
    TranslateGeneralRequest() = default ;
    TranslateGeneralRequest(const TranslateGeneralRequest &) = default ;
    TranslateGeneralRequest(TranslateGeneralRequest &&) = default ;
    TranslateGeneralRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TranslateGeneralRequest() = default ;
    TranslateGeneralRequest& operator=(const TranslateGeneralRequest &) = default ;
    TranslateGeneralRequest& operator=(TranslateGeneralRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->context_ == nullptr
        && return this->formatType_ == nullptr && return this->scene_ == nullptr && return this->sourceLanguage_ == nullptr && return this->sourceText_ == nullptr && return this->targetLanguage_ == nullptr; };
    // context Field Functions 
    bool hasContext() const { return this->context_ != nullptr;};
    void deleteContext() { this->context_ = nullptr;};
    inline string context() const { DARABONBA_PTR_GET_DEFAULT(context_, "") };
    inline TranslateGeneralRequest& setContext(string context) { DARABONBA_PTR_SET_VALUE(context_, context) };


    // formatType Field Functions 
    bool hasFormatType() const { return this->formatType_ != nullptr;};
    void deleteFormatType() { this->formatType_ = nullptr;};
    inline string formatType() const { DARABONBA_PTR_GET_DEFAULT(formatType_, "") };
    inline TranslateGeneralRequest& setFormatType(string formatType) { DARABONBA_PTR_SET_VALUE(formatType_, formatType) };


    // scene Field Functions 
    bool hasScene() const { return this->scene_ != nullptr;};
    void deleteScene() { this->scene_ = nullptr;};
    inline string scene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
    inline TranslateGeneralRequest& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


    // sourceLanguage Field Functions 
    bool hasSourceLanguage() const { return this->sourceLanguage_ != nullptr;};
    void deleteSourceLanguage() { this->sourceLanguage_ = nullptr;};
    inline string sourceLanguage() const { DARABONBA_PTR_GET_DEFAULT(sourceLanguage_, "") };
    inline TranslateGeneralRequest& setSourceLanguage(string sourceLanguage) { DARABONBA_PTR_SET_VALUE(sourceLanguage_, sourceLanguage) };


    // sourceText Field Functions 
    bool hasSourceText() const { return this->sourceText_ != nullptr;};
    void deleteSourceText() { this->sourceText_ = nullptr;};
    inline string sourceText() const { DARABONBA_PTR_GET_DEFAULT(sourceText_, "") };
    inline TranslateGeneralRequest& setSourceText(string sourceText) { DARABONBA_PTR_SET_VALUE(sourceText_, sourceText) };


    // targetLanguage Field Functions 
    bool hasTargetLanguage() const { return this->targetLanguage_ != nullptr;};
    void deleteTargetLanguage() { this->targetLanguage_ = nullptr;};
    inline string targetLanguage() const { DARABONBA_PTR_GET_DEFAULT(targetLanguage_, "") };
    inline TranslateGeneralRequest& setTargetLanguage(string targetLanguage) { DARABONBA_PTR_SET_VALUE(targetLanguage_, targetLanguage) };


  protected:
    std::shared_ptr<string> context_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> formatType_ = nullptr;
    std::shared_ptr<string> scene_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> sourceLanguage_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> sourceText_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> targetLanguage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alimt20181012
#endif
