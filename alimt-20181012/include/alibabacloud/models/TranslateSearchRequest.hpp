// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRANSLATESEARCHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TRANSLATESEARCHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alimt20181012
{
namespace Models
{
  class TranslateSearchRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TranslateSearchRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FormatType, formatType_);
      DARABONBA_PTR_TO_JSON(Scene, scene_);
      DARABONBA_PTR_TO_JSON(SourceLanguage, sourceLanguage_);
      DARABONBA_PTR_TO_JSON(SourceText, sourceText_);
      DARABONBA_PTR_TO_JSON(TargetLanguage, targetLanguage_);
    };
    friend void from_json(const Darabonba::Json& j, TranslateSearchRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FormatType, formatType_);
      DARABONBA_PTR_FROM_JSON(Scene, scene_);
      DARABONBA_PTR_FROM_JSON(SourceLanguage, sourceLanguage_);
      DARABONBA_PTR_FROM_JSON(SourceText, sourceText_);
      DARABONBA_PTR_FROM_JSON(TargetLanguage, targetLanguage_);
    };
    TranslateSearchRequest() = default ;
    TranslateSearchRequest(const TranslateSearchRequest &) = default ;
    TranslateSearchRequest(TranslateSearchRequest &&) = default ;
    TranslateSearchRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TranslateSearchRequest() = default ;
    TranslateSearchRequest& operator=(const TranslateSearchRequest &) = default ;
    TranslateSearchRequest& operator=(TranslateSearchRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->formatType_ == nullptr
        && return this->scene_ == nullptr && return this->sourceLanguage_ == nullptr && return this->sourceText_ == nullptr && return this->targetLanguage_ == nullptr; };
    // formatType Field Functions 
    bool hasFormatType() const { return this->formatType_ != nullptr;};
    void deleteFormatType() { this->formatType_ = nullptr;};
    inline string formatType() const { DARABONBA_PTR_GET_DEFAULT(formatType_, "") };
    inline TranslateSearchRequest& setFormatType(string formatType) { DARABONBA_PTR_SET_VALUE(formatType_, formatType) };


    // scene Field Functions 
    bool hasScene() const { return this->scene_ != nullptr;};
    void deleteScene() { this->scene_ = nullptr;};
    inline string scene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
    inline TranslateSearchRequest& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


    // sourceLanguage Field Functions 
    bool hasSourceLanguage() const { return this->sourceLanguage_ != nullptr;};
    void deleteSourceLanguage() { this->sourceLanguage_ = nullptr;};
    inline string sourceLanguage() const { DARABONBA_PTR_GET_DEFAULT(sourceLanguage_, "") };
    inline TranslateSearchRequest& setSourceLanguage(string sourceLanguage) { DARABONBA_PTR_SET_VALUE(sourceLanguage_, sourceLanguage) };


    // sourceText Field Functions 
    bool hasSourceText() const { return this->sourceText_ != nullptr;};
    void deleteSourceText() { this->sourceText_ = nullptr;};
    inline string sourceText() const { DARABONBA_PTR_GET_DEFAULT(sourceText_, "") };
    inline TranslateSearchRequest& setSourceText(string sourceText) { DARABONBA_PTR_SET_VALUE(sourceText_, sourceText) };


    // targetLanguage Field Functions 
    bool hasTargetLanguage() const { return this->targetLanguage_ != nullptr;};
    void deleteTargetLanguage() { this->targetLanguage_ = nullptr;};
    inline string targetLanguage() const { DARABONBA_PTR_GET_DEFAULT(targetLanguage_, "") };
    inline TranslateSearchRequest& setTargetLanguage(string targetLanguage) { DARABONBA_PTR_SET_VALUE(targetLanguage_, targetLanguage) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> formatType_ = nullptr;
    // This parameter is required.
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
