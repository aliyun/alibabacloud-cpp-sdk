// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETASYNCTRANSLATERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETASYNCTRANSLATERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alimt20181012
{
namespace Models
{
  class GetAsyncTranslateResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAsyncTranslateResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DetectedLanguage, detectedLanguage_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TranslatedText, translatedText_);
      DARABONBA_PTR_TO_JSON(WordCount, wordCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetAsyncTranslateResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DetectedLanguage, detectedLanguage_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TranslatedText, translatedText_);
      DARABONBA_PTR_FROM_JSON(WordCount, wordCount_);
    };
    GetAsyncTranslateResponseBodyData() = default ;
    GetAsyncTranslateResponseBodyData(const GetAsyncTranslateResponseBodyData &) = default ;
    GetAsyncTranslateResponseBodyData(GetAsyncTranslateResponseBodyData &&) = default ;
    GetAsyncTranslateResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAsyncTranslateResponseBodyData() = default ;
    GetAsyncTranslateResponseBodyData& operator=(const GetAsyncTranslateResponseBodyData &) = default ;
    GetAsyncTranslateResponseBodyData& operator=(GetAsyncTranslateResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->detectedLanguage_ == nullptr
        && return this->status_ == nullptr && return this->translatedText_ == nullptr && return this->wordCount_ == nullptr; };
    // detectedLanguage Field Functions 
    bool hasDetectedLanguage() const { return this->detectedLanguage_ != nullptr;};
    void deleteDetectedLanguage() { this->detectedLanguage_ = nullptr;};
    inline string detectedLanguage() const { DARABONBA_PTR_GET_DEFAULT(detectedLanguage_, "") };
    inline GetAsyncTranslateResponseBodyData& setDetectedLanguage(string detectedLanguage) { DARABONBA_PTR_SET_VALUE(detectedLanguage_, detectedLanguage) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetAsyncTranslateResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // translatedText Field Functions 
    bool hasTranslatedText() const { return this->translatedText_ != nullptr;};
    void deleteTranslatedText() { this->translatedText_ = nullptr;};
    inline string translatedText() const { DARABONBA_PTR_GET_DEFAULT(translatedText_, "") };
    inline GetAsyncTranslateResponseBodyData& setTranslatedText(string translatedText) { DARABONBA_PTR_SET_VALUE(translatedText_, translatedText) };


    // wordCount Field Functions 
    bool hasWordCount() const { return this->wordCount_ != nullptr;};
    void deleteWordCount() { this->wordCount_ = nullptr;};
    inline string wordCount() const { DARABONBA_PTR_GET_DEFAULT(wordCount_, "") };
    inline GetAsyncTranslateResponseBodyData& setWordCount(string wordCount) { DARABONBA_PTR_SET_VALUE(wordCount_, wordCount) };


  protected:
    std::shared_ptr<string> detectedLanguage_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> translatedText_ = nullptr;
    std::shared_ptr<string> wordCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alimt20181012
#endif
