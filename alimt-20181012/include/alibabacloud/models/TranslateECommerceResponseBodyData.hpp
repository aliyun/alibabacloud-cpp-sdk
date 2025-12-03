// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRANSLATEECOMMERCERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_TRANSLATEECOMMERCERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alimt20181012
{
namespace Models
{
  class TranslateECommerceResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TranslateECommerceResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DetectedLanguage, detectedLanguage_);
      DARABONBA_PTR_TO_JSON(Translated, translated_);
      DARABONBA_PTR_TO_JSON(WordCount, wordCount_);
    };
    friend void from_json(const Darabonba::Json& j, TranslateECommerceResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DetectedLanguage, detectedLanguage_);
      DARABONBA_PTR_FROM_JSON(Translated, translated_);
      DARABONBA_PTR_FROM_JSON(WordCount, wordCount_);
    };
    TranslateECommerceResponseBodyData() = default ;
    TranslateECommerceResponseBodyData(const TranslateECommerceResponseBodyData &) = default ;
    TranslateECommerceResponseBodyData(TranslateECommerceResponseBodyData &&) = default ;
    TranslateECommerceResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TranslateECommerceResponseBodyData() = default ;
    TranslateECommerceResponseBodyData& operator=(const TranslateECommerceResponseBodyData &) = default ;
    TranslateECommerceResponseBodyData& operator=(TranslateECommerceResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->detectedLanguage_ == nullptr
        && return this->translated_ == nullptr && return this->wordCount_ == nullptr; };
    // detectedLanguage Field Functions 
    bool hasDetectedLanguage() const { return this->detectedLanguage_ != nullptr;};
    void deleteDetectedLanguage() { this->detectedLanguage_ = nullptr;};
    inline string detectedLanguage() const { DARABONBA_PTR_GET_DEFAULT(detectedLanguage_, "") };
    inline TranslateECommerceResponseBodyData& setDetectedLanguage(string detectedLanguage) { DARABONBA_PTR_SET_VALUE(detectedLanguage_, detectedLanguage) };


    // translated Field Functions 
    bool hasTranslated() const { return this->translated_ != nullptr;};
    void deleteTranslated() { this->translated_ = nullptr;};
    inline string translated() const { DARABONBA_PTR_GET_DEFAULT(translated_, "") };
    inline TranslateECommerceResponseBodyData& setTranslated(string translated) { DARABONBA_PTR_SET_VALUE(translated_, translated) };


    // wordCount Field Functions 
    bool hasWordCount() const { return this->wordCount_ != nullptr;};
    void deleteWordCount() { this->wordCount_ = nullptr;};
    inline string wordCount() const { DARABONBA_PTR_GET_DEFAULT(wordCount_, "") };
    inline TranslateECommerceResponseBodyData& setWordCount(string wordCount) { DARABONBA_PTR_SET_VALUE(wordCount_, wordCount) };


  protected:
    std::shared_ptr<string> detectedLanguage_ = nullptr;
    std::shared_ptr<string> translated_ = nullptr;
    std::shared_ptr<string> wordCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alimt20181012
#endif
